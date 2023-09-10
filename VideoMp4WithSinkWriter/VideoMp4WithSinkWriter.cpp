#include <iostream>

#include <windows.h>

#include <mfapi.h>
#include <mfidl.h>
#include <mfreadwrite.h>

#pragma comment(lib, "mfplat.lib")
#pragma comment(lib, "mfreadwrite.lib")

#include <unknwn.h>
#include <winrt/base.h>

#include <wil/resource.h>
#include <wil/com.h>

#include "ReferenceSource_h.h"
#include "ReferenceSource_i.c"

int wmain()
{
    try
    {
        winrt::init_apartment();
        THROW_IF_FAILED(MFStartup(MF_VERSION));
        auto&& Scope = wil::scope_exit([] { THROW_IF_FAILED(MFShutdown()); });

        auto const MediaSource = wil::CoCreateInstance<IMFMediaSource>(__uuidof(VideoMediaSource));
        {
            auto const VideoMediaSource = MediaSource.query<IVideoMediaSource>();
            wil::unique_variant MediaType;
            MediaType.vt = VT_BSTR;
            MediaType.bstrVal = SysAllocString(L"{773C9AC0-3274-11D0-B724-00AA006C1A01}"); // MEDIASUBTYPE_ARGB32
            THROW_IF_FAILED(VideoMediaSource->SetMediaType(1280, 720, MediaType));
            THROW_IF_FAILED(VideoMediaSource->SetMediaTypeRate(25, 1));
            THROW_IF_FAILED(VideoMediaSource->put_Duration(10.0));
        }
        wil::com_ptr<IMFSourceReader> SourceReader;
        THROW_IF_FAILED(MFCreateSourceReaderFromMediaSource(MediaSource.get(), nullptr, SourceReader.put()));

        for(; ; )
        {
            DWORD StreamIndex;
            DWORD StreamFlags;
            LONGLONG Time;
            wil::com_ptr<IMFSample> Sample;
            THROW_IF_FAILED(SourceReader->ReadSample(MF_SOURCE_READER_FIRST_VIDEO_STREAM, 0, &StreamIndex, &StreamFlags, &Time, Sample.put()));
            if(StreamFlags & MF_SOURCE_READERF_ENDOFSTREAM)
            {
                WI_ASSERT(StreamFlags == MF_SOURCE_READERF_ENDOFSTREAM);
                WI_ASSERT(!Sample);
                break;
            }
            WI_ASSERT(StreamFlags == 0);
            WI_ASSERT(Sample);
            std::wcout << L"Video sample at " << Time / 1E7 << std::endl;
        }

    }
    CATCH_LOG();
    return 0;
}

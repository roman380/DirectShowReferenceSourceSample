#include <iostream>

#include <windows.h>

#include <mfapi.h>
#include <mfidl.h>
#include <mfreadwrite.h>

#pragma comment(lib, "mfplat.lib")
#pragma comment(lib, "mfreadwrite.lib")
#pragma comment(lib, "mfuuid.lib")

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

        #pragma region Source of ARGB32 video frames from ReferenceSource.dll
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
        #pragma endregion

        wil::com_ptr<IMFSinkWriter> SinkWriter;
        THROW_IF_FAILED(MFCreateSinkWriterFromURL(L"VideoMp4WithSinkWriter Output.mp4", nullptr, nullptr, SinkWriter.put()));
        wil::com_ptr<IMFMediaType> OutputMediaType;
        THROW_IF_FAILED(MFCreateMediaType(OutputMediaType.put()));
        THROW_IF_FAILED(OutputMediaType->SetGUID(MF_MT_MAJOR_TYPE, MFMediaType_Video));
        THROW_IF_FAILED(OutputMediaType->SetGUID(MF_MT_SUBTYPE, MFVideoFormat_H264));
        THROW_IF_FAILED(MFSetAttributeRatio(OutputMediaType.get(), MF_MT_FRAME_RATE, 25u, 1u));
        THROW_IF_FAILED(MFSetAttributeSize(OutputMediaType.get(), MF_MT_FRAME_SIZE, 1280u, 720u));
        THROW_IF_FAILED(OutputMediaType->SetUINT32(MF_MT_INTERLACE_MODE, MFVideoInterlace_Progressive));
        THROW_IF_FAILED(OutputMediaType->SetUINT32(MF_MT_AVG_BITRATE, 5'000'000u));
        DWORD SinkWriterStreamIndex;
        THROW_IF_FAILED(SinkWriter->AddStream(OutputMediaType.get(), &SinkWriterStreamIndex));
        wil::com_ptr<IMFMediaType> InputMediaType;
        THROW_IF_FAILED(MFCreateMediaType(InputMediaType.put()));
        THROW_IF_FAILED(InputMediaType->SetGUID(MF_MT_MAJOR_TYPE, MFMediaType_Video));
        THROW_IF_FAILED(InputMediaType->SetGUID(MF_MT_SUBTYPE, MFVideoFormat_ARGB32));
        THROW_IF_FAILED(MFSetAttributeRatio(InputMediaType.get(), MF_MT_FRAME_RATE, 25u, 1u));
        THROW_IF_FAILED(MFSetAttributeSize(InputMediaType.get(), MF_MT_FRAME_SIZE, 1280u, 720u));
        THROW_IF_FAILED(InputMediaType->SetUINT32(MF_MT_INTERLACE_MODE, MFVideoInterlace_Progressive));
        THROW_IF_FAILED(InputMediaType->SetUINT32(MF_MT_DEFAULT_STRIDE, 1280u * 4)); // Top to bottom, as it comes from Direct2D and unlike old school bitmaps
        THROW_IF_FAILED(SinkWriter->SetInputMediaType(0, InputMediaType.get(), nullptr));

        THROW_IF_FAILED(SinkWriter->BeginWriting());
        for(; ; )
        {
            #pragma region Next ARGB32 video frame
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
            #pragma endregion 

            THROW_IF_FAILED(SinkWriter->WriteSample(0, Sample.get()));
        }
        THROW_IF_FAILED(SinkWriter->Finalize());
    }
    CATCH_LOG();
    return 0;
}

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

int wmain()
{
    try
    {
        winrt::init_apartment();
        THROW_IF_FAILED(MFStartup(MF_VERSION));
        auto&& Scope = wil::scope_exit([] { THROW_IF_FAILED(MFShutdown()); });

        static std::pair<int64_t, int64_t> constexpr const g_TrimTime = std::make_pair(2'000'0000ll, 8'000'0000ll); // Trim before 2s and after 8s
        WI_ASSERT(g_TrimTime.first < g_TrimTime.second);

        // WARN: Run VideoMp4WithSinkWriter first to produce the file, also set working directory to $(TargetDir) to run from debugger
        wil::com_ptr<IMFSourceReader> SourceReader;
        THROW_IF_FAILED(MFCreateSourceReaderFromURL(L"VideoMp4WithSinkWriter Output.mp4", nullptr, SourceReader.put()));
        wil::com_ptr<IMFMediaType> MediaType;
        THROW_IF_FAILED(SourceReader->GetNativeMediaType(MF_SOURCE_READER_FIRST_VIDEO_STREAM, 0, MediaType.put()));
        wil::unique_prop_variant Position;
        Position.vt = VT_I8;
        Position.hVal.QuadPart = g_TrimTime.first;
        THROW_IF_FAILED(SourceReader->SetCurrentPosition(GUID_NULL, Position));

        wil::com_ptr<IMFSinkWriter> SinkWriter;
        THROW_IF_FAILED(MFCreateSinkWriterFromURL(L"TrimVideoMp4WithSourceReaderSinkWriter Output.mp4", nullptr, nullptr, SinkWriter.put()));
        DWORD SinkWriterStreamIndex;
        THROW_IF_FAILED(SinkWriter->AddStream(MediaType.get(), &SinkWriterStreamIndex));
        THROW_IF_FAILED(SinkWriter->SetInputMediaType(SinkWriterStreamIndex, MediaType.get(), nullptr));

        THROW_IF_FAILED(SinkWriter->BeginWriting());
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
            if(Time >= g_TrimTime.second)
                break;
            std::wcout << L"Video sample at " << Time / 1E7 << std::endl;

            Sample->SetSampleTime(Time - g_TrimTime.first);
            THROW_IF_FAILED(SinkWriter->WriteSample(SinkWriterStreamIndex, Sample.get()));
        }
        THROW_IF_FAILED(SinkWriter->Finalize());
    }
    CATCH_LOG();
    return 0;
}

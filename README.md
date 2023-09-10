# DirectShowReferenceSourceSample

Sample projects (rather even code snippets, though buildable and runnable) around [ReferenceSource.dll](https://alax.info/blog/?s=referencesource).

## Projects

- [`VideoMp4WithSinkWriter`](VideoMp4WithSinkWriter/README.md) - produces video frames using DirectShowReferenceSource.dll and writes them into an H.264/AVC MP4 file using [Media Foundation Sink Writer API](https://learn.microsoft.com/en-us/windows/win32/medfound/sink-writer).
- [`TrimVideoMp4WithSourceReaderSinkWriter`](TrimVideoMp4WithSourceReaderSinkWriter/README.md) - trims `VideoMp4WithSinkWriter` output at IDR positions with Media Foundation.

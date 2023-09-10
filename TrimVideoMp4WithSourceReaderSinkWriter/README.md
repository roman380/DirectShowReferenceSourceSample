# TrimVideoMp4WithSourceReaderSinkWriter

Takes 10s file produced by [`VideoMp4WithSinkWriter`](../VideoMp4WithSinkWriter) and uses [Source Reader](https://learn.microsoft.com/en-us/windows/win32/medfound/source-reader) and [Sink Writer](https://learn.microsoft.com/en-us/windows/win32/medfound/sink-writer) to copy video H.264/AVC data from one file to another trimming the content at IDR positions.

// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1, Size = 0x20)]
public record struct DSARChunk {
	public long Offset { get; set; }
	public long CompressedOffset { get; set; }
	public int Size { get; set; }
	public int CompressedSize { get; set; }
	public DSARCompression CompressionType { get; set; }
}

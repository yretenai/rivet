// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

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

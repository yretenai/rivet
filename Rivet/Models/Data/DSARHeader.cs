// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct DSARHeader {
	public uint Magic { get; set; }
	public byte VersionMajor { get; set; }
	public byte VersionMinor { get; set; }
	public byte VersionPatch { get; set; }
	public byte Flags { get; set; }
	public int Count { get; set; }
	public int FirstChunkOffset { get; set; }
	public long Size { get; set; }
	public long Padding { get; set; }
}

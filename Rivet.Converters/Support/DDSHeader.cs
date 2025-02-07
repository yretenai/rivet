// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Converters.Support;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct DDSHeader() {
	public uint Magic { get; set; } = 0x20534444;
	public uint Size { get; set; } = 124;
	public DDSFlags Flags { get; set; } = DDSFlags.MipMappedTexture;
	public int Height { get; set; }
	public int Width { get; set; }
	public uint Pitch { get; set; }
	public int Depth { get; set; }
	public int MipMapCount { get; set; }
	public ulong Reserved1 { get; set; }
	public ulong Reserved2 { get; set; }
	public ulong Reserved3 { get; set; }
	public ulong Reserved4 { get; set; }
	public ulong Reserved5 { get; set; }
	public uint Reserved6 { get; set; }

	public DDSPixelFormat PixelFormat { get; set; } = new();
	public DDSCaps Caps { get; set; }
	public DDSCaps2 Caps2 { get; set; }
	public uint Caps3 { get; set; }
	public uint Caps4 { get; set; }
	public uint Reserved7 { get; set; }
}

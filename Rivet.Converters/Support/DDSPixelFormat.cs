// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Converters.Support;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct DDSPixelFormat() {
	public uint Size { get; set; } = 32;
	public DDSPixelFormatFlags Flags { get; set; } = DDSPixelFormatFlags.FourCC;
	public uint FourCC { get; set; } = 0x30315844;
	public uint RGBBitCount { get; set; }
	public uint RBitMask { get; set; }
	public uint GBitMask { get; set; }
	public uint BBitMask { get; set; }
	public uint ABitMask { get; set; }
}

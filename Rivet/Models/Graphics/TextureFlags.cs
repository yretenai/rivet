// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Runtime.InteropServices;

namespace Rivet.Models.Graphics;

[StructLayout(LayoutKind.Sequential, Pack = 1, Size = 2)]
public record struct TextureFlags {
	public ushort Value { get; set; }

	public TextureType Type => (TextureType) (Value & 0b1111);
	public TextureFilter Filter => (TextureFilter) ((Value >> 4) & 0b111);
	public bool sRGB => ((Value >> 7) & 1) == 1;
	public bool NoStream => ((Value >> 8) & 1) == 1;
	public bool Shadow => ((Value >> 9) & 1) == 1;
	public bool Default => ((Value >> 10) & 1) == 1;
	public bool Deprecated => ((Value >> 11) & 1) == 1;
	public byte Remainder => (byte)((Value >> 12) & 0b1111);
}

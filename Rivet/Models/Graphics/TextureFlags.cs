// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Runtime.InteropServices;

namespace Rivet.Models.Graphics;

[StructLayout(LayoutKind.Sequential, Pack = 1, Size = 2)]
public record struct TextureFlags {
	public ushort Value { get; set; }

	public byte Unknown => (byte) (Value & 0b1111);
	public TextureDimension Dimension => (TextureDimension) ((Value >> 4) & 0b111);
	public ushort Remainder => (ushort) (Value >> 7);
}

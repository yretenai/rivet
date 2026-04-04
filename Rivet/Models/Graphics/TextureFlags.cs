// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Graphics;

[StructLayout(LayoutKind.Sequential, Pack = 1, Size = 2)]
public record struct TextureFlags {
	public ushort Value { get; set; }

	public byte Unknown => (byte) (Value & 0b1111);
	public TextureDimension Dimension => (TextureDimension) ((Value >> 4) & 0b111);
	public TextureContentType ContentType => (TextureContentType) ((Value >> 7) & 0b1111111);
	public ushort Remainder => (ushort) (Value >> 14);
}

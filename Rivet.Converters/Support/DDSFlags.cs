// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Converters.Support;

[Flags]
public enum DDSFlags : uint {
	Caps = 0x1,
	Height = 0x2,
	Width = 0x4,
	Pitch = 0x8,
	PixelFormat = 0x1000,
	MipMapCount = 0x20000,
	Linear = 0x80000,
	Depth = 0x800000,

	Texture = Caps | Height | Width | PixelFormat,
	RGBTexture = Texture | Pitch,
	DXTTexture = Texture | Linear,
	MipMappedRGBTexture = RGBTexture | MipMapCount,
	MipMappedDXTTexture = DXTTexture | MipMapCount,
}

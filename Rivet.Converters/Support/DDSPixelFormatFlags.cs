// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MIT

namespace Rivet.Converters.Support;

[Flags]
public enum DDSPixelFormatFlags : uint {
	None = 0,
	AlphaPixels = 0x1,
	Alpha = 0x2,
	FourCC = 0x4,
	RGB = 0x40,
	YUV = 0x200,
	Luminance = 0x20000,
}

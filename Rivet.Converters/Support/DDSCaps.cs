// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MIT

namespace Rivet.Converters.Support;

[Flags]
public enum DDSCaps : uint {
	None = 0,
	Complex = 0x8,
	Texture = 0x1000,
	MipMapped = 0x400000,
}

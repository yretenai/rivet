// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Converters.Support;

[Flags]
public enum DDSCaps : uint {
	None = 0,
	Complex = 0x8,
	Texture = 0x1000,
	MipMapped = 0x400000,
}

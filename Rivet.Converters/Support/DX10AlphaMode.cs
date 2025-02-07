// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Converters.Support;

public enum DX10AlphaMode : uint {
	none = 0x0,
	Straight = 0x1,
	PreMultiplied = 0x2,
	Opaque = 0x3,
	Custom = 0x4,
}

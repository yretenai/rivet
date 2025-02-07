// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models.Graphics;

[Flags]
public enum TextureFilter : ushort {
	Point = 0,
	Linear = 1,
	Anisotropic = 2,
}

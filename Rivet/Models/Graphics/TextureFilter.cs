// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.Models.Graphics;

[Flags]
public enum TextureFilter : ushort {
	Point = 0,
	Linear = 1,
	Anisotropic = 2,
}

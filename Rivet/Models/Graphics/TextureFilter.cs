// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models.Graphics;

[Flags]
public enum TextureFilter : ushort {
	Point = 0,
	Linear = 1,
	Anisotropic = 2,
}

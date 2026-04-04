// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Converters.Support;

[Flags]
public enum DDSCaps2 : uint {
	CubeMap = 0x200,
	CubeMapPositiveX = 0x400,
	CubeMapNegativeX = 0x800,
	CubeMapPositiveY = 0x1000,
	CubeMapNegativeY = 0x2000,
	CubeMapPositiveZ = 0x4000,
	CubeMapNegativeZ = 0x8000,
	Volume = 0x200000,
	CubeMapAll = CubeMap | CubeMapPositiveX | CubeMapPositiveY | CubeMapPositiveZ | CubeMapNegativeX | CubeMapNegativeY | CubeMapNegativeZ,
}

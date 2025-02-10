// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Converters.Support;

[Flags]
public enum DX10Flags : uint {
	None = 0,
	GenerateMips = 0x1,
	Shared = 0x2,
	TextureCube = 0x4,
	DrawDirectArgs = 0x10,
	RawViews = 0x20,
	Structured = 0x40,
	Clamp = 0x80,
	SharedKeyedMutex = 0x100,
	GDICompatible = 0x200,
	SharedNTHandle = 0x800,
	RestrictedContent = 0x1000,
	RestrictSharedResource = 0x2000,
	RestrictSharedResourceDriver = 0x4000,
	Guarded = 0x8000,
	TilePool = 0x20000,
	Tiled = 0x40000,
	HWProtected = 0x80000,
}

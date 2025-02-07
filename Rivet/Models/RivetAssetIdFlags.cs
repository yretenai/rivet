// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models;

[Flags]
public enum RivetAssetIdFlags {
	None = 0b00,
	Ext = 0b01, // only 32-bit wem hashes have this
	Shipped = 0b10, // assumption, all files have this
}

public static class RivetAssetIdFlagsExtensions {
	public static bool HasFlagFast(this RivetAssetIdFlags value, RivetAssetIdFlags flag) => (value & flag) != 0;
}

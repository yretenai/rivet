// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetHeader {
	public AssetVersion Version { get; set; }

	// sizes of each block, may be 0 or spill into .stream
	// .model: 0 - data, 1 - geometry
	// _art.zone: 0 - data, 1 - physics, 2 - hlod, 3 - texture
	public AssetSizes Sizes { get; set; }

	public Array16 FormatData { get; set; }
}

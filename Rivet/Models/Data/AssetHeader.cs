// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetHeader {
	public RivetTypeId Schema { get; set; }

	// sizes of each block, may be 0 or spill into .stream
	public Int4Array Sizes { get; set; }

	// _art.zone: 0 - main block, 1 - physics, 2 - unknown, 3 - texture data
	public Int4Array FormatData { get; set; }
}

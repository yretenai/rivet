// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;
using Rivet.IO;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetHeader {
	public RivetTypeId Schema { get; set; }

	// sizes of each block, may be 0 or spill into .stream
	public AssetSizes Sizes { get; set; }

	// _art.zone: 0 - data, 1 - physics, 2 - hlod, 3 - texture
	public Array16 FormatData { get; set; }
}

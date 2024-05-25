// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetHeader {
	public RivetTypeId Schema { get; set; }

	// sizes of each block, may be 0 or spill into .stream
	public Int4Array Sizes { get; set; }

	// _art.zone: 0 - main block, 1 - physics, 2 - unknown, 3 - texture data
	public ushort Unknown14 { get; set; } // second-smallest number
	public ushort Unknown16 { get; set; } // flags, likely. 0x100, 0x200, 0x400, 0x800, 0x1000
	public uint Unknown18 { get; set; } // smaller number, probably size of some chunk
	public uint Unknown1C { get; set; } // 3 possible values, 0x3010248, 0x3020148, 0x3030048
	public uint Unknown20 { get; set; } // large number, scales with size of asset, caps at 0x10000000
}

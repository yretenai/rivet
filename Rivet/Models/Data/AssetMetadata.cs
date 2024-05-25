// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.Models.Data;

public record struct AssetMetadata {
	public int Size { get; set; }
	public int ArchiveId { get; set; }
	public uint Offset { get; set; }
	public int HeaderOffset { get; set; }
}

// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models.Data;

public record struct AssetMetadata {
	public int Size { get; set; }
	public int ArchiveId { get; set; }
	public uint Offset { get; set; }
	public int HeaderOffset { get; set; }
}

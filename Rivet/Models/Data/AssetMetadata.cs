// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models.Data;

public record struct AssetMetadata {
	public int Size { get; set; }
	public int ArchiveId { get; set; }
	public uint Offset { get; set; }
	public int HeaderOffset { get; set; }
}

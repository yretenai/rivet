// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.Models.Data;

public record struct AssetFileMetadataSpider {
	public int Id { get; set; }
	public int ChunkId { get; set; }
	public Byte64Array Name { get; set; }
}

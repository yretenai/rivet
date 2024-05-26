// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.Models.Data;

public record struct AssetMetadataSpider {
	public int InstallId { get; set; }
	public int Size { get; set; }
	public int DupeId { get; set; }
}

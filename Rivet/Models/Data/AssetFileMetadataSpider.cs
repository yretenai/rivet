// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetFileMetadataSpider {
	public AssetCategory Category { get; set; }
	public ushort Id { get; set; }
	public Locale Locale { get; set; }
	public int ChunkId { get; set; }
	public Byte64Array Name { get; set; }
}

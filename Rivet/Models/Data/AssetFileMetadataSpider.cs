// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetFileMetadataSpider {
	public AssetCategory Category { get; set; }
	public ushort Id { get; set; }
	public Locale Locale { get; set; }
	public int ChunkId { get; set; }
	public Array64 Name { get; set; }
}

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetMetadataSpider {
	public int InstallId { get; set; }
	public int Size { get; set; }
	public int DupeId { get; set; }
}

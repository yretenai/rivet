// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetFileMetadata {
	public Array64 Name { get; set; }
	public AssetCategory Category { get; set; }
	public Locale Locale { get; set; }
}

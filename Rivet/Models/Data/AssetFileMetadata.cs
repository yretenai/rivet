// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetFileMetadata {
	public Byte64Array Name { get; set; }
	public AssetCategory Category { get; set; }
	public Locale Locale { get; set; }
}

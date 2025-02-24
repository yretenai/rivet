// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct DAT1Header {
	public uint Magic { get; set; }
	public AssetVersion Version { get; set; }
	public int Size { get; set; }
	public ushort SectionCount { get; set; }
	public ushort Reserved { get; set; }
}

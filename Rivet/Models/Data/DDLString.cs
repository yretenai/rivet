// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 8)]
public record struct DDLString {
	public int Length { get; set; }
	public uint Hash { get; set; }
	public ulong Checksum { get; set; }
}

[StructLayout(LayoutKind.Sequential, Pack = 8)]
public record DDLFullString(string Value, RivetTypeId Type, RivetAssetId Asset);

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.DDL.Models;

[StructLayout(LayoutKind.Sequential, Pack = 8)]
public record struct DDLString {
	public int Length { get; set; }
	public uint Hash { get; set; }
	public ulong Checksum { get; set; }
}

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.DDL.Models;

[StructLayout(LayoutKind.Sequential, Pack = 8)]
public record struct DDLHeader {
	public const uint MagicValue = 0x03150044;

	public uint Zero { get; set; }
	public uint Magic { get; set; }
	public int FieldCount { get; set; }
	public int Size { get; set; }
}

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL.Generator.Structs;

public class DDLBitsetValue {
	public uint Id { get; set; }
	public string? Name { get; set; }
	public uint Value { get; set; }

	public override int GetHashCode() => (int) Id;
}

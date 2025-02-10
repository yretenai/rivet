// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL.Generator.Structs;

public class DDLBitset {
	public uint Id { get; set; }
	public List<DDLBitsetValue> Values { get; set; } = [];

	public override int GetHashCode() => (int) Id;
}

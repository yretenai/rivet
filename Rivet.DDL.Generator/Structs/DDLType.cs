// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL.Generator.Structs;

public class DDLType {
	public uint Id { get; set; }
	public string? Name { get; set; }
	public uint ComponentId { get; set; }
	public uint ParentId { get; set; }
	public int Size { get; set; }
	public List<DDLTypeField> Fields { get; set; } = [];

	public override int GetHashCode() => (int) Id;
}

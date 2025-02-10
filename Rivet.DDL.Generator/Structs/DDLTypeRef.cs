// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL.Generator.Structs;

public class DDLTypeRef {
	public uint Id { get; set; }
	public string? Name { get; set; }
	public DDLTypeRef? Parent { get; set; }

	public override int GetHashCode() => (int) Id;
}

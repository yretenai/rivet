// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Text.Json;

namespace Rivet.DDL.Generator.Structs;

public record DDLTypeField {
	public uint Id { get; set; }
	public uint TypeId { get; set; }
	public uint EnumTypeId { get; set; }
	public int Offset { get; set; }
	public DDLTypeKind Type { get; set; }
	public DDLArrayKind ArrayType { get; set; }
	public DDLTypeKind MapType { get; set; }
	public int FixedSize { get; set; }
	public DDLTypeRef? Struct { get; set; }
	public string? Name { get; set; }
	public string? Description { get; set; }
	public string? Label { get; set; }
	public string? DisplayLabel { get; set; }
	public JsonElement? Default { get; set; }

	public override int GetHashCode() => (int) Id;
}

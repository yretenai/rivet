// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL.Generator.Structs;

public record DDLVersion {
	public uint Id { get; set; }
	public string? Version { get; set; }

	public override int GetHashCode() => (int) Id;
}

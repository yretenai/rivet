// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL;

[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
public sealed class DDLTypeRootAttribute(uint id, string name) : Attribute {
	public uint Id { get; } = id;
	public string Name { get; } = name;
}

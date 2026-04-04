// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL;

[AttributeUsage(AttributeTargets.Enum | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Class)]
public sealed class DDLRegistrationAttribute(uint id, string? label = null, string? description = null) : Attribute {
	public uint Id { get; } = id;
	public string Label { get; } = label ?? string.Empty;
	public string Description { get; } = description ?? string.Empty;
}

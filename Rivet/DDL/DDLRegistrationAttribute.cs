// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL;

[AttributeUsage(AttributeTargets.Enum | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Class)]
public sealed class DDLRegistrationAttribute(uint id) : Attribute {
	public uint Id { get; } = id;
}

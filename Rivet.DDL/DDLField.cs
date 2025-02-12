// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.IO;

namespace Rivet.DDL;

public record DDLField(RivetTypeId Id, string Name, List<object?> Value) {
	public override string ToString() => $"{Name} = {Value.ElementAtOrDefault(0) ?? "None"}";
}

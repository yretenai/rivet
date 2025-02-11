// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics.CodeAnalysis;

namespace Rivet.DDL.Generator.Structs;

public record DDLRegistry {
	public HashSet<DDLEnum> Enums { get; set; } = [];
	public HashSet<DDLBitset> Bitsets { get; set; } = [];
	public HashSet<DDLTypeRef> Roots { get; set; } = [];
	public HashSet<DDLType> Types { get; set; } = [];

	public bool TryFindEnum(uint id, [MaybeNullWhen(false)] out DDLEnum value) {
		value = Enums.FirstOrDefault(x => x.Id == id || x.Id2 == id);
		return value != null;
	}

	public bool TryFindBitset(uint id, [MaybeNullWhen(false)] out DDLBitset value) {
		value = Bitsets.FirstOrDefault(x => x.Id == id);
		return value != null;
	}

	public bool TryFindType(uint id, [MaybeNullWhen(false)] out DDLType value) {
		value = Types.FirstOrDefault(x => x.Id == id);
		return value != null;
	}

	public bool TryFindAnyType(uint id, [MaybeNullWhen(false)] out object value) {
		if (TryFindEnum(id, out var enumValue)) {
			value = enumValue;
			return true;
		}

		if (TryFindBitset(id, out var bitsetValue)) {
			value = bitsetValue;
			return true;
		}

		if (TryFindType(id, out var typeValue)) {
			value = typeValue;
			return true;
		}

		value = null;
		return false;
	}
}

// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models.Data;

public enum DDLTypeKind : byte {
	UInt8 = 0,
	UInt16 = 1,
	UInt32 = 2,
	UInt64 = 3,
	Int8 = 4,
	Int16 = 5,
	Int32 = 6,
	Int64 = 7,
	Float = 8,
	Double = 9,
	String = 10,
	Enum = 11,
	Bitfield = 12,
	Struct = 13,
	Unknown = 14,
	Bool = 15,
	File = 16,
	Identifier = 17,
	Json = 18,
	Default = 19,
	Asset = 20,
}

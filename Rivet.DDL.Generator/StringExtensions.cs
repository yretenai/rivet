// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL.Generator;

public static class StringExtensions {
	public static string Sanitize(this string value) {
		return value switch {
			       "null" => "NULL",
			       ['k', _, ..] when char.IsUpper(value[1]) => value[1..],
			       _ => value,
		       };
	}
}

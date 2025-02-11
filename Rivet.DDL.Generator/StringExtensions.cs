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

	public static string Strip(this string? value) {
		value = value?.ReplaceLineEndings("\n")
		             .Replace("\n", @"\n", StringComparison.Ordinal)
		             .Replace("\t", @"\t", StringComparison.Ordinal)
		             .Replace("\"", "\\\"", StringComparison.Ordinal);

		if (string.IsNullOrWhiteSpace(value) || value.Equals("NONE", StringComparison.OrdinalIgnoreCase)) {
			return string.Empty;
		}

		return value;
	}
}

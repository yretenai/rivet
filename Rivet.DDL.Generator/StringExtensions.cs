// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Text.RegularExpressions;

namespace Rivet.DDL.Generator;

public static partial class StringExtensions {
	private static readonly Regex StripLineRegex = StripLineRegexGen();

	private static readonly Regex CollapseLineRegex = CollapseLineRegexGen();

	private static readonly Regex CollapseBracketRegex = CollapseBracketRegexGen();

	public static string Sanitize(this string value) {
		switch (value) {
			case "null":
				return "NULL";
			case ['k', _, ..] when char.IsUpper(value[1]):
				value = value[1..];
				break;
		}

		value = char.ToUpper(value[0]) + value[1..];

		return value;
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

	public static string Fixup(this string value) {
		value = StripLineRegex.Replace(value, string.Empty);
		value = CollapseLineRegex.Replace(value, "\n");
		value = CollapseBracketRegex.Replace(value, "{ }");
		return value;
	}

	[GeneratedRegex(@"^\s+$", RegexOptions.Multiline)]
	private static partial Regex StripLineRegexGen();

	[GeneratedRegex(@"\n\n\n", RegexOptions.Multiline)]
	private static partial Regex CollapseLineRegexGen();

	[GeneratedRegex(@"{\n\n\t}", RegexOptions.Multiline)]
	private static partial Regex CollapseBracketRegexGen();
}

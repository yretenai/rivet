// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Text.RegularExpressions;
using DragonLib.CommandLine;
using Rivet.Models.Data;

namespace Rivet.CLI;

public record RivetExtractFlags : RivetCLIFlags {
	[Flag("output-dir", Positional = 1, IsRequired = true)]
	public string OutputDir { get; set; } = null!;

	[Flag("dry", Help = "Do not actually extract anything")]
	public bool Dry { get; set; }

	[Flag("locale", Help = "Locale to export")]
	public Locale Locale { get; set; } = Locale.All;

	[Flag("filter", Help = "Only export assets with these paths, paths starting with 0x will be considered an Asset Id", Positional = 2)]
	public HashSet<string> Filter { get; set; } = [];

	[Flag("regex", Help = "Only export assets that match these regexes", Extra = RegexOptions.CultureInvariant | RegexOptions.Compiled)]
	public HashSet<Regex> Regex { get; set; } = [];
}

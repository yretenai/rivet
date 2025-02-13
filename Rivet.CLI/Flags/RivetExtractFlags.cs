// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Text.RegularExpressions;
using DragonLib.CommandLine;
using Rivet.Models.Data;

namespace Rivet.CLI.Flags;

public record RivetExtractFlags : RivetCLIFlags {
	[Flag("output-dir", Positional = 1, IsRequired = true)]
	public string OutputDir { get; set; } = null!;

	[Flag("dry", Help = "Do not actually extract anything")]
	public bool Dry { get; set; }

	[Flag("no-clobber", Help = "Do not overwrite files")]
	public bool NoClobber { get; set; }

	[Flag("flat", Help = "Do not build directory hierarchies")]
	public bool Flatten { get; set; }

	[Flag("locale", Help = "Locale to export")]
	public Locale Locale { get; set; } = Locale.All;

	[Flag("filter", Help = "Only export assets with these paths, paths starting with 0x will be considered an Asset Id", Positional = 2)]
	public HashSet<string> Filter { get; set; } = [];

	[Flag("regex", Help = "Only export assets that match these regexes", Extra = RegexOptions.CultureInvariant | RegexOptions.Compiled)]
	public HashSet<Regex> Regex { get; set; } = [];
}

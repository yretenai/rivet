// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

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
}

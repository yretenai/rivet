// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using DragonLib.CommandLine;

namespace Rivet.CLI.TOC;

internal record ListFlags : RivetCLIFlags {
	[Flag("dag", Help = "Also list dependency graph")]
	public bool DAG { get; set; }
}

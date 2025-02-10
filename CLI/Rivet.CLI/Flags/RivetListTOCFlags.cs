// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;

namespace Rivet.CLI.Flags;

internal record RivetListTOCFlags : RivetCLIFlags {
	[Flag("dag", Help = "Also list dependency graph")]
	public bool DAG { get; set; }
}

// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;

namespace Rivet.CLI.Flags;

internal record RivetListTOCFlags : RivetCLIFlags {
	[Flag("dag", Help = "Also list dependency graph")]
	public bool DAG { get; set; }

	[Flag("legacy", Help = "Legacy compatibility")]
	public bool Legacy { get; set; }
}

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.CommandLine;

namespace Rivet.CLI.Flags;

internal record RivetListTOCFlags : RivetCLIFlags {
	[Flag("dag", Help = "Also list dependency graph")]
	public bool DAG { get; set; }

	[Flag("fast", Help = "Do not hash files")]
	public bool Fast { get; set; }
}

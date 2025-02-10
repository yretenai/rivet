// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;

namespace Rivet.CLI.Flags;

public record RivetCLIFlags : CommandLineFlags {
	[Flag("install-dir", Positional = 0, IsRequired = true)]
	public string InstallDir { get; set; } = null!;
}

// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using DragonLib.CommandLine;

namespace Rivet.CLI;

public record RivetCLIFlags : CommandLineFlags {
	[Flag("install-dir", Positional = 0, IsRequired = true)]
	public string InstallDir { get; set; } = null!;
}

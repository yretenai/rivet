// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.CLI;

public abstract record RivetCLICommand : RivetCommand {
	protected RivetCLICommand(RivetCLIFlags flags) => Game = RivetGame.Create(flags.InstallDir);

	protected RivetGame Game { get; }
}

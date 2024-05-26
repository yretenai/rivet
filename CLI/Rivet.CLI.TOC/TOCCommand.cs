// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.CLI.TOC;

internal abstract record TOCCommand : RivetCLICommand {
	protected TOCCommand(RivetCLIFlags flags) : base(flags) { }
}

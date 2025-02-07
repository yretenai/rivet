// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.CLI.TOC;

internal abstract record TOCCommand : RivetCLICommand {
	protected TOCCommand(RivetCLIFlags flags) : base(flags) { }
}

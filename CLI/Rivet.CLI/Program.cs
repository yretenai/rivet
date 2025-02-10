// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;

namespace Rivet.CLI;

internal class Program {
	public static void Main(string[] args) {
		Command.Run<RivetCommand>(out _, out _)?.Execute();
	}
}

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.CommandLine;

namespace Rivet.CLI;

internal class Program {
	public static void Main(string[] args) {
		Command.Run<RivetCommand>(out _, out _)?.Execute();
	}
}

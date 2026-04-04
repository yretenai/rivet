// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Serilog;

namespace Rivet.CLI;

public abstract record RivetCommand {
	protected RivetCommand() => Log.Logger = new LoggerConfiguration().WriteTo.Console().CreateLogger();

	public abstract void Execute();
}

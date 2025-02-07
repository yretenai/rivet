// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using Serilog;

namespace Rivet.CLI;

public abstract record RivetCommand {
	protected RivetCommand() => Log.Logger = new LoggerConfiguration().WriteTo.Console().CreateLogger();
}

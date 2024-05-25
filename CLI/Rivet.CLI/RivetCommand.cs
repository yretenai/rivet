// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using Serilog;

namespace Rivet.CLI;

public abstract record RivetCommand {
	protected RivetCommand() => Log.Logger = new LoggerConfiguration().WriteTo.Console().CreateLogger();
}

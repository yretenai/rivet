using Serilog;

namespace Rivet.CLI;

public abstract record RivetCommand {
	protected RivetCommand() => Log.Logger = new LoggerConfiguration().WriteTo.Console().CreateLogger();
}

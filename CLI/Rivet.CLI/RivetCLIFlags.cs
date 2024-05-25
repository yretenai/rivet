using DragonLib.CommandLine;

namespace Rivet.CLI;

public record RivetCLIFlags : CommandLineFlags {
	[Flag("install-dir", Positional = 0, IsRequired = true)]
	public string InstallDir { get; set; } = null!;
}

using DragonLib.CommandLine;

namespace Rivet.CLI;

public record RivetExtractFlags : RivetCLIFlags {
	[Flag("output-dir", Positional = 1, IsRequired = true)]
	public string OutputDir { get; set; } = null!;

	[Flag("dry", Help = "Do not actually extract anything")]
	public bool Dry { get; set; }
}

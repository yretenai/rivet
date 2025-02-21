using DragonLib.CommandLine;

namespace Rivet.CLI.Flags;

public record RivetDAT1Flags : CommandLineFlags {
	[Flag("dry", Help = "Do not actually extract anything")]
	public bool Dry { get; set; }

	[Flag("no-clobber", Help = "Do not overwrite files")]
	public bool NoClobber { get; set; }

	[Flag("recursive", Help = "Find files in directories recursively")]
	public bool Recursive { get; set; }
}

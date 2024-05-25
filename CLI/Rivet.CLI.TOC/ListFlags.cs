using DragonLib.CommandLine;

namespace Rivet.CLI.TOC;

internal record ListFlags : RivetCLIFlags {
	[Flag("dag", Help = "Also list dependency graph")]
	public bool DAG { get; set; }
}

namespace Rivet.CLI;

public abstract record RivetCLICommand : RivetCommand {
	protected RivetCLICommand(RivetCLIFlags flags) => Game = RivetGame.Create(flags.InstallDir);

	protected RivetGame Game { get; }
}

using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.Data;
using Rivet.IO;

namespace Rivet.CLI.Utility;

[Command(typeof(RivetCLIFlags), "save", "Converts a save file to JSON")]
public record RivetSaveCommand(RivetCLIFlags Flags) : RivetCLICommand<RivetCLIFlags>(Flags) {
	public override void Execute() {
		using var image = new FileStream(Flags.Positionals[1], FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
		using var buffer = new RivetMemory<byte>((int) image.Length);
		image.ReadExactly(buffer.Memory.Span);
		var save = new SaveData(buffer);
		// todo: save
	}
}

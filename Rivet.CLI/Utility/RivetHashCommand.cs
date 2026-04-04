using Pluto.CommandLine;
using Rivet.IO;

namespace Rivet.CLI.Utility;

[Command<CommandLineFlags>("hash", "Hashes the arguments")]
public record RivetHashCommand(CommandLineFlags Flags) : RivetCommand {
	public override void Execute() {
		foreach (var arg in Flags.Positionals.Distinct(StringComparer.Ordinal)) {
			if (arg.Length == 0) {
				continue;
			}

			if (arg[0] == '@') {
				var path = arg[1..];
				if (File.Exists(path)) {
					using var stream = new StreamReader(new FileStream(path, FileMode.Open, FileAccess.Read, FileShare.ReadWrite));
					while (stream.ReadLine() is { } line) {
						line = line.Trim();
						if (line.Length > 0) {
							Hash(line);
						}
					}
				}

				continue;
			}

			Hash(arg);
		}
	}

	private static void Hash(string arg) {
		var typeId = RivetTypeId.FromString(arg);
		var assetId = RivetAssetId.FromString(arg);
		Console.WriteLine($"{arg} = TypeId: {typeId.Hash:x8} AssetId: {assetId.Value:x16}");
	}
}

using DragonLib.CommandLine;
using Rivet.IO;

namespace Rivet.CLI.Utility;

[Command(typeof(CommandLineFlags), "hash", "Hashes the arguments")]
public record RivetHashCommand(CommandLineFlags Flags) : RivetCommand {
	public override void Execute() {
		foreach (var arg in Flags.Positionals.Skip(1).Distinct(StringComparer.Ordinal)) {
			var typeId = RivetTypeId.FromString(arg);
			var assetId = RivetAssetId.FromString(arg);
			Console.WriteLine($"{arg} = TypeId: {typeId.Hash:x8}; AssetId: {assetId.Hash:x16}");
		}
	}
}

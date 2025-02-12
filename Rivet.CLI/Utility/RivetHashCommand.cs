using DragonLib.CommandLine;
using Rivet.Data;
using Rivet.IO;
using Rivet.Models;

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

[Command(typeof(CommandLineFlags), "save", "Converts a save file to JSON")]
public record RivetSaveCommand(CommandLineFlags Flags) : RivetCommand {
	public override void Execute() {
		using var image = new FileStream(Flags.Positionals[1], FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
		using var buffer = new RivetMemory<byte>((int) image.Length);
		image.ReadExactly(buffer.Memory.Span);
		var save = new SaveData(buffer);
	}
}

using DragonLib;
using Rivet.Models.Data;
using Serilog;

namespace Rivet.CLI.TOC;

internal class Program {
	private static void Main(string[] args) {
		Log.Logger = new LoggerConfiguration().WriteTo.Console().CreateLogger();

		var game = RivetGame.Create(args[0]);
		var output = args[1];
		foreach (var asset in game.TOC.Assets.Values) {
			var name = asset.Name;
			if (string.IsNullOrEmpty(name)) {
				name = $"unknown/{asset.Id:x16}.bin";
			}

			Log.Information("Exporting {Path}", name);
			var target = Path.Combine(output, name);
			Directory.CreateDirectory(Path.GetDirectoryName(target)!);
			using var stream = new FileStream(target, FileMode.Create, FileAccess.ReadWrite, FileShare.ReadWrite);

			var header = asset.Header;
			stream.Write(new ReadOnlySpan<AssetHeader>(ref header).AsBytes());

			using var buffer = asset.Open();
			if (buffer == null) {
				continue;
			}

			stream.Write(buffer.Value.Memory.Span);
		}
	}
}

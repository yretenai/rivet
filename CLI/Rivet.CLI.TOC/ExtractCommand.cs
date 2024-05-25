using DragonLib;
using DragonLib.CommandLine;
using Rivet.Models.Data;
using Serilog;

namespace Rivet.CLI.TOC;

[Command(typeof(RivetExtractFlags), "extract", "Extracts all game files without conversion")]
internal record ExtractCommand : TOCCommand {
	public ExtractCommand(RivetExtractFlags flags) : base(flags) {
		foreach (var asset in Game.TOC.Assets.Values) {
			var name = RivetGame.ProcessName(asset);

			Log.Information("Exporting {Path}", name);

			if (flags.Dry) {
				continue;
			}

			var target = Path.Combine(flags.OutputDir, name);
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

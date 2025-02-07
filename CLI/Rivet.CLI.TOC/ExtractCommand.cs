// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using DragonLib;
using DragonLib.CommandLine;
using Rivet.Models.Data;
using Serilog;

namespace Rivet.CLI.TOC;

[Command(typeof(RivetExtractFlags), "extract", "Extracts all game files without conversion")]
internal record ExtractCommand : TOCCommand {
	public ExtractCommand(RivetExtractFlags flags) : base(flags) {
		var filter = ProcessFilters(flags.Filter);
		foreach (var asset in Game.TOC.Assets.Values.SelectMany(x => x)) {
			if (flags.Locale is not Locale.All && asset.Locale != flags.Locale) {
				continue;
			}

			if (filter.Count > 0 && !filter.Contains(asset.Id)) {
				continue;
			}

			var name = RivetGame.ProcessName(asset);

			if (flags.Regex.Count != 0 && !flags.Regex.Any(x => x.IsMatch(name))) {
				continue;
			}

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

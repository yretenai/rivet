// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Text.Encodings.Web;
using System.Text.Json;
using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.Data;
using Rivet.Models;
using Rivet.Models.Data;
using Serilog;

namespace Rivet.CLI.Extract;

[Command(typeof(RivetExtractFlags), "config", "Extracts all config files to JSON", "extract")]
internal record RivetExtractConfigCommand(RivetExtractFlags Flags) : RivetExtractCommand<RivetExtractFlags>(Flags) {
	private static JsonSerializerOptions Options { get; } = new() {
		WriteIndented = true,
		Encoder = JavaScriptEncoder.UnsafeRelaxedJsonEscaping,
	};

	protected override void Process(RivetAsset asset) {
		if (asset.Type is not AssetType.Config) {
			return;
		}

		using var config = asset.Load<Config>(Game);
		if (config == null) {
			return;
		}

		var name = RivetGame.ProcessName(asset);
		var outputPath = name;
		if (Flags.Flatten) {
			outputPath = Path.GetFileName(outputPath);
		}

		outputPath = Path.ChangeExtension(outputPath, "json");
		var target = Path.Combine(Flags.OutputDir, outputPath);
		if (Flags.NoClobber) {
			var info = new FileInfo(target);
			if (info is { Exists: true, Length: > 0 }) {
				return;
			}
		}

		Log.Information("Exporting {Path}", name);

		if (Flags.Dry) {
			return;
		}

		Directory.CreateDirectory(Path.GetDirectoryName(target) ?? Flags.OutputDir);
		using var stream = new FileStream(target, FileMode.Create, FileAccess.ReadWrite, FileShare.ReadWrite);
		JsonSerializer.Serialize(stream, new {
			References = config.AssetReferences.Select(x => x.Path).ToArray(),
			Type = config.Type.Collapse(),
			Built = config.Built.Collapse(),
		}, Options);
	}
}

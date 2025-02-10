// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
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
		Log.Information("Exporting {Path}", name);

		if (Flags.Dry) {
			return;
		}

		if (Flags.Flatten) {
			name = Path.GetFileName(name);
		}

		name = Path.ChangeExtension(name, "json");
		var target = Path.Combine(Flags.OutputDir, name);
		Directory.CreateDirectory(Path.GetDirectoryName(target) ?? Flags.OutputDir);
		using var stream = new FileStream(target, FileMode.Create, FileAccess.ReadWrite, FileShare.ReadWrite);
		JsonSerializer.Serialize(stream, new {
			References = config.AssetReferences.Select(x => x.Path).ToArray(),
			Type = config.Type.Collapse(),
			Built = config.Built.Collapse(),
		}, Options);
	}
}

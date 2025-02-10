// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.Data;
using Rivet.Models;
using Rivet.Models.Data;
using Serilog;

namespace Rivet.CLI.Extract;

[Command(typeof(RivetExtractFlags), "config", "Extracts all config files to JSON", "extract")]
internal record RivetExtractConfigCommand(RivetExtractFlags Flags) : RivetExtractCommand<RivetExtractFlags>(Flags) {
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
	}
}

// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using DragonLib;
using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.Models;
using Rivet.Models.Data;
using Serilog;

namespace Rivet.CLI.Extract;

[Command(typeof(RivetExtractFlags), "toc", "Extracts all game files without conversion", "extract")]
internal record RivetExtractTOCCommand(RivetExtractFlags Flags) : RivetExtractCommand<RivetExtractFlags>(Flags) {
	protected override void Process(RivetAsset asset) {
		var name = RivetGame.ProcessName(asset);
		Log.Information("Exporting {Path}", name);

		if (Flags.Dry) {
			return;
		}

		if (Flags.Flatten) {
			name = Path.GetFileName(name);
		}

		var target = Path.Combine(Flags.OutputDir, name);
		Directory.CreateDirectory(Path.GetDirectoryName(target) ?? Flags.OutputDir);
		using var stream = new FileStream(target, FileMode.Create, FileAccess.ReadWrite, FileShare.ReadWrite);

		var header = asset.Header;
		stream.Write(new ReadOnlySpan<AssetHeader>(ref header).AsBytes());

		using var buffer = asset.Open();
		if (buffer == null) {
			return;
		}

		stream.Write(buffer.Memory.Span);
	}
}

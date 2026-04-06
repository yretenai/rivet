// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.CommandLine;
using Pluto.Extensions;
using Rivet.CLI.Flags;
using Rivet.Models;
using Rivet.Models.Data;
using Serilog;

namespace Rivet.CLI.Extract;

[Command<RivetExtractFlags>("toc", "Extracts all game files without conversion", "extract")]
internal record RivetExtractTOCCommand(RivetExtractFlags Flags) : RivetExtractCommand<RivetExtractFlags>(Flags) {
	protected override void Process(RivetAsset asset) {
		var name = RivetGame.ProcessName(asset);
		var outputPath = name;
		if (Flags.Flatten) {
			outputPath = Path.GetFileName(outputPath);
		}

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

		if (asset.Flags.HasHeader) {
			var header = asset.Header;
			stream.Write(new ReadOnlySpan<AssetHeader>(ref header).AsBytes());
		}

		using var buffer = asset.Open();
		if (buffer == null) {
			return;
		}

		stream.Write(buffer.Memory.Span);
	}
}

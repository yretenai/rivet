// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Text;
using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.IO;
using Rivet.Models;

namespace Rivet.CLI.List;

[Command<RivetListTOCFlags>("toc", "List all TOC and DAG contents", "list")]
internal record RivetListTOCCommand(RivetListTOCFlags Flags) : RivetCLICommand<RivetListTOCFlags>(Flags) {
	public override void Execute() {
		if (Flags.Legacy) {
			Console.Error.WriteLine("id,name,schema,type,locale,category,is_key,is_texture,is_stream,size,archive,dag_hash,hash");
		} else {
			Console.Error.WriteLine("id,name,schema,locale,category,is_stream,size,archive");
		}

		var sb = new StringBuilder();
		foreach (var asset in Game.TOC.Assets.Values.SelectMany(x => x).Concat(Game.DAG.VirtualAssets).OrderBy(x => x.Id)) {
			sb.Clear();
			sb.Append(asset.Id.ToString("x16"));
			sb.Append(',');
			sb.Append(RivetGame.ProcessName(asset));
			sb.Append(',');
			sb.Append(asset.Header.Schema.Hash.ToString("x8"));
			sb.Append(',');

			if (!Flags.Legacy) {
				sb.Append(asset.Type.ToString("G").ToLower());
				sb.Append(',');
			}

			sb.Append(RivetGame.LocalizationStr[(int) asset.Locale]);
			sb.Append(',');
			sb.Append(asset.Category.ToString("G").ToLower());
			sb.Append(',');

			if (!Flags.Legacy) {
				sb.Append(asset.Flags.IsKey ? 'y' : 'n');
				sb.Append(',');
				sb.Append(asset.Flags.IsTexture ? 'y' : 'n');
				sb.Append(',');
			}

			sb.Append((int) asset.Category % 2 == 1 ? 'y' : 'n');
			sb.Append(',');
			sb.Append(asset.Size);
			sb.Append(',');
			sb.Append(asset.Archive?.Name ?? "");
			sb.Append(',');
			sb.Append(asset.Hash);
			sb.Append(',');
			sb.Append(CalculateChecksum(asset).ToString("x16"));
			Console.Error.WriteLine(sb.ToString());
		}

		if (!Flags.DAG) {
			return;
		}

		Console.Error.WriteLine();
		Console.Error.WriteLine("--- DAG ---");
		Console.Error.WriteLine();
		foreach (var asset in Game.TOC.Assets.Values.SelectMany(x => x).Concat(Game.DAG.VirtualAssets).OrderBy(x => x.Id)) {
			if (asset.Dependencies.Count == 0) {
				continue;
			}

			Console.Error.WriteLine(RivetGame.ProcessName(asset));

			foreach (var dependency in asset.Dependencies) {
				var foundOne = false;
				foreach (var dependencyAsset in Game.TryFindAssetsForId(dependency)) {
					foundOne = true;
					Console.Error.WriteLine("\t" + RivetGame.ProcessName(dependencyAsset));
				}

				if (!foundOne) {
					Console.Error.WriteLine($"\tunknown/{dependency.Value:x16}.bin");
				}
			}
		}
	}

	private static ulong CalculateChecksum(RivetAsset asset) {
		using var data = asset.Open();
		return data == null ? 0 : RivetAssetId.Checksum(data.Memory.Span);
	}
}

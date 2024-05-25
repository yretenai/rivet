// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Text;
using DragonLib.CommandLine;
using Rivet.Models;

namespace Rivet.CLI.TOC;

internal abstract record TOCCommand : RivetCLICommand {
	protected TOCCommand(RivetCLIFlags flags) : base(flags) { }
}

[Command(typeof(ListFlags), "list", "List all TOC and DAG contents")]
internal record ListCommand : RivetCLICommand {
	public ListCommand(ListFlags flags) : base(flags) {
		Console.Error.WriteLine("id,name,type,locale,category,is_key,is_texture,size,dag_hash,hash");

		foreach (var asset in Game.TOC.Assets.Values.Concat(Game.DAG.VirtualAssets.Values).OrderBy(x => x.Id)) {
			var sb = new StringBuilder();
			sb.Append(asset.Id.ToString("x16"));
			sb.Append(',');
			sb.Append(RivetGame.ProcessName(asset));
			sb.Append(',');
			sb.Append(asset.Type.ToString("G").ToUpper());
			sb.Append(',');
			sb.Append(RivetGame.LocalizationStr[(int) asset.Locale]);
			sb.Append(',');
			sb.Append(asset.Category.ToString("G").ToUpper());
			sb.Append(',');
			sb.Append(asset.Flags.IsKey ? 'y' : 'n');
			sb.Append(',');
			sb.Append(asset.Flags.IsVirtual ? 'y' : 'n');
			sb.Append(',');
			sb.Append(asset.Size);
			sb.Append(',');
			sb.Append(asset.Hash);
			sb.Append(',');
			sb.Append(CalculateChecksum(asset).ToString("x16"));
			Console.Error.WriteLine(sb.ToString());
		}

		if (!flags.DAG) {
			return;
		}

		Console.Error.WriteLine();
		Console.Error.WriteLine("--- DAG ---");
		Console.Error.WriteLine();
		foreach (var asset in Game.TOC.Assets.Values.Concat(Game.DAG.VirtualAssets.Values).OrderBy(x => x.Id)) {
			if (asset.Dependencies.Count == 0) {
				continue;
			}

			Console.Error.WriteLine(RivetGame.ProcessName(asset));

			foreach (var dependency in asset.Dependencies) {
				if (Game.TryFindAsset(dependency, out var dependencyAsset)) {
					Console.Error.WriteLine("\t" + RivetGame.ProcessName(dependencyAsset));
				} else {
					Console.Error.WriteLine($"\tunknown/{dependency.Value:x16}.bin");
				}
			}
		}
	}

	private static ulong CalculateChecksum(RivetAsset asset) {
		using var data = asset.Open();
		return data == null ? 0 : RivetAssetId.Checksum(data.Value.Memory.Span);
	}
}

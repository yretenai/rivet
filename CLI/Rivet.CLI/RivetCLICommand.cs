// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.CLI.Flags;
using Rivet.Models;
using Rivet.Models.Data;

namespace Rivet.CLI;

public abstract record RivetCLICommand<T> : RivetCommand where T : RivetCLIFlags {
	protected RivetCLICommand(T flags) {
		Flags = flags;
		Game = RivetGame.Create(flags.InstallDir);
	}

	protected T Flags { get; }
	protected RivetGame Game { get; }

	protected static HashSet<RivetAssetId> ProcessFilters(HashSet<string> filters) {
		var set = new HashSet<RivetAssetId>();
		foreach (var filter in filters) {
			if (filter.StartsWith('@')) {
				foreach (var line in File.ReadAllLines(filter)) {
					set.Add(RivetAssetId.Parse(line));
				}
			} else {
				set.Add(RivetAssetId.Parse(filter));
			}
		}

		return set;
	}
}

public abstract record RivetExtractCommand<T>(T Flags) : RivetCLICommand<T>(Flags) where T : RivetExtractFlags {
	public override void Execute() {
		if (Flags.Filter.Count != 0) {
			var ids = ProcessFilters(Flags.Filter);
			foreach (var id in ids) {
				if (Game.TryFindAsset(id, Flags.Locale is Locale.All ? Locale.English : Flags.Locale, AssetCategory.Game, out var asset)) {
					ProcessInternal(asset);
				}
			}
		} else {
			foreach (var asset in Game.TOC.Assets.Values.SelectMany(x => x)) {
				ProcessInternal(asset);
			}
		}
	}

	private void ProcessInternal(RivetAsset asset) {
		if (Flags.Locale is not Locale.All && asset.Locale != Flags.Locale) {
			return;
		}

		var name = RivetGame.ProcessName(asset);
		if (Flags.Regex.Count != 0 && !Flags.Regex.Any(x => x.IsMatch(name))) {
			return;
		}

		Process(asset);
	}

	protected abstract void Process(RivetAsset asset);
}

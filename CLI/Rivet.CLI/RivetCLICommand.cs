// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using Rivet.Models;

namespace Rivet.CLI;

public abstract record RivetCLICommand : RivetCommand {
	protected RivetCLICommand(RivetCLIFlags flags) => Game = RivetGame.Create(flags.InstallDir);

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

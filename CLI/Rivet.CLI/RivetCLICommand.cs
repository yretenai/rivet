// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Globalization;
using Rivet.Models;

namespace Rivet.CLI;

public abstract record RivetCLICommand : RivetCommand {
	protected RivetCLICommand(RivetCLIFlags flags) => Game = RivetGame.Create(flags.InstallDir);

	protected RivetGame Game { get; }

	protected static HashSet<RivetAssetId> ProcessFilters(HashSet<string> filters) {
		var set = new HashSet<RivetAssetId>();
		foreach (var filter in filters) {
			if (filter.StartsWith("0x") && ulong.TryParse(filter[2..], NumberStyles.HexNumber, null, out var id)) {
				set.Add(id);
			} else {
				set.Add(RivetAssetId.FromString(RivetAssetId.NormalizeString(filter)));
			}
		}

		return set;
	}
}

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.CommandLine;
using Pluto.IO.Binary;
using Rivet.CLI.Flags;
using Rivet.Data;

namespace Rivet.CLI.Utility;

[Command<RivetCLIFlags>("save", "Converts a save file to JSON")]
public record RivetSaveCommand(RivetCLIFlags Flags) : RivetCLICommand<RivetCLIFlags>(Flags) {
	public override void Execute() {
		using var image = new FileStream(Flags.Positionals[1], FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
		using var buffer = new RentedArray<byte>((int) image.Length);
		image.ReadExactly(buffer.Memory.Span);
		var save = new SaveData(buffer);
		// todo: save
	}
}

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.Data;
using Rivet.Models.Data;

namespace Rivet.Models;

public sealed record RivetArchive : IDisposable, IAsyncDisposable {
	public required string Name { get; init; }
	public Locale Locale { get; set; }
	public AssetCategory Category { get; set; }
	public int InstallId { get; set; }
	public int ChunkId { get; set; }
	public DataStreamArchive? DataStream { get; set; }

	public async ValueTask DisposeAsync() {
		if (DataStream != null) {
			await DataStream.DisposeAsync();
		}
	}

	public void Dispose() {
		DataStream?.Dispose();
	}
}

// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.IO;
using Rivet.Models;

namespace Rivet.Data;

public class AssetPack : IDisposable {
	public AssetPack(RivetAsset asset, IUnsafeMemoryOwner<byte> buffer, RivetGame game) {
		Asset = asset;
		Owner = buffer;
		Game = game;

		var cur = 0;
		for (var i = 0; i < 4; ++i) {
			if (Asset.Header.Sizes[i] == 0) {
				Buffers.Add(IUnsafeMemoryOwner<byte>.Empty);
				continue;
			}

			Buffers.Add(new SharedRivetMemory<byte>(Owner, cur, Asset.Header.Sizes[i]));
			cur += Asset.Header.Sizes[i];
		}
	}

	public RivetAsset Asset { get; }
	public RivetGame Game { get; }
	public IUnsafeMemoryOwner<byte> Owner { get; private set; }
	public List<IUnsafeMemoryOwner<byte>> Buffers { get; } = [];

	public void Dispose() {
		Dispose(true);
		GC.SuppressFinalize(this);
	}

	protected virtual void Dispose(bool disposing) {
		if (disposing) {
			Owner.Dispose();
			Owner = IUnsafeMemoryOwner<byte>.Empty;
			Buffers.Clear();
		}
	}
}

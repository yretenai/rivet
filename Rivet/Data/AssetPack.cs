// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.IO.Binary;
using Rivet.Models;

namespace Rivet.Data;

public class AssetPack : IDisposable {
	public AssetPack(RivetAsset asset, IRentedArray<byte> buffer, RivetGame game) {
		Asset = asset;
		Owner = buffer;
		Game = game;

		var cur = 0;
		for (var i = 0; i < 4; ++i) {
			if (Asset.Header.Sizes[i] == 0) {
				Buffers.Add(RentedArray<byte>.Empty);
				continue;
			}

			Buffers.Add(new UnownedRentedArray<byte>(Owner, cur, Asset.Header.Sizes[i]));
			cur += Asset.Header.Sizes[i];
		}
	}

	~AssetPack() => Dispose(false);

	public RivetAsset Asset { get; }
	public RivetGame Game { get; }
	public IRentedArray<byte> Owner { get; private set; }
	public List<IRentedArray<byte>> Buffers { get; } = [];
#if DEBUG
	public System.Diagnostics.StackTrace Origin { get; } = new();
#endif


	public void Dispose() {
		Dispose(true);
		GC.SuppressFinalize(this);
	}

	protected virtual void Dispose(bool disposing) {
		Owner.Dispose();
		foreach (var buffer in Buffers) {
			buffer.Dispose();
		}

		Buffers.Clear();

	#if DEBUG
		if (!disposing) {
			Console.Error.WriteLine($"Leaked Asset Memory. {Origin.ToString().Trim()}");
		}
	#endif
	}
}

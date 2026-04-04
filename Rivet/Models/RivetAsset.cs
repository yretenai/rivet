// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics.CodeAnalysis;
using Pluto.IO.Binary;
using Rivet.IO;
using Rivet.Models.Data;

namespace Rivet.Models;

public record RivetAsset {
	// stuff from toc
	public required ulong Id { get; init; }
	public int Size { get; init; } = -1;
	public uint Offset { get; init; } = uint.MaxValue;
	public RivetArchive? Archive { get; init; }
	public Locale Locale { get; init; }
	public AssetCategory Category { get; init; }
	public RivetAssetFlags Flags { get; init; }
	public AssetTextureHeader TextureHeader { get; set; }
	public AssetHeader Header { get; set; }

	// stuff from dag
	public string? Name { get; set; }
	public HashSet<RivetAssetId> Dependencies { get; set; } = [];
	public AssetType Type { get; set; } = AssetType.None;
	public ulong Hash { get; set; }

	public RentedArray<byte>? Open() => Size > -1 && Offset != uint.MaxValue ? Archive?.DataStream?.ReadBytes(Offset, Size) : null;

	public T? Load<T>(RivetGame game) where T : class, IRivetInstance<T> => TryLoad<T>(game, out var instance) ? instance : null;

	public bool TryLoad<T>(RivetGame game, [MaybeNullWhen(false)] out T instance) where T : class, IRivetInstance<T> {
		var data = Open();
		instance = null;
		try {
			if (data != null) {
				instance = T.CreateInstance(this, game, data);
				return true;
			}

			return false;
		} finally {
			// being disposable implies ownership transfer
			// so not being disposable means we have to do it here.
			// note: if instance is null this will also be true.
			if (instance is not IDisposable) {
				data?.Dispose();
			}
		}
	}
}

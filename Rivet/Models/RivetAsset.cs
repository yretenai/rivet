// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics.CodeAnalysis;
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

	public RivetMemory<byte>? Open() => Size > -1 && Offset != uint.MaxValue ? Archive?.DataStream?.ReadBytes(Offset, Size) : null;

	public T? Load<T>(RivetGame game) where T : class, IRivetInstance => TryLoad<T>(game, out var instance) ? instance : null;

	public bool TryLoad<T>(RivetGame game, [MaybeNullWhen(false)] out T instance) where T : class, IRivetInstance {
		using var data = Open();
		if (data != null) {
			var constructed = T.CreateInstance(this, game, data);
			if (constructed is not T rivetInstance) {
				if (constructed is IDisposable disposable) {
					disposable.Dispose();
				}

				instance = null;
				return false;
			}

			instance = rivetInstance;
			return true;
		}

		instance = null;
		return false;
	}
}

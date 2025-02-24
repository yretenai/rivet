// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.IO.Compression;
using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;
using Serilog;

namespace Rivet.Data;

public sealed class DependencyDAG {
	private const uint DAGMagic = 0xB8EF3955;
	private const uint DAGMagicCompressed = 0x891F77AF;

	public DependencyDAG(IUnsafeMemoryOwner<byte> buffer, RivetGame game) {
		Log.Information("Loading DAG");
		Game = game;

		using var datBuffer = GetDAT1Stream(buffer);
		var dat = new DAT1(datBuffer);

		if (dat.Header.Version is not AssetVersion.DependencyAssetGraph) {
			throw new NotSupportedException("DependencyDAG is not recognized");
		}

		var ids = dat.GetSection<ulong>("Asset Ids"u8);
		var links = dat.GetSection<uint>("Dependency Links"u8);
		var heads = dat.GetSection<uint>("Dependency Links Heads"u8);
		var names = dat.GetSection<int>("Asset Names"u8);
		var types = dat.GetSection<AssetType>("Asset Types"u8);
		var chains = dat.GetSection<uint>("LC Link Heads"u8);

		var reader = new MemoryReader(dat.Buffers[0]);

		for (var index = 0; index < names.Length; index++) {
			var hash = ids[index];
			var nameOffset = names[index];
			var type = types[index];

			if (nameOffset == -1) {
				continue;
			}

			reader.Offset = nameOffset;
			var name = RivetAssetId.NormalizeString(reader.GetCString());
			var id = RivetAssetId.FromString(name);
			var dependencies = new HashSet<RivetAssetId>();
			ResolveDependencies(reader, dependencies, names, links, heads, chains, heads[index]);

			var foundOne = false;
			foreach (var asset in Game.TryFindAssetsForId(id)) {
				foundOne = true;
				asset.Name = name;
				asset.Type = type;
				asset.Hash = hash;
				asset.Dependencies = dependencies;
			}

			if (!foundOne) {
				VirtualAssets.Add(new RivetAsset {
					Id = id,
					Name = name,
					Type = type,
					Hash = hash,
					Dependencies = dependencies,
					Flags = new RivetAssetFlags {
						IsVirtual = true,
					},
				});
			}

			foreach (var asset in Game.TryFindAssetsForId(RivetAssetId.FromString(name + ".animstrm"))) {
				asset.Name = name + ".animstrm";
			}
		}
	}

	public RivetGame Game { get; }
	public List<RivetAsset> VirtualAssets { get; } = [];

	private static void ResolveDependencies(MemoryReader reader, HashSet<RivetAssetId> dependencies, ReadOnlySpan<int> names, ReadOnlySpan<uint> links, ReadOnlySpan<uint> heads, ReadOnlySpan<uint> chains, uint head) {
		if (head != uint.MaxValue) {
			if ((head & 0x80000000) != 0) {
				throw new InvalidOperationException();
			}

			var currentIndex = links[(int) head];
			while (currentIndex != uint.MaxValue) {
				if (currentIndex >> 31 == 1) {
					var newHead = chains[(int) (currentIndex & 0x7FFFFFFF)];
					ResolveDependencies(reader, dependencies, names, links, heads, chains, newHead);
				} else {
					var dependencyNameOffset = names[(int) (currentIndex & 0x7FFFFFFF)];
					reader.Offset = dependencyNameOffset;
					var dependencyName = RivetAssetId.NormalizeString(reader.GetCString());
					var dependencyId = RivetAssetId.FromString(dependencyName);
					dependencies.Add(dependencyId);
				}

				currentIndex = links[(int) head++];
			}
		}
	}

	private static unsafe IUnsafeMemoryOwner<byte> GetDAT1Stream(IUnsafeMemoryOwner<byte> buffer) {
		var reader = new MemoryReader(buffer);
		var header = reader.Get<DAGHeader>();
		if (header.TypeId == DAT1.MagicValue) {
			return buffer;
		}

		if (header.TypeId == DAGMagic) {
			return reader.Slice(header.Size);
		}

		if (header.TypeId != DAGMagicCompressed) {
			throw new NotSupportedException("Unknown filetype");
		}

		var uncompressed = new RivetMemory<byte>(header.Size);
		var remain = reader.Slice(header.CompressedSize);
		using var pinned = remain.Memory.Pin();
		using var unsafeStream = new UnmanagedMemoryStream((byte*) pinned.Pointer, remain.Size);
		using var zStream = new ZLibStream(unsafeStream, CompressionMode.Decompress, false);
		zStream.ReadExactly(uncompressed.Memory.Span);
		return uncompressed;
	}
}

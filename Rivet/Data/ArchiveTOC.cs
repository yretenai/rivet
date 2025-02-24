// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.IO.Compression;
using System.Runtime.CompilerServices;
using System.Text;
using DragonLib;
using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;
using Serilog;

namespace Rivet.Data;

public sealed class ArchiveTOC : IDisposable {
	private const uint TOCMagic = 0x34E89035;
	private const uint TOCMagicCompressed = 0x77AF12AF;

	public ArchiveTOC(IUnsafeMemoryOwner<byte> buffer, RivetGame game) {
		Log.Information("Loading TOC");
		Game = game;

		using var datBuffer = GetDAT1Stream(buffer);
		var dat = new DAT1(datBuffer);

		if (dat.Header.Version is not (AssetVersion.ArchiveTOC or AssetVersion.SpiderArchiveTOC)) {
			throw new NotSupportedException("ArchiveTOC is not recognized");
		}

		var isSpider = dat.Header.Version is AssetVersion.SpiderArchiveTOC;
		var assetGroups = dat.GetSection<PackedPair<int, int>>("Archive TOC Header"u8);
		var assetIds = dat.GetSection<ulong>("Archive TOC Asset IDs"u8);
		var textureIds = dat.GetSection<ulong>("Archive TOC Texture Asset Ids"u8);
		var textureMetas = dat.GetSection<AssetTextureHeader>("Archive TOC Texture Meta"u8);
		var assetHeaders = dat.GetSection<AssetHeader>("Archive TOC Asset Header Data"u8);
		var keyIds = dat.GetSection<ulong>("Archive TOC Key Asset IDs"u8);
		var textureHeader = dat.GetSection<int>("Archive TOC Texture Header"u8);
		var assetMetadata = isSpider ? default : dat.GetSection<AssetMetadata>("Archive TOC Asset Metadata"u8);
		var assetFileMetadata = isSpider ? default : dat.GetSection<AssetFileMetadata>("Archive TOC File Metadata"u8);
		var spiderAssetMetadata = !isSpider ? default : dat.GetSection<AssetMetadataSpider>("Archive TOC Asset Metadata"u8);
		var spiderAssetFileMetadata = !isSpider ? default : dat.GetSection<AssetFileMetadataSpider>("Archive TOC File Metadata"u8);
		var dupeInfo = dat.GetSection<PackedPair<int, uint>>("Archive TOC Asset Dupe Metadata"u8);

		if (textureHeader.Length > 0) {
			StreamedTextureCount = textureHeader[0];
		}

		if (isSpider) {
			Archives.EnsureCapacity(spiderAssetFileMetadata.Length);
			foreach (var archive in spiderAssetFileMetadata) {
				var name = archive.Name;
				var nameStr = (((ReadOnlySpan<byte>) name).ReadString(Encoding.UTF8) ?? string.Empty).Replace('\\', '/');
				var target = Path.Combine(Game.Root, nameStr);
				Log.Information("Loading DSAR {Path} ({Locale})", nameStr, archive.Locale);
				Archives.Add(new RivetArchive {
					Name = nameStr,
					InstallId = archive.Id,
					ChunkId = archive.ChunkId,
					Locale = archive.Locale,
					Category = archive.Category,
					DataStream = !Path.Exists(target) ? null : new DataStreamArchive(target),
				});
			}
		} else {
			Archives.EnsureCapacity(assetFileMetadata.Length);
			foreach (var archive in assetFileMetadata) {
				var name = archive.Name;
				var nameStr = (((ReadOnlySpan<byte>) name).ReadString(Encoding.UTF8) ?? string.Empty).Replace('\\', '/');
				var target = Path.Combine(Game.Root, nameStr);
				Log.Information("Loading DSAR {Path} ({Locale})", nameStr, archive.Locale);
				Archives.Add(new RivetArchive {
					Name = nameStr,
					Category = archive.Category,
					Locale = archive.Locale,
					DataStream = !Path.Exists(target) ? null : new DataStreamArchive(target),
				});
			}
		}

		for (var i = 0; i < 8; ++i) {
			var dict = new Dictionary<Locale, List<RivetAsset>>();
			Groups[(AssetCategory) i] = dict;
			for (var j = 0; j < 32; ++j) {
				dict[(Locale) j] = [];
			}
		}

		Assets.EnsureCapacity(assetIds.Length);
		for (var localeIndex = 0; localeIndex < assetGroups.Length; localeIndex += 8) {
			for (AssetCategory category = 0; category < (AssetCategory) 8; ++category) {
				var (groupStart, groupLength) = assetGroups[localeIndex + (int) category];
				var locale = (Locale) (localeIndex / 8);
				if (groupLength == 0) {
					continue;
				}

				Log.Information("Asset Group {Locale} {Category} has {Count} assets", locale, category, groupLength);

				var groupList = Groups[category][locale];
				groupList.EnsureCapacity(groupLength);

				for (var groupIndex = 0; groupIndex < groupLength; ++groupIndex) {
					var assetIndex = groupStart + groupIndex;

					var id = assetIds[assetIndex];

					var assetMeta = default(AssetMetadata);
					if (!isSpider) {
						assetMeta = assetMetadata[assetIndex];
					} else {
						var spiderAssetMeta = spiderAssetMetadata[assetIndex];
						var dupe = dupeInfo[spiderAssetMeta.DupeId];
						assetMeta.ArchiveId = dupe.Key;
						assetMeta.Offset = dupe.Value;
						assetMeta.Size = spiderAssetMeta.Size;
						assetMeta.HeaderOffset = -1;
					}

					var archive = Archives[assetMeta.ArchiveId];
					var textureIndex = textureIds.IndexOf(id);
					var isKey = keyIds.Contains(id);
					AssetHeader? meta = default;
					if (assetMeta.HeaderOffset != -1) {
						var normalized = assetMeta.HeaderOffset / Unsafe.SizeOf<AssetHeader>();
						if (normalized < assetHeaders.Length) {
							meta = assetHeaders[normalized];
						}
					}

					AssetTextureHeader? textureMeta = default;
					if (textureIndex > -1) {
						textureMeta = textureMetas[textureIndex];
					}

					var asset = new RivetAsset {
						Id = id,
						Size = assetMeta.Size,
						Offset = assetMeta.Offset,
						Archive = archive,
						Locale = locale,
						Category = category,
						Flags = new RivetAssetFlags {
							IsKey = isKey,
							IsTexture = textureIndex > -1,
							HasHeader = meta.HasValue,
						},
						TextureHeader = textureMeta ?? default,
						Header = meta ?? default,
					};
					if (!Assets.TryGetValue(asset.Id, out var assets)) {
						assets = Assets[asset.Id] = [];
					}

					assets.Add(asset);
					groupList.Add(asset);
				}
			}
		}
	}

	public RivetGame Game { get; set; }
	public List<RivetArchive> Archives { get; set; } = [];
	public Dictionary<ulong, List<RivetAsset>> Assets { get; set; } = [];
	public Dictionary<AssetCategory, Dictionary<Locale, List<RivetAsset>>> Groups { get; set; } = [];

	public int StreamedTextureCount { get; }

	public void Dispose() {
		foreach (var archive in Archives) {
			archive.Dispose();
		}
	}

	private static unsafe IUnsafeMemoryOwner<byte> GetDAT1Stream(IUnsafeMemoryOwner<byte> buffer) {
		var reader = new MemoryReader(buffer);
		var header = reader.Get<TOCHeader>();
		if (header.TypeId == DAT1.MagicValue) {
			return buffer;
		}

		var remain = reader.Slice(reader.Unconsumed);
		if (header.TypeId == TOCMagic) {
			return remain;
		}

		if (header.TypeId != TOCMagicCompressed) {
			throw new NotSupportedException("Unknown filetype");
		}

		var uncompressed = new RivetMemory<byte>(header.Size);
		using var pinned = remain.Memory.Pin();
		using var unsafeStream = new UnmanagedMemoryStream((byte*) pinned.Pointer, remain.Size);
		using var zStream = new ZLibStream(unsafeStream, CompressionMode.Decompress, false);
		zStream.ReadExactly(uncompressed.Memory.Span);
		return uncompressed;
	}
}

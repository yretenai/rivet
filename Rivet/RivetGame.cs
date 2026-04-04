// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using Pluto.IO.Binary;
using Rivet.Data;
using Rivet.DDL;
using Rivet.DDL.Types;
using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;

namespace Rivet;

public sealed class RivetGame : IDisposable {
	public static readonly string[] LocalizationStr = [
		"none", "us", "gb", "dk", "nl", "fi", "fr", "de", "it", "jp", "kr", "no", "pl", "pt", "ru", "es",
		"se", "br", "ar", "tr", "la", "cs", "ct", "fc", "cz", "hu", "el", "ro", "th", "vi", "id", "hr",
	];

	public static readonly string[] StreamExtensions = ["", ".stream", "", ".wem", "", ".animstrm", "", ".lgstream"];

	static RivetGame() {
		LoadFileList(Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "Resources", "assets.txt"));
		LoadTypeIds(Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "Resources", "tags.txt"));
		SaveTypeIds(Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "Resources", "tags.txt"));

		DDLObject.LoadTypes(typeof(DDLAllowSubstruct).Assembly);
		RivetAssetId.NameResolver = id => Instance != null && Instance.TryGetAssetName(id, out var name) ? name : null;
		RivetTypeId.NameResolver = id => TypeIdLookup.GetValueOrDefault(id);
	}

	public RivetGame(string root) {
		Root = root;
		var tocPath = Path.Combine(root, "toc");
		var dagPath = Path.Combine(root, "dag");
		if (!File.Exists(tocPath)) {
			throw new InvalidDataException("Missing TOC");
		}

		if (!File.Exists(dagPath)) {
			throw new InvalidDataException("Missing DAG");
		}

		using var tocData = RentedArray<byte>.FromFile(tocPath);
		using var dagData = RentedArray<byte>.FromFile(dagPath);

		TOC = new ArchiveTOC(tocData, this);
		DAG = new DependencyDAG(dagData, this);
		ApplyKnownPaths();
	}

	public static Dictionary<uint, string> TypeIdLookup { get; } = [];

	public ArchiveTOC TOC { get; }
	public DependencyDAG DAG { get; }
	public string Root { get; }

	public static RivetGame? Instance { get; set; }
	public static Dictionary<ulong, string> KnownAssetPaths { get; } = new();

	public void Dispose() {
		TOC.Dispose();

		if (Instance != null && Path.GetFullPath(Instance.Root) == Path.GetFullPath(Root)) {
			Instance = null;
		}
	}

	public void ApplyKnownPaths() {
		foreach (var (hash, name) in KnownAssetPaths) {
			if (TOC.Assets.TryGetValue(hash, out var assets)) {
				foreach (var asset in assets) {
					asset.Name = name;
				}
			}
		}
	}

	public bool TryFindWemAsset(uint wem, Locale locale, [MaybeNullWhen(false)] out RivetAsset asset) => TryFindAsset(new RivetAssetId(wem, RivetAssetIdFlags.Ext | RivetAssetIdFlags.Shipped), locale, AssetCategory.Audio, out asset);

	public bool TryFindVirtualAsset(ulong assetId, Locale locale, AssetCategory category, [MaybeNullWhen(false)] out RivetAsset asset) {
		asset = DAG.VirtualAssets.FirstOrDefault(x => x.Id == assetId);
		return asset != null || TryFindAsset(assetId, locale, category, out asset);
	}

	public bool TryLoadAsset<T>(ulong assetId, Locale locale, AssetCategory category, [MaybeNullWhen(false)] out T instance) where T : class, IRivetInstance<T> {
		instance = null;
		return TryFindAsset(assetId, locale, category, out var asset) && asset.TryLoad(this, out instance);
	}

	public T? LoadAsset<T>(ulong assetId, Locale locale, AssetCategory category) where T : class, IRivetInstance<T> => TryLoadAsset<T>(assetId, locale, category, out var instance) ? instance : null;

	public bool TryFindAsset(ulong assetId, Locale locale, AssetCategory category, [MaybeNullWhen(false)] out RivetAsset asset) {
		asset = TOC.Groups[category][locale].FirstOrDefault(x => x.Id == assetId);
		if (asset != null) {
			return true;
		}

		// Lang -> Eng -> None
		if (locale is not Locale.Unlocalized && locale is not Locale.English) {
			asset = TOC.Groups[category][Locale.English].FirstOrDefault(x => x.Id == assetId);
			if (asset != null) {
				return true;
			}
		}

		if (locale is not Locale.Unlocalized) {
			asset = TOC.Groups[category][Locale.Unlocalized].FirstOrDefault(x => x.Id == assetId);
			if (asset != null) {
				return true;
			}
		}

		asset = null;
		return false;
	}

	public IEnumerable<RivetAsset> TryFindAssetsForId(ulong assetId) => TOC.Assets.TryGetValue(assetId, out var assets) ? assets : [];

	public static RivetGame Create(string root) {
		if (Instance != null && Path.GetFullPath(Instance.Root) == Path.GetFullPath(root)) {
			return Instance;
		}

		var instance = new RivetGame(root);
		Instance ??= instance;
		return instance;
	}

	public static void LoadFileList(string path) {
		if (!File.Exists(path)) {
			return;
		}

		using var reader = new StreamReader(new FileStream(path, FileMode.Open, FileAccess.Read, FileShare.ReadWrite));
		while (reader.ReadLine() is { } line) {
			line = line.Trim().ToLowerInvariant();
			if (line.Length == 0) {
				continue;
			}

			KnownAssetPaths[RivetAssetId.FromString(line).Value] = line;
		}
	}

	public static void LoadTypeIds(string path) {
		if (!File.Exists(path)) {
			return;
		}

		using var reader = new StreamReader(new FileStream(path, FileMode.Open, FileAccess.Read, FileShare.ReadWrite));
		while (reader.ReadLine() is { } line) {
			line = line.Trim();
			if (line.Length == 0) {
				continue;
			}

			var eq = line.IndexOf('\u25b6', StringComparison.Ordinal);
			if (eq > -1) {
				line = line[..eq].Trim();
			}

			TypeIdLookup[RivetTypeId.Checksum(line)] = line;
		}
	}

	public static void SaveTypeIds(string path) {
		using var reader = new StreamWriter(new FileStream(path, FileMode.Create, FileAccess.Write, FileShare.ReadWrite));
		foreach (var (tag, name) in TypeIdLookup.OrderBy(x => x.Value)) {
			reader.Write(name);
			reader.Write(" \u25b6 ");
			reader.WriteLine(tag.ToString("x8", CultureInfo.InvariantCulture));
		}
	}

	public bool TryGetAssetName(ulong hash, [MaybeNullWhen(false)] out string name) {
		if (KnownAssetPaths.TryGetValue(hash, out name)) {
			return true;
		}

		var asset = TryFindAssetsForId(hash).FirstOrDefault();
		if (asset != null) {
			name = ProcessName(asset);
			return true;
		}

		name = null;
		return false;
	}

	public static string ProcessName(RivetAsset asset) {
		var name = asset.Name;
		var assetId = new RivetAssetId(asset.Id);
		if (string.IsNullOrEmpty(name)) {
			name = assetId.Flags.HasFlagFast(RivetAssetIdFlags.Ext) ? $"sound/wem/{assetId.Hash & 0xFFFFFFFF}.wem" : $"unknown/{asset.Id:x16}.bin";
		}

		if (asset.Locale != Locale.Unlocalized) {
			var loc = LocalizationStr[(int) asset.Locale];
			if (name.EndsWith("/localization_all.localization")) {
				name = name[..^29] + $"localization_{loc}.localization";
			} else {
				var lastIndex = name.LastIndexOf('/');
				if (lastIndex == -1) {
					name = loc + "/" + name;
				} else {
					name = name[..lastIndex++] + $"/{loc}/" + name[lastIndex..];
				}
			}
		}

		var ext = StreamExtensions[(int) asset.Category];
		if (ext.Length > 0 && !name.EndsWith(ext, StringComparison.OrdinalIgnoreCase)) {
			name += ext;
		}

		if (asset.Flags.IsVirtual) {
			name = "virtual/" + name;
		}

		return name;
	}
}

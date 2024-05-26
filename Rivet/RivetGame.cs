// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Diagnostics.CodeAnalysis;
using Rivet.Data;
using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;

namespace Rivet;

public sealed class RivetGame : IDisposable {
	public static string[] LocalizationStr = [
		"none", "us", "gb", "dk", "nl", "fi", "fr", "de", "it", "jp", "kr", "no", "pl", "pt", "ru", "es",
		"se", "br", "ar", "tr", "la", "cs", "ct", "fc", "cz", "hu", "el", "ro", "th", "vi", "id", "hr",
	];

	public static string[] StreamExtensions = ["", ".stream", "", ".wem", "", ".animstrm", "", ".lgstream"];

	static RivetGame() {
		var txt = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "Resources", "streamed_files.txt");
		if (File.Exists(txt)) {
			LoadFileList(File.ReadAllText(txt));
		}
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

		var tocData = new RivetMemory<byte>(new FileInfo(tocPath));
		var dagData = new RivetMemory<byte>(new FileInfo(dagPath));
		TOC = new ArchiveTOC(tocData, this);
		DAG = new DependencyDAG(dagData, this);

		ApplyKnownPaths();
	}

	public ArchiveTOC TOC { get; }
	public DependencyDAG DAG { get; }
	public string Root { get; }

	public static RivetGame? Instance { get; set; }
	public static Dictionary<ulong, string> KnownAssetPaths { get; } = new();

	public void Dispose() {
		TOC.Dispose();
		DAG.Dispose();
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

	public bool TryLoadAsset<T>(ulong assetId, Locale locale, AssetCategory category, [MaybeNullWhen(false)] out T instance) where T : class, IRivetInstance {
		instance = null;
		return TryFindAsset(assetId, locale, category, out var asset) && asset.TryLoad(this, out instance);
	}

	public T? LoadAsset<T>(ulong assetId, Locale locale, AssetCategory category) where T : class, IRivetInstance => TryLoadAsset<T>(assetId, locale, category, out var instance) ? instance : null;

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

	public static void LoadFileList(string text) {
		foreach (var _line in text.Split('\n', StringSplitOptions.TrimEntries | StringSplitOptions.RemoveEmptyEntries)) {
			var line = _line.Trim();
			if (line.Length == 0) {
				continue;
			}

			KnownAssetPaths[RivetAssetId.FromString(line).Value] = line;
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
			name = assetId.Flags.HasFlagFast(RivetAssetIdFlags.Ext) ? $"sound/wem/{assetId.Hash}.wem" : $"unknown/{asset.Id:x16}.bin";
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

using System.Diagnostics.CodeAnalysis;
using Rivet.Data;
using Rivet.IO;
using Rivet.Models;

namespace Rivet;

public sealed class RivetGame : IDisposable {
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
			if (TOC.Assets.TryGetValue(hash, out var asset) && string.IsNullOrEmpty(asset.Name)) {
				asset.Name = name;
			}
		}
	}

	public bool TryFindWemAsset(uint wem, [MaybeNullWhen(false)] out RivetAsset asset) => TOC.Assets.TryGetValue(new RivetAssetId(wem, RivetAssetIdFlags.Ext | RivetAssetIdFlags.Shipped), out asset);

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

	public static bool TryGetAssetName(ulong hash, [MaybeNullWhen(false)] out string name) {
		if (KnownAssetPaths.TryGetValue(hash, out name)) {
			return true;
		}

		if (Instance != null && Instance.TOC.Assets.TryGetValue(hash, out var asset)) {
			name = asset.Name;
			return !string.IsNullOrEmpty(name);
		}

		name = null;
		return false;
	}
}

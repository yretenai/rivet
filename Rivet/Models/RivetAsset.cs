using Rivet.IO;
using Rivet.Models.Data;

namespace Rivet.Models;

public record RivetAsset {
	// stuff from toc
	public required ulong Id { get; init; }
	public int Size { get; init; } = -1;
	public int Offset { get; init; } = -1;
	public RivetArchive Archive { get; init; } = null!;
	public Locale Locale { get; init; }
	public AssetCategory Category { get; init; }
	public RivetAssetFlags Flags { get; init; }
	public AssetTextureHeader TextureHeader { get; set; }
	public AssetHeader Header { get; set; }

	// stuff from dag
	public string? Name { get; set; }
	public HashSet<RivetAssetId> Dependencies { get; } = [];
	public AssetType Type { get; set; }
	public ulong Hash { get; set; }

	public RivetMemory<byte>? Open() => Archive.DataStream?.ReadBytes(Offset, Size);
}

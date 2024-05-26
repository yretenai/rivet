// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using Rivet.IO;
using Rivet.Models.Data;

namespace Rivet.Models;

public record RivetAsset {
	// stuff from toc
	public required ulong Id { get; init; }
	public int Size { get; init; } = -1;
	public uint Offset { get; init; } = uint.MaxValue;
	public RivetArchive Archive { get; init; } = null!;
	public Locale Locale { get; init; }
	public AssetCategory Category { get; init; }
	public RivetAssetFlags Flags { get; init; }
	public AssetTextureHeader TextureHeader { get; set; }
	public AssetHeader Header { get; set; }

	// stuff from dag
	public string? Name { get; set; }
	public HashSet<RivetAssetId> Dependencies { get; set; } = [];
	public AssetType Type { get; set; }
	public ulong Hash { get; set; }

	public RivetMemory<byte>? Open() => Size > -1 && Offset != uint.MaxValue ? Archive.DataStream?.ReadBytes(Offset, Size) : null;
}

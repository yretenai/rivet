namespace Rivet.Models.Data;

public record struct AssetMetadata {
	public int Size { get; set; }
	public int ArchiveId { get; set; }
	public uint Offset { get; set; }
	public int HeaderOffset { get; set; }
}

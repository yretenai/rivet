using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetTextureHeader {
	public ulong Unknown1 { get; set; }
	public ulong Unknown2 { get; set; }
	public ulong Unknown3 { get; set; }
	public uint Unknown4 { get; set; }
	public uint Unknown5 { get; set; }
	public uint Unknown6 { get; set; }
	public uint Unknown7 { get; set; }
	public ulong Unknown8 { get; set; }
	public uint Unknown9 { get; set; }
	public uint UnknownA { get; set; }
	public uint Size { get; set; }
	public uint StreamedSize { get; set; }
	public ulong UnknownD { get; set; }
}

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 8)]
public record struct DDLString {
	public int Length { get; set; }
	public uint Hash { get; set; }
	public ulong Checksum { get; set; }
}

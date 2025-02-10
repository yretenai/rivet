using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 8)]
public record struct DDLHeader {
	public const uint MagicValue = 0x03150044;

	public uint Zero { get; set; }
	public uint Magic { get; set; }
	public int FieldCount { get; set; }
	public int Size { get; set; }
}

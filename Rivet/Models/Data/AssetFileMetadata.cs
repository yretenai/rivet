using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetFileMetadata {
	public Byte64Array Name { get; set; }
	public byte Unknown { get; set; } // padding?
	public Locale Locale { get; set; }
}

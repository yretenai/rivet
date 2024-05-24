using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct ArchiveTOCHeader {
	public RivetTypeId TypeId { get; set; }
	public int Size { get; set; }
}

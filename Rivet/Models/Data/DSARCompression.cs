namespace Rivet.Models.Data;

public enum DSARCompression : byte {
	None = 0,
	Unknown1 = 1,
	GDeflate = 2,
	LZ4 = 3,
	Padding = 254,
}

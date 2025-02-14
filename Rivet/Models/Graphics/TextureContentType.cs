namespace Rivet.Models.Graphics;

[Flags]
public enum TextureContentType : byte {
	Linear = 0,
	sRGB = 1,
	Normal = 2,
	Gloss = 4,
	IBL = 8,
	IES = 16,
	Unknown32 = 32, // more _g params
	Unknown64 = 64, // more _g params
}

public static class TextureContentTypeExtensions {
	public static bool HasFlagFast(this TextureContentType value, TextureContentType flag) => (value & flag) != 0;
}

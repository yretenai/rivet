namespace Rivet.Models.Graphics;

[Flags]
public enum TextureContentType : byte {
	// todo: figure out which parameters line up with what
	Linear = 0,
	sRGB = 1,
	Normal = 2,
	Parameter1 = 4,
	IBL = 8,
	IES = 16,
	Parameter2 = 32,
	Parameter3 = 64,
}

public static class TextureContentTypeExtensions {
	public static bool HasFlagFast(this TextureContentType value, TextureContentType flag) => (value & flag) != 0;
}

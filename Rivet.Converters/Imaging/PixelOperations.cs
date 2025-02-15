using System.Numerics;
using AssetRipper.TextureDecoder.Rgb;
using AssetRipper.TextureDecoder.Rgb.Formats;

namespace Rivet.Converters.Imaging;

public static class PixelOperations<TColor, T>
	where TColor : unmanaged, IColor<TColor, T>, IColor<T>, IColor
	where T : unmanaged, INumberBase<T>, IMinMaxValue<T> {
	public static void BlendPixel(TColor srcPixel, ref TColor dstPixel) {
		var tmpSrcPixel = srcPixel.Convert<TColor, T, ColorRGBA<float>, float>();
		var tmpDstPixel = dstPixel.Convert<TColor, T, ColorRGBA<float>, float>();

		var alpha = tmpSrcPixel.A;
		var inverseAlpha = 1 - alpha;
		tmpDstPixel.R = tmpSrcPixel.R * alpha + tmpDstPixel.R * inverseAlpha;
		tmpDstPixel.G = tmpSrcPixel.G * alpha + tmpDstPixel.G * inverseAlpha;
		tmpDstPixel.B = tmpSrcPixel.B * alpha + tmpDstPixel.B * inverseAlpha;
		tmpDstPixel.A = Math.Max(alpha, tmpDstPixel.A);
		dstPixel = tmpDstPixel.Convert<ColorRGBA<float>, float, TColor, T>();
	}

	public static void CopyPixel(TColor srcPixel, ref TColor dstPixel) {
		dstPixel = srcPixel;
	}
}

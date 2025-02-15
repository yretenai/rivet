using System.Numerics;
using System.Runtime.CompilerServices;
using AssetRipper.TextureDecoder.Rgb;
using AssetRipper.TextureDecoder.Rgb.Formats;
using Rivet.IO;

namespace Rivet.Converters.Imaging;

public sealed class ImageBuffer<TColor, T> : IImageBuffer
	where TColor : unmanaged, IColor<TColor, T>, IColor<T>, IColor
	where T : unmanaged, INumberBase<T>, IMinMaxValue<T> {
	public ImageBuffer(IUnsafeMemoryOwner<byte> buffer, int width, int height, bool overrideIsSigned = false) {
		Data = buffer;
		ColorData = new TypedRivetMemory<TColor>(buffer, 0);
		ValueData = new TypedRivetMemory<T>(buffer, 0);
		Width = width;
		Height = height;
		IsSigned = overrideIsSigned || typeof(T) == typeof(sbyte) || typeof(T) == typeof(short) || typeof(T) == typeof(int);
	}

	public ImageBuffer(int width, int height) : this(new RivetMemory<byte>(Unsafe.SizeOf<TColor>() * width * height), width, height) { }
	public TypedRivetMemory<TColor> ColorData { get; }
	public TypedRivetMemory<T> ValueData { get; }

	public IUnsafeMemoryOwner<byte> Data { get; }
	public int Width { get; }
	public int Height { get; }
	public int Stride { get; } = Unsafe.SizeOf<TColor>();
	public int Components { get; } = Unsafe.SizeOf<TColor>() / Unsafe.SizeOf<T>();
	public bool IsHDR { get; } = typeof(T) == typeof(float) || typeof(T) == typeof(Half);
	public bool IsSigned { get; }
	public int BitDepth { get; } = Unsafe.SizeOf<T>() << 3;

	public IImageBuffer Cast<TNewColor, TNew>()
		where TNewColor : unmanaged, IColor<TNewColor, TNew>, IColor<TNew>, IColor
		where TNew : unmanaged, INumberBase<TNew>, IMinMaxValue<TNew> {
		if (typeof(TNewColor) == typeof(TColor) && typeof(TNew) == typeof(T)) {
			return this;
		}

		var buffer = new ImageBuffer<TNewColor, TNew>(Width, Height);
		RgbConverter.Convert<TColor, T, TNewColor, TNew>(ColorData.Memory.Span, buffer.ColorData.Memory.Span);
		return buffer;
	}

	public IImageBuffer Cast<TNew>()
		where TNew : unmanaged, INumberBase<TNew>, IMinMaxValue<TNew> =>
		Components switch {
			1 => Cast<ColorR<TNew>, TNew>(),
			2 => Cast<ColorRG<TNew>, TNew>(),
			3 => Cast<ColorRGB<TNew>, TNew>(),
			4 => Cast<ColorRGBA<TNew>, TNew>(),
			_ => throw new NotSupportedException(),
		};

	public IImageBuffer CreateSubImage(int width, int height) => new ImageBuffer<TColor, T>(width, height);

	public void Draw(IImageBuffer image, int x, int y, ImageDrawOperation op = ImageDrawOperation.Copy) {
		ImageBuffer<TColor, T>? convertedImage = null;
		if (image is not ImageBuffer<TColor, T> imageBuffer) {
			imageBuffer = (ImageBuffer<TColor, T>) image.Cast<TColor, T>();
			convertedImage = imageBuffer;
		}

		try {
			var dstImagePixels = ColorData.Memory.Span;
			var srcImagePixels = imageBuffer.ColorData.Memory.Span;

			for (var sy = 0; sy < imageBuffer.Height; sy++) {
				var dy = y + sy;
				if (dy < 0 || dy >= Height) {
					continue;
				}

				for (var sx = 0; sx < imageBuffer.Width; sx++) {
					var dx = x + sx;
					if (dx < 0 || dx >= Width) {
						continue;
					}

					var srcIndex = sy * imageBuffer.Width + sx;
					var dstIndex = dy * Width + dx;

					ref var dstPixel = ref dstImagePixels[dstIndex];
					var srcPixel = srcImagePixels[srcIndex];

					switch (op) {
						case ImageDrawOperation.Blend: {
							PixelOperations<TColor, T>.BlendPixel(srcPixel, ref dstPixel);
							break;
						}
						case ImageDrawOperation.Copy:
							PixelOperations<TColor, T>.CopyPixel(srcPixel, ref dstPixel);
							break;
						default:
							throw new NotSupportedException();
					}
				}
			}
		} finally {
			convertedImage?.Dispose();
		}
	}

	public void Dispose() {
		Data.Dispose();
		ColorData.Dispose();
		ValueData.Dispose();
	}
}

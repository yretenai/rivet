using System.Numerics;
using AssetRipper.TextureDecoder.Rgb;
using Rivet.IO;

namespace Rivet.Converters.Imaging;

public interface IImageBuffer : IDisposable {
	public IUnsafeMemoryOwner<byte> Data { get; }
	public int Width { get; }
	public int Height { get; }
	public int Stride { get; }
	public int Components { get; }
	public bool IsHDR { get; }
	public bool IsSigned { get; }
	public int BitDepth { get; }

	public IImageBuffer Cast<TNewColor, TNew>()
		where TNewColor : unmanaged, IColor<TNewColor, TNew>, IColor<TNew>, IColor
		where TNew : unmanaged, INumberBase<TNew>, IMinMaxValue<TNew>;

	public IImageBuffer Cast<TNew>()
		where TNew : unmanaged, INumberBase<TNew>, IMinMaxValue<TNew>;

	public IImageBuffer CreateSubImage(int width, int height);

	public void Draw(IImageBuffer image, int x, int y, ImageDrawOperation op = ImageDrawOperation.Copy);
}

using System.Reflection;
using System.Runtime.InteropServices;
using SixLabors.ImageSharp;
using SixLabors.ImageSharp.Formats.Png;
using SixLabors.ImageSharp.PixelFormats;

namespace Rivet.Converters.Imaging.Writers;

public static partial class PNGWriter {
	[Flags]
	internal enum PNGColorType {
		Gray = 0,
		Palette = 1,
		Color = 2,
		Alpha = 4,

		PAL = Color | Palette,
		RGB = Color,
		RGBA = Color | Alpha,
		GRAYA = Gray | Alpha,
	}

	internal enum PNGCompressionType {
		Deflate = 0,

		Default = Deflate,
	}

	internal enum PNGFilterType {
		None = 0,
		Differencing = 64,

		Default = None,
	}

	internal enum PNGInterlacing {
		None = 0,
		Adam7 = 1,
	}

	internal enum PNGCompressionLevel {
		None = 0,
		Level1 = 1,
		Level2 = 2,
		Level3 = 3,
		Level4 = 4,
		Level5 = 5,
		Level6 = 6,
		Level7 = 7,
		Level8 = 8,
		Level9 = 9,

		SuperFast = Level1,
		Fast = Level3,
		SuperSmall = Level9,
		Small = Level6,
	}

	[Flags]
	internal enum PNGTransform : uint {
		Identity = 0x0000,
		Strip16 = 0x0001,
		StripAlpha = 0x0002,
		Packing = 0x0004,
		PackSwap = 0x0008,
		Expand = 0x0010,
		InvertMono = 0x0020,
		Shift = 0x0040,
		BGR = 0x0080,
		SwapAlpha = 0x0100,
		SwapEndian = 0x0200,
		InvertAlpha = 0x0400,
		StripFiller = 0x0800,
		StripFillerAfter = 0x1000,
		GrayscaleToRgb = 0x2000,
		Expand16 = 0x4000,
		Scale16 = 0x8000,
	}

	private static partial class NativeMethods {
		internal const string LibraryName = "png";
		internal const DllImportSearchPath SearchPath = DllImportSearchPath.SafeDirectories | DllImportSearchPath.AssemblyDirectory | DllImportSearchPath.ApplicationDirectory;

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate void png_rw(nint png, nint ptr, nint size);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate void png_flush(nint png);

		[LibraryImport(LibraryName, StringMarshalling = StringMarshalling.Utf8), DefaultDllImportSearchPaths(SearchPath)]
		public static partial nint png_create_write_struct([MarshalAs(UnmanagedType.LPStr)] string userPNGVersion, nint errorPtr, nint errorFunc, nint warnFunc);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial nint png_create_info_struct(nint pngPtr);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void png_destroy_write_struct(ref nint pngPtr, ref nint infoPtr);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void png_set_write_fn(nint pngPtr, nint ioPtr, [MarshalAs(UnmanagedType.FunctionPtr)] png_rw? write, [MarshalAs(UnmanagedType.FunctionPtr)] png_flush? flush);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void png_set_IHDR(nint pngPtr, nint infoPtr, uint width, uint height, int bitDepth, PNGColorType colorType, PNGInterlacing interlaceMethod, PNGCompressionType compressionMethod, PNGFilterType filterMethod);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void png_write_info(nint pngPtr, nint infoPtr);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static unsafe partial void png_set_rows(nint pngPtr, nint infoPtr, byte** rowPtr);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void png_write_end(nint pngPtr, nint infoPtr);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void png_set_compression_level(nint pngPtr, PNGCompressionLevel level);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial nint png_get_libpng_ver(nint pngPtr); // for some reason string doesn't work here

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void png_write_png(nint pngPtr, nint infoPtr, PNGTransform transforms, IntPtr @params);
	}

	public static bool IsAvailable { get; }
	public static string PNGVersion { get; }

	static PNGWriter() {
		PNGVersion = "1.6.0";

		if (NativeLibrary.TryLoad(NativeMethods.LibraryName, Assembly.GetExecutingAssembly(), NativeMethods.SearchPath, out var ptr)) {
			NativeLibrary.Free(ptr);
			IsAvailable = true;
			var pngPtr = NativeMethods.png_get_libpng_ver(nint.Zero);
			if (pngPtr != nint.Zero) {
				PNGVersion = Marshal.PtrToStringAnsi(pngPtr) ?? PNGVersion;
			}
		}
	}

	public static void WriteToStream(Stream stream, Image image) {
		var bitDepth = image is Image<Rgba64> ? 16 : 8;
		if (!IsAvailable) {
			Fallback(stream, image, bitDepth);
		}

		switch (image) {
			case Image<Rgba32> rgba32:
				NativeWrite(stream, rgba32, bitDepth);
				break;
			case Image<Rgba64> rgba64:
				NativeWrite(stream, rgba64, bitDepth);
				break;
			default:
				Fallback(stream, image, bitDepth);
				break;
		}
	}

	private static unsafe void NativeWrite<T>(Stream stream, Image<T> image, int bitDepth) where T : unmanaged, IPixel<T> {
		var png = NativeMethods.png_create_write_struct(PNGVersion, nint.Zero, nint.Zero, nint.Zero);
		if (png == nint.Zero) {
			Fallback(stream, image, bitDepth);
			return;
		}

		var info = nint.Zero;
		try {
			info = NativeMethods.png_create_info_struct(png);
			NativeMethods.png_set_write_fn(png, nint.Zero, (_, dataPtr, dataSize) => {
				var span = new Span<byte>((byte*) dataPtr, int.CreateChecked(dataSize));
				stream.Write(span);
			}, _ => {
				stream.Flush();
			});
			NativeMethods.png_set_compression_level(png, PNGCompressionLevel.None);
			NativeMethods.png_set_IHDR(png, info, (uint) image.Width, (uint) image.Height, bitDepth, PNGColorType.RGBA, PNGInterlacing.None, PNGCompressionType.Default, PNGFilterType.None);
			NativeMethods.png_write_info(png, info);

			if (!image.DangerousTryGetSinglePixelMemory(out var rowData)) {
				return;
			}

			using var rowPin = rowData.Pin();

			var rows = stackalloc byte*[image.Height];
			for (var rowIndex = 0; rowIndex < image.Height; rowIndex++) {
				rows[rowIndex] = (byte*) rowPin.Pointer + (image.Height - 1 - rowIndex) * image.Width * (bitDepth >> 1);
			}

			NativeMethods.png_set_rows(png, info, rows);
			NativeMethods.png_write_png(png, info, PNGTransform.SwapEndian, nint.Zero);
			NativeMethods.png_write_end(png, info);

			GC.KeepAlive(rowPin);
		} finally {
			NativeMethods.png_destroy_write_struct(ref png, ref info);
		}

		GC.KeepAlive(stream);
	}

	private static void Fallback(Stream stream, Image image, int bitDepth) {
		image.SaveAsPng(stream, new PngEncoder {
			BitDepth = (PngBitDepth) bitDepth,
			ColorType = PngColorType.RgbWithAlpha,
			FilterMethod = PngFilterMethod.None,
			CompressionLevel = PngCompressionLevel.NoCompression,
			TransparentColorMode = PngTransparentColorMode.Preserve,
		});
	}
}

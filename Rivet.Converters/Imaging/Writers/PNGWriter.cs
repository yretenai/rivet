using System.Diagnostics;
using System.Reflection;
using System.Runtime.InteropServices;

namespace Rivet.Converters.Imaging.Writers;

public static partial class PNGWriter {
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

	public static bool IsAvailable { get; }
	public static string PNGVersion { get; }

	public static void WriteToStream(Stream stream, PNGCompressionLevel compressionLevel, IImageBuffer image) {
		if (image.IsHDR) {
			using var image16 = image.IsSigned ? image.Cast<short>() : image.Cast<ushort>();
			Write(stream, compressionLevel, image16);
			return;
		}

		Write(stream, compressionLevel, image);
	}

	public static unsafe void Write(Stream stream, PNGCompressionLevel compressionLevel, IImageBuffer image) {
		if (image.IsHDR || image.Components is not (>= 1 and <= 4)) {
			throw new NotSupportedException();
		}

		var png = NativeMethods.png_create_write_struct(PNGVersion, nint.Zero, nint.Zero, nint.Zero);
		if (png == nint.Zero) {
			throw new OutOfMemoryException();
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
			NativeMethods.png_set_compression_level(png, compressionLevel);
			var colorType = image.Components switch {
				                1 => PNGColorType.Gray,
				                2 => PNGColorType.GrayAlpha,
				                3 => PNGColorType.RGB,
				                4 => PNGColorType.RGBA,
				                _ => throw new UnreachableException(),
			                };
			NativeMethods.png_set_IHDR(png, info, (uint) image.Width, (uint) image.Height, image.BitDepth, colorType, PNGInterlacing.None, PNGCompressionType.Default, PNGFilterType.None);
			NativeMethods.png_write_info(png, info);

			var rowData = image.Data.Memory;

			using var rowPin = rowData.Pin();

			var rows = stackalloc byte*[image.Height];
			for (var rowIndex = 0; rowIndex < image.Height; rowIndex++) {
				rows[rowIndex] = (byte*) rowPin.Pointer + (image.Height - 1 - rowIndex) * image.Width * (image.BitDepth >> 1);
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

	[Flags]
	internal enum PNGColorType {
		Gray = 0,
		Palette = 1,
		Color = 2,
		Alpha = 4,

		PaletteColor = Color | Palette,
		RGB = Color,
		RGBA = Color | Alpha,
		GrayAlpha = Gray | Alpha,
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
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate void png_flush(nint png);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate void png_rw(nint png, nint ptr, nint size);

		internal const string LibraryName = "png";
		internal const DllImportSearchPath SearchPath = DllImportSearchPath.SafeDirectories | DllImportSearchPath.AssemblyDirectory | DllImportSearchPath.ApplicationDirectory;

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
}

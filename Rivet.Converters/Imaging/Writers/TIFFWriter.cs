using System.Reflection;
using System.Runtime.InteropServices;
using SixLabors.ImageSharp;
using SixLabors.ImageSharp.Compression.Zlib;
using SixLabors.ImageSharp.Formats.Tiff;
using SixLabors.ImageSharp.Formats.Tiff.Constants;
using SixLabors.ImageSharp.PixelFormats;

namespace Rivet.Converters.Imaging.Writers;

public static partial class TIFFWriter {
	internal enum TIFFTag : uint {
		ImageWidth = 256,
		ImageHeight = 257,
		RowsPerStrip = 278,
		SamplesPerPixel = 277,
		BitsPerSample = 258,
		SampleFormat = 339,
		Orientation = 274,
		PlanarConfig = 284,
		Photometric = 262,
		Compression = 259,
	}

	internal enum TIFFCompression {
		NONE = 1,
		CCITTRLE = 2,
		CCITTFAX3 = 3,
		CCITT_T4 = 3,
		CCITTFAX4 = 4,
		CCITT_T6 = 4,
		LZW = 5,
		OJPEG = 6,
		JPEG = 7,
		T85 = 9,
		T43 = 10,
		NEXT = 32766,
		CCITTRLEW = 32771,
		PACKBITS = 32773,
		THUNDERSCAN = 32809,
		IT8CTPAD = 32895,
		IT8LW = 32896,
		IT8MP = 32897,
		IT8BL = 32898,
		PIXARFILM = 32908,
		PIXARLOG = 32909,
		DEFLATE = 32946,
		ADOBE_DEFLATE = 8,
		DCS = 32947,
		JBIG = 34661,
		SGILOG = 34676,
		SGILOG24 = 34677,
		JP2000 = 34712,
		LERC = 34887,
		LZMA = 34925,
		ZSTD = 50000,
		WEBP = 50001,
		JXL = 50002,
	}

	internal enum TIFFPhotometric {
		MinIsWhite = 0,
		MinIsBlack = 1,
		RGB = 2,
		Palette = 3,
		Mask = 4,
		SEparated = 5,
		YCbCr = 6,
		CIELab = 8,
		ICCLab = 9,
		ITULab = 10,
		CFA = 32803,
		LogL = 32844,
		LogLuv = 32845,
	}

	internal enum TIFFPlanarConfig {
		Contigious = 1,
		Separate = 2,
	}

	internal enum TIFFOrientation {
		TopLeft = 1,
		TopRight = 2,
		BotRight = 3,
		BotLeft = 4,
		LeftTop = 5,
		RightTop = 6,
		RightBot = 7,
		LeftBot = 8,
	}

	internal enum TIFFSampleFormat {
		UInt = 1,
		Int = 2,
		Float = 3,
		Void = 4,
		ComplexInt = 5,
		ComplexFloat = 6,
	}

	private static partial class NativeMethods {
		internal const string LibraryName = "tiff";
		internal const DllImportSearchPath SearchPath = DllImportSearchPath.SafeDirectories | DllImportSearchPath.AssemblyDirectory | DllImportSearchPath.ApplicationDirectory;

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate nint TIFFReadWriteProc(nint userdata, nint data, nint size);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate ulong TIFFSeekProc(nint userdata, ulong offset, int whence);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate int TIFFCloseProc(nint userdata);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate ulong TIFFSizeProc(nint userdata);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate void TIFFMapFileProc(nint userdata, ref nint @base, ref ulong size);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate void TIFFUnmapFileProc(nint userdata, nint @base, ulong size);

		[LibraryImport(LibraryName, StringMarshalling = StringMarshalling.Utf8), DefaultDllImportSearchPaths(SearchPath)]
		public static partial nint TIFFClientOpen(string name, string mode, nint handle,
		                                          [MarshalAs(UnmanagedType.FunctionPtr)] TIFFReadWriteProc readProc,
		                                          [MarshalAs(UnmanagedType.FunctionPtr)] TIFFReadWriteProc writeProc,
		                                          [MarshalAs(UnmanagedType.FunctionPtr)] TIFFSeekProc seekProc,
		                                          [MarshalAs(UnmanagedType.FunctionPtr)] TIFFCloseProc closeProc,
		                                          [MarshalAs(UnmanagedType.FunctionPtr)] TIFFSizeProc sizeProc,
		                                          [MarshalAs(UnmanagedType.FunctionPtr)] TIFFMapFileProc? mapProc,
		                                          [MarshalAs(UnmanagedType.FunctionPtr)] TIFFUnmapFileProc? unmapProc);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void TIFFSetField(nint tiff, TIFFTag tag, int value);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void TIFFWriteEncodedStrip(nint tiff, uint strip, nint data, uint cc);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void TIFFWriteDirectory(nint tiff);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void TIFFClose(nint tiff);
	}

	public static bool IsAvailable { get; }

	static TIFFWriter() {
		if (NativeLibrary.TryLoad(NativeMethods.LibraryName, Assembly.GetExecutingAssembly(), NativeMethods.SearchPath, out var ptr)) {
			IsAvailable = true;
			NativeLibrary.Free(ptr);
		}
	}

	public static void WriteToStream(Stream stream, ImageCollection frames) {
		var stride = frames[0] is Image<Rgba64> ? 32 : 4;
		if (!IsAvailable) {
			Fallback(stream, frames);
		}

		switch (frames[0]) {
			case Image<Rgba32>:
				NativeWrite<Rgba32>(stream, frames, stride);
				break;
			case Image<Rgba64>:
				NativeWrite<Rgba64>(stream, frames, stride);
				break;
			default:
				Fallback(stream, frames);
				break;
		}
	}

	private static unsafe void NativeWrite<T>(Stream stream, ImageCollection frames, int stride) where T : unmanaged, IPixel<T> {
		var tiff = NativeMethods.TIFFClientOpen(stream is FileStream fs ? Path.GetFileName(fs.Name) : "Rivet", "w", nint.Zero,
		                                        (_, dataPtr, dataSize) => {
			                                        var span = new Span<byte>((byte*) dataPtr, int.CreateChecked(dataSize));
			                                        return stream.Read(span);
		                                        }, (_, dataPtr, dataSize) => {
			                                        var span = new Span<byte>((byte*) dataPtr, int.CreateChecked(dataSize));
			                                        stream.Write(span);
			                                        return dataSize;
		                                        }, (_, offset, whence) => {
			                                        var off = long.CreateChecked(offset);
			                                        if (whence == 2) {
				                                        off = -off;
			                                        }

			                                        return (ulong) stream.Seek(off, (SeekOrigin) whence);
		                                        }, (_) => {
			                                        stream.Flush();
			                                        stream.Close();
			                                        return 0;
		                                        }, _ => (ulong) stream.Length, null, null);
		if (tiff == nint.Zero) {
			Fallback(stream, frames);
			return;
		}

		try {
			var hdr = stride == 32;

			foreach (var frame in frames.Cast<Image<T>>()) {
				NativeMethods.TIFFSetField(tiff, TIFFTag.ImageWidth, frame.Width);
				NativeMethods.TIFFSetField(tiff, TIFFTag.ImageHeight, frame.Height);
				NativeMethods.TIFFSetField(tiff, TIFFTag.RowsPerStrip, frame.Height);
				NativeMethods.TIFFSetField(tiff, TIFFTag.SamplesPerPixel, 4);
				NativeMethods.TIFFSetField(tiff, TIFFTag.BitsPerSample, hdr ? 16 : 8);
				NativeMethods.TIFFSetField(tiff, TIFFTag.SampleFormat, (int) TIFFSampleFormat.UInt); // todo: we can pipe signed and float values but imagesharp is shit
				NativeMethods.TIFFSetField(tiff, TIFFTag.Orientation, (int) TIFFOrientation.TopLeft);
				NativeMethods.TIFFSetField(tiff, TIFFTag.PlanarConfig, (int) TIFFPlanarConfig.Contigious);
				NativeMethods.TIFFSetField(tiff, TIFFTag.Photometric, (int) (hdr ? TIFFPhotometric.LogL : TIFFPhotometric.RGB));
				NativeMethods.TIFFSetField(tiff, TIFFTag.Compression, (int) TIFFCompression.NONE);

				if (!frame.DangerousTryGetSinglePixelMemory(out var rowData)) {
					return;
				}

				using var rowPin = rowData.Pin();

				NativeMethods.TIFFWriteEncodedStrip(tiff, 0, (nint) rowPin.Pointer, (uint) (frame.Width * frame.Height * stride));
				NativeMethods.TIFFWriteDirectory(tiff);

				GC.KeepAlive(rowPin);
			}
		} finally {
			NativeMethods.TIFFClose(tiff);
		}

		GC.KeepAlive(stream);
	}

	private static void Fallback(Stream stream, ImageCollection frames) {
		var rootFrame = frames[0];
		foreach (var frame in frames.Skip(1)) {
			rootFrame.Frames.AddFrame(frame.Frames[0]);
		}

		rootFrame.SaveAsTiff(stream, new TiffEncoder {
			BitsPerPixel = rootFrame is Image<Rgba64> ? TiffBitsPerPixel.Bit64 : TiffBitsPerPixel.Bit32,
			PhotometricInterpretation = TiffPhotometricInterpretation.Rgb,
			CompressionLevel = DeflateCompressionLevel.BestSpeed,
			Compression = TiffCompression.None,
		});
	}
}

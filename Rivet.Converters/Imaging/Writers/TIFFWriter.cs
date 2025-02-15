using System.Reflection;
using System.Runtime.InteropServices;

namespace Rivet.Converters.Imaging.Writers;

public static partial class TIFFWriter {
	static TIFFWriter() {
		if (NativeLibrary.TryLoad(NativeMethods.LibraryName, Assembly.GetExecutingAssembly(), NativeMethods.SearchPath, out var ptr)) {
			IsAvailable = true;
			NativeLibrary.Free(ptr);
		}
	}

	public static bool IsAvailable { get; }

	public static unsafe void WriteToStream(Stream stream, TIFFCompression compression, ImageCollection frames) {
		var tiff = NativeMethods.TIFFClientOpen(stream is FileStream fs ? Path.GetFileName(fs.Name) : "Rivet", "w", nint.Zero,
		                                        (_, dataPtr, dataSize) => {
			                                        var span = new Span<byte>((byte*) dataPtr, int.CreateChecked(dataSize));
			                                        return stream.Read(span);
		                                        }, (_, dataPtr, dataSize) => {
			                                        stream.Flush();
			                                        var span = new Span<byte>((byte*) dataPtr, int.CreateChecked(dataSize));
			                                        stream.Write(span);
			                                        return dataSize;
		                                        }, (_, offset, whence) => {
			                                        var off = long.CreateChecked(offset);
			                                        if (whence == 2) {
				                                        off = -off;
			                                        }

			                                        return (ulong) stream.Seek(off, (SeekOrigin) whence);
		                                        }, _ => {
			                                        stream.Flush();
			                                        stream.Close();
			                                        return 0;
		                                        }, _ => (ulong) stream.Length, null, null);
		if (tiff == nint.Zero) {
			throw new OutOfMemoryException();
		}

		try {
			var extraSamples = stackalloc ushort[1];
			extraSamples[0] = (ushort) TIFFExtraSamples.UnassociatedAlpha;

			foreach (var frame in frames) {
				NativeMethods.TIFFSetField(tiff, TIFFTag.ImageWidth, frame.Width);
				NativeMethods.TIFFSetField(tiff, TIFFTag.ImageLength, frame.Height);
				NativeMethods.TIFFSetField(tiff, TIFFTag.RowsPerStrip, frame.Height);
				NativeMethods.TIFFSetField(tiff, TIFFTag.SamplesPerPixel, frame.Components);
				NativeMethods.TIFFSetField(tiff, TIFFTag.BitsPerSample, frame.BitDepth);
				NativeMethods.TIFFSetField(tiff, TIFFTag.SampleFormat, (int) (frame.IsHDR ? TIFFSampleFormat.Float : TIFFSampleFormat.UInt));
				NativeMethods.TIFFSetField(tiff, TIFFTag.Orientation, (int) TIFFOrientation.TopLeft);
				NativeMethods.TIFFSetField(tiff, TIFFTag.PlanarConfig, (int) TIFFPlanarConfig.Contig);
				NativeMethods.TIFFSetField(tiff, TIFFTag.Photometric, (int) (frame.IsHDR ? TIFFPhotometric.LogL : TIFFPhotometric.RGB));
				NativeMethods.TIFFSetField(tiff, TIFFTag.Compression, (int) compression);
				if (frame.Components == 4) {
					NativeMethods.TIFFSetFieldArray(tiff, TIFFTag.ExtraSamples, 1, (nint) extraSamples);
				}

				var rowData = frame.Data.Memory;

				using var rowPin = rowData.Pin();

				NativeMethods.TIFFWriteEncodedStrip(tiff, 0, (nint) rowPin.Pointer, (uint) (frame.Width * frame.Height * frame.Stride));
				NativeMethods.TIFFWriteDirectory(tiff);

				GC.KeepAlive(rowPin);
			}
		} finally {
			NativeMethods.TIFFClose(tiff);
		}

		GC.KeepAlive(stream);
	}

	internal enum TIFFTag : uint {
		ImageWidth = 256,
		ImageLength = 257,
		RowsPerStrip = 278,
		SamplesPerPixel = 277,
		BitsPerSample = 258,
		SampleFormat = 339,
		Orientation = 274,
		PlanarConfig = 284,
		Photometric = 262,
		Compression = 259,
		ExtraSamples = 338,
	}


	internal enum TIFFPhotometric {
		MinIsWhite = 0,
		MinIsBlack = 1,
		RGB = 2,
		Palette = 3,
		Mask = 4,
		Separated = 5,
		YCbCr = 6,
		CIELab = 8,
		ICCLab = 9,
		ITULab = 10,
		CFA = 32803,
		LogL = 32844,
		LogLuv = 32845,
	}

	internal enum TIFFPlanarConfig {
		Contig = 1,
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

	internal enum TIFFExtraSamples {
		Unspecified = 0,
		AssociatedAlpha = 1,
		UnassociatedAlpha = 2,
	}

	private static partial class NativeMethods {
		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate int TIFFCloseProc(nint userdata);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate void TIFFMapFileProc(nint userdata, ref nint @base, ref ulong size);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate nint TIFFReadWriteProc(nint userdata, nint data, nint size);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate ulong TIFFSeekProc(nint userdata, ulong offset, int whence);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate ulong TIFFSizeProc(nint userdata);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		public delegate void TIFFUnmapFileProc(nint userdata, nint @base, ulong size);

		internal const string LibraryName = "tiff";
		internal const DllImportSearchPath SearchPath = DllImportSearchPath.SafeDirectories | DllImportSearchPath.AssemblyDirectory | DllImportSearchPath.ApplicationDirectory;

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

		[LibraryImport(LibraryName, EntryPoint = "TIFFSetField"), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void TIFFSetFieldArray(nint tiff, TIFFTag tag, int count, nint array);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void TIFFWriteEncodedStrip(nint tiff, uint strip, nint data, uint cc);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void TIFFWriteDirectory(nint tiff);

		[LibraryImport(LibraryName), DefaultDllImportSearchPaths(SearchPath)]
		public static partial void TIFFClose(nint tiff);
	}
}

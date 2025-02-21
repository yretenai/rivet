// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.Converters;
using Rivet.Graphics;
using Rivet.Models;
using Rivet.Models.Data;
using Rivet.Models.Graphics;
using Serilog;
using Triton;
using Triton.Encoder;

namespace Rivet.CLI.Extract;

[Command<RivetExtractTextureFlags>("texture", "Extracts textures and converts them", "extract")]
internal record RivetExtractTextureCommand : RivetExtractCommand<RivetExtractTextureFlags> {
	public RivetExtractTextureCommand(RivetExtractTextureFlags Flags) : base(Flags) {
		switch (Flags.Format) {
			case ImageFormat.PNG when !PNGEncoder.IsAvailable:
			case ImageFormat.TIF when !TIFFEncoder.IsAvailable:
				Log.Error("Requested {Format} but the writer is unavailable (needs a dll?), setting to Auto", Flags.Format);
				Flags.Format = ImageFormat.Auto;
				break;
		}

		PngEncoder = new PNGEncoder(Flags.CompressTextures ? PNGCompressionLevel.Small : PNGCompressionLevel.None);
		var tiffCompression = Flags.CompressTextures ? TIFFCompression.LZW : TIFFCompression.None;
		TiffEncoder = new TIFFEncoder(tiffCompression, tiffCompression);
	}

	private PNGEncoder PngEncoder { get; }
	private TIFFEncoder TiffEncoder { get; }

	protected override void Process(RivetAsset asset) {
		if (asset.Type is not AssetType.Texture || asset.Category is not AssetCategory.Game) {
			return;
		}

		using var texture = asset.Load<Texture>(Game);
		if (texture == null) {
			return;
		}

		var format = Flags.Format;
		switch (Flags.Format) {
			case ImageFormat.PNG when !texture.IsSupported() || !PNGEncoder.IsAvailable:
			case ImageFormat.TIF when !texture.IsSupported() || !TIFFEncoder.IsAvailable:
				return;
			case ImageFormat.Auto:
				var isMultiSurface = texture.TextureHeader.SurfaceCount > 1 ||
				                     texture.TextureHeader.Flags.Dimension is TextureDimension.Array or TextureDimension.Texture3D ||
				                     (texture.TextureHeader.Flags.Dimension is TextureDimension.Cube && Flags.AssumeCubeIsSurfaces);

				if (!texture.IsSupported()) {
					format = ImageFormat.DDS;
				} else if (isMultiSurface) {
					format = ImageFormat.TIF;
				} else if (texture.IsHDR && Flags.AllowHDR) {
					format = ImageFormat.TIF; // ImageFormat.EXR;
				} else {
					format = ImageFormat.PNG;
				}

				format = format switch {
					         ImageFormat.PNG when !PNGEncoder.IsAvailable && TIFFEncoder.IsAvailable => ImageFormat.TIF,
					         ImageFormat.PNG when !PNGEncoder.IsAvailable && !TIFFEncoder.IsAvailable => ImageFormat.DDS,
					         ImageFormat.TIF when !TIFFEncoder.IsAvailable && PNGEncoder.IsAvailable => ImageFormat.PNG,
					         ImageFormat.TIF when !TIFFEncoder.IsAvailable && !PNGEncoder.IsAvailable => ImageFormat.DDS,
					         _ => format,
				         };

				break;
			case ImageFormat.PNG:
			case ImageFormat.TIF:
			// case ImageFormat.EXR:
			case ImageFormat.DDS:
				break;
			default:
				return;
		}

		var name = RivetGame.ProcessName(asset);
		var outputPath = name;
		if (Flags.Flatten) {
			outputPath = Path.GetFileName(outputPath);
		}

		outputPath = Path.ChangeExtension(outputPath, format.ToString("G").ToLower());
		var target = Path.Combine(Flags.OutputDir, outputPath);
		if (Flags.NoClobber) {
			var info = new FileInfo(target);
			if (info is { Exists: true, Length: > 0 }) {
				return;
			}
		}

		Log.Information("Converting {Path} to {Format} ({Type}, {ContentType:F}, {DXGI})", name, format, texture.TextureHeader.Flags.Dimension, texture.TextureHeader.Flags.ContentType, texture.TextureHeader.Format);

		if (Flags.Dry) {
			return;
		}

		Directory.CreateDirectory(Path.GetDirectoryName(target) ?? Flags.OutputDir);
		using var stream = new FileStream(target, FileMode.Create, FileAccess.ReadWrite, FileShare.ReadWrite);
		if (format == ImageFormat.DDS) {
			using var buffer = texture.ToDDS();
			stream.Write(buffer.Memory.Span);
		} else {
			using var frames = texture.ToImage(Flags.AllowHDR, Flags.AllowNormalZ);
			var rootFrame = frames[0];
			if ((texture.TextureHeader.Flags.ContentType & TextureContentType.IBL) != 0 && !Flags.AssumeCubeIsSurfaces) {
				if (texture.TextureHeader.Flags.Dimension is TextureDimension.Cube) {
					var faceSize = texture.Dimensions.Width;

					using var crossImage = rootFrame.CreateSubImage(faceSize * 4, faceSize * 3);
					crossImage.Draw(frames[2], faceSize, 0); // Y+
					crossImage.Draw(frames[1], 0, faceSize); // -X
					crossImage.Draw(frames[4], faceSize, faceSize); // +Z
					crossImage.Draw(frames[0], faceSize * 2, faceSize); // +X
					crossImage.Draw(frames[5], faceSize * 3, faceSize); // -Z
					crossImage.Draw(frames[3], faceSize, faceSize * 2); //-Y
					SaveImage(stream, format, [crossImage]);
					return;
				}

				if (frames.Count == 1 && texture.Dimensions.Width / 4 == texture.Dimensions.Height / 2) {
					var faceSize = texture.Dimensions.Width / 4;
					using var crossImage = rootFrame.CreateSubImage(faceSize * 4, faceSize * 3);
					var tile = new Point(faceSize, faceSize);
					crossImage.Draw(rootFrame, new Point(faceSize, 0), new Rect(new Point(faceSize * 2, 0), tile)); // Y+
					crossImage.Draw(rootFrame, new Point(0, faceSize), new Rect(new Point(faceSize, 0), tile)); // -X
					crossImage.Draw(rootFrame, new Point(faceSize, faceSize), new Rect(new Point(0, faceSize), tile)); // +Z
					crossImage.Draw(rootFrame, new Point(faceSize * 2, faceSize), new Rect(new Point(0, 0), tile)); // +X
					crossImage.Draw(rootFrame, new Point(faceSize * 3, faceSize), new Rect(new Point(faceSize, faceSize), tile)); // -Z
					crossImage.Draw(rootFrame, new Point(faceSize, faceSize * 2), new Rect(new Point(faceSize * 3, 0), tile)); // -Y
					SaveImage(stream, format, [crossImage]);
					return;
				}
			}

			if (frames.Count == 1 || format == ImageFormat.TIF) {
				SaveImage(stream, format, frames);
				return;
			}

			using var tileImage = rootFrame.CreateSubImage(texture.Dimensions.Width, texture.Dimensions.Height * frames.Count);
			for (var surfaceIndex = 0; surfaceIndex < frames.Count; ++surfaceIndex) {
				tileImage.Draw(frames[surfaceIndex], new Point(0, texture.Dimensions.Height * surfaceIndex));
			}

			SaveImage(stream, format, [tileImage]);
		}
	}

	private void SaveImage(Stream stream, ImageFormat format, ImageCollection images) {
		switch (format) {
			case ImageFormat.PNG:
				PngEncoder.Write(stream, images[0]);
				break;
			case ImageFormat.TIF:
				TiffEncoder.Write(stream, images);
				break;
		}
	}
}

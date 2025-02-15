// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.Converters;
using Rivet.Converters.Imaging;
using Rivet.Converters.Imaging.Writers;
using Rivet.Graphics;
using Rivet.Models;
using Rivet.Models.Data;
using Rivet.Models.Graphics;
using Serilog;

namespace Rivet.CLI.Extract;

[Command(typeof(RivetExtractTextureFlags), "texture", "Extracts textures and converts them", "extract")]
internal record RivetExtractTextureCommand : RivetExtractCommand<RivetExtractTextureFlags> {
	public RivetExtractTextureCommand(RivetExtractTextureFlags Flags) : base(Flags) {
		switch (Flags.Format) {
			case ImageFormat.PNG when !PNGWriter.IsAvailable:
			case ImageFormat.TIF when !TIFFWriter.IsAvailable:
				Log.Error("Requested {Format} but the writer is unavailable (needs a dll?)", Flags.Format);
				return;
		}
	}

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
			case ImageFormat.PNG when !texture.IsSupported() || !PNGWriter.IsAvailable:
			case ImageFormat.TIF when !texture.IsSupported() || !TIFFWriter.IsAvailable:
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
					         ImageFormat.PNG when !PNGWriter.IsAvailable && TIFFWriter.IsAvailable => ImageFormat.TIF,
					         ImageFormat.PNG when !PNGWriter.IsAvailable && !TIFFWriter.IsAvailable => ImageFormat.DDS,
					         ImageFormat.TIF when !TIFFWriter.IsAvailable && PNGWriter.IsAvailable => ImageFormat.PNG,
					         ImageFormat.TIF when !TIFFWriter.IsAvailable && !PNGWriter.IsAvailable => ImageFormat.DDS,
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
			if (texture.TextureHeader.Flags.Dimension is TextureDimension.Cube) {
				var faceSize = texture.Dimensions.Width;

				using var crossImage = rootFrame.CreateSubImage(faceSize * 4, faceSize * 3);
				crossImage.Draw(frames[2], faceSize, 0);
				crossImage.Draw(frames[1], 0, faceSize);
				crossImage.Draw(frames[4], faceSize, faceSize);
				crossImage.Draw(frames[0], faceSize * 2, faceSize);
				crossImage.Draw(frames[5], faceSize * 3, faceSize);
				crossImage.Draw(frames[3], faceSize, faceSize * 2);
				SaveImage(stream, format, [crossImage]);
				return;
			}

			if (frames.Count == 1 || format == ImageFormat.TIF) {
				SaveImage(stream, format, frames);
				return;
			}

			using var tileImage = rootFrame.CreateSubImage(texture.Dimensions.Width, texture.Dimensions.Height * frames.Count);
			for (var surfaceIndex = 0; surfaceIndex < frames.Count; ++surfaceIndex) {
				tileImage.Draw(frames[surfaceIndex], 0, texture.Dimensions.Height * surfaceIndex);
			}

			SaveImage(stream, format, [tileImage]);
		}
	}

	private void SaveImage(Stream stream, ImageFormat format, ImageCollection images) {
		switch (format) {
			case ImageFormat.PNG:
				PNGWriter.WriteToStream(stream, Flags.CompressTextures ? PNGCompressionLevel.Small : PNGCompressionLevel.None, images[0]);
				break;
			case ImageFormat.TIF:
				TIFFWriter.WriteToStream(stream, Flags.CompressTextures ? TIFFCompression.LZW :  TIFFCompression.None, images);
				break;
		}
	}
}

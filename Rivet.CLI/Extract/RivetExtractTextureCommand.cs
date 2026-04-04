// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.CommandLine;
using Pluto.Maths;
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

		PngEncoder = new PNGEncoder(PNGCompressionLevel.Small);
		TiffEncoder = new TIFFEncoder(TIFFCompression.LZW, TIFFCompression.LZW);
	}

	private PNGEncoder PngEncoder { get; }
	private TIFFEncoder TiffEncoder { get; }

	private static readonly Point<int>[] IBLCrop = [
		new(0, 0), // X+
		new(1, 0), // X-
		new(2, 0), // Y+
		new(3, 0), // Y-
		new(0, 1), // Z+
		new(1, 1), // Z-
	];

	protected override void Process(RivetAsset asset) {
		if (asset.Type is not (AssetType.Texture or AssetType.Zone) || asset.Category is not AssetCategory.Game) {
			return;
		}

		using var texture = asset.Load<Texture>(Game);
		if (texture is not { IsValid: true }) {
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
					using var cubemap = new IBLImage(frames, CubemapOrder.DXGIOrder);
					using var converted = cubemap.Convert(Flags.CubeStyle);
					SaveImage(stream, texture.TextureHeader.Flags.ContentType, format, [converted]);
					return;
				}

				if (frames.Count == 1 && texture.Dimensions.Width / 4 == texture.Dimensions.Height / 2) {
					var faceSize = texture.Dimensions.Width / 4;
					using var cubemap = IBLImage.FromCrop(rootFrame, faceSize, CubemapOrder.DXGIOrder, IBLCrop);
					using var converted = cubemap.Convert(Flags.CubeStyle);
					SaveImage(stream, texture.TextureHeader.Flags.ContentType, format, [converted]);
					return;
				}
			}

			if (frames.Count == 1 || format == ImageFormat.TIF) {
				SaveImage(stream, texture.TextureHeader.Flags.ContentType, format, frames);
				return;
			}

			using var tileImage = rootFrame.CreateSubImage(texture.Dimensions.Width, texture.Dimensions.Height * frames.Count);
			for (var surfaceIndex = 0; surfaceIndex < frames.Count; ++surfaceIndex) {
				tileImage.Draw(frames[surfaceIndex], new Point<int>(0, texture.Dimensions.Height * surfaceIndex));
			}

			SaveImage(stream, texture.TextureHeader.Flags.ContentType, format, [tileImage]);
		}
	}

	private void SaveImage(Stream stream, TextureContentType contentType, ImageFormat format, ImageCollection images) {
		var options = new EncoderWriteOptions {
			Compress = Flags.CompressTextures,
			AssociateAlpha = contentType == TextureContentType.sRGB,
		};

		switch (format) {
			case ImageFormat.PNG:
				PngEncoder.Write(stream, options, images[0]);
				break;
			case ImageFormat.TIF:
				TiffEncoder.Write(stream, options, images);
				break;
		}
	}
}

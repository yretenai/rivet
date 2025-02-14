// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics;
using DragonLib.CommandLine;
using ImageMagick;
using Rivet.CLI.Flags;
using Rivet.Converters;
using Rivet.Graphics;
using Rivet.Models;
using Rivet.Models.Data;
using Rivet.Models.Graphics;
using Serilog;

namespace Rivet.CLI.Extract;

[Command(typeof(RivetExtractTextureFlags), "texture", "Extracts textures and converts them", "extract")]
internal record RivetExtractTextureCommand(RivetExtractTextureFlags Flags) : RivetExtractCommand<RivetExtractTextureFlags>(Flags) {
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
			case ImageFormat.PNG when !texture.IsSupported():
			case ImageFormat.TIF when !texture.IsSupported():
				return;
			case ImageFormat.Auto:
				var isMultiSurface = texture.TextureHeader.SurfaceCount > 1 ||
				                     texture.TextureHeader.Flags.Dimension is TextureDimension.Array or TextureDimension.Texture3D ||
				                     (texture.TextureHeader.Flags.Dimension is TextureDimension.Cube && Flags.AssumeCubeIsSurfaces);

				if (!texture.IsSupported()) {
					format = ImageFormat.DDS;
				} else if (isMultiSurface) {
					format = ImageFormat.TIF;
				} else if (texture.IsHDR && !Flags.DisallowHDR) {
					format = ImageFormat.EXR;
				} else {
					format = ImageFormat.PNG;
				}

				break;
			case ImageFormat.PNG:
			case ImageFormat.TIF:
			case ImageFormat.EXR:
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
			var magickFormat = format switch {
				                   ImageFormat.TIF => MagickFormat.Tiff,
				                   ImageFormat.PNG => MagickFormat.Png,
				                   ImageFormat.EXR => MagickFormat.Exr,
				                   _ => throw new UnreachableException(),
			                   };

			using var image = texture.ToImage(!Flags.DisallowHDR);
			if (texture.TextureHeader.Flags.Dimension is TextureDimension.Cube) {
				var faceSize = texture.Dimensions.Width;
				using var crossLayout = new MagickImage(MagickColors.Black, (uint) faceSize * 4, (uint) faceSize * 3);
				crossLayout.ColorSpace = ColorSpace.RGB; // never apply sRGB transform, we can do that later.
				crossLayout.Composite(image[2], faceSize, 0, CompositeOperator.Copy);
				crossLayout.Composite(image[1], 0, faceSize, CompositeOperator.Copy);
				crossLayout.Composite(image[4], faceSize, faceSize, CompositeOperator.Copy);
				crossLayout.Composite(image[0], faceSize * 2, faceSize, CompositeOperator.Copy);
				crossLayout.Composite(image[5], faceSize * 3, faceSize, CompositeOperator.Copy);
				crossLayout.Composite(image[3], faceSize, faceSize * 2, CompositeOperator.Copy);
				crossLayout.Write(stream, magickFormat);
				return;
			}

			if (image.Count == 1) {
				image[0].Write(stream, magickFormat);
				return;
			}

			if (format == ImageFormat.TIF) {
				image.Write(stream, magickFormat);
				return;
			}

			using var tileLayout = new MagickImage(MagickColors.Transparent, (uint) texture.Dimensions.Width, (uint) (texture.Dimensions.Height * image.Count));
			tileLayout.ColorSpace = ColorSpace.RGB; // never apply sRGB transform, we can do that later.
			for (var surfaceIndex = 0; surfaceIndex < image.Count; ++surfaceIndex) {
				tileLayout.Composite(image[surfaceIndex], 0, texture.Dimensions.Height * surfaceIndex, CompositeOperator.Copy);
			}

			tileLayout.Write(stream, magickFormat);
		}
	}
}

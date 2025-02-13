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
		Log.Information("Converting {Path} to {Type}", name, format);

		if (Flags.Dry) {
			return;
		}

		if (Flags.Flatten) {
			name = Path.GetFileName(name);
		}

		name = Path.ChangeExtension(name, format.ToString("G").ToLower());

		var target = Path.Combine(Flags.OutputDir, name);
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
			} else {
				if (image.Count == 1) {
					image[0].Write(stream, magickFormat);
				} else {
					image.Write(stream, magickFormat);
				}
			}
		}
	}
}

// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.Converters;
using Rivet.Graphics;
using Rivet.Models;
using Rivet.Models.Data;
using Rivet.Models.Graphics;
using Serilog;
using SixLabors.ImageSharp;

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
				                     texture.TextureHeader.Flags.Dimension is TextureDimension.Array or TextureDimension.Cube or TextureDimension.Texture3D;
				format = texture.IsSupported() ? texture.IsHDR || isMultiSurface ? ImageFormat.TIF : ImageFormat.PNG : ImageFormat.DDS;
				break;
			case ImageFormat.PNG:
			case ImageFormat.TIF:
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
			using var image = texture.ToImage();
			if (image == null) {
				Log.Error("Unable to convert texture!");
				return;
			}

			if (format == ImageFormat.TIF) {
				image.SaveAsTiff(stream);
			} else {
				image.SaveAsPng(stream);
			}
		}
	}
}

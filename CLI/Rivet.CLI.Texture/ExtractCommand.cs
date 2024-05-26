// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using DragonLib.CommandLine;
using Rivet.Converters;
using Rivet.Models;
using Rivet.Models.Data;
using Rivet.Models.Graphics;
using Serilog;
using SixLabors.ImageSharp;

namespace Rivet.CLI.Texture;

[Command(typeof(ExtractTextureFlags), "extract", "Extracts textures and converts them")]
internal record ExtractCommand : RivetCLICommand {
	public ExtractCommand(ExtractTextureFlags flags) : base(flags) {
		if (flags.Filter.Count != 0) {
			var ids = ProcessFilters(flags.Filter);
			foreach (var id in ids) {
				if (Game.TryFindAsset(id, flags.Locale is Locale.All ? Locale.English : flags.Locale, AssetCategory.Game, out var asset)) {
					ConvertTexture(flags, asset);
				}
			}
		} else {
			foreach (var asset in Game.TOC.Assets.Values.SelectMany(x => x)) {
				if (flags.Locale is not Locale.All && asset.Locale != flags.Locale) {
					continue;
				}

				ConvertTexture(flags, asset);
			}
		}
	}

	private void ConvertTexture(ExtractTextureFlags flags, RivetAsset asset) {
		if (asset.Type is not AssetType.Texture || asset.Category is not AssetCategory.Game) {
			return;
		}

		var name = RivetGame.ProcessName(asset);

		if (flags.Regex.Count != 0 && !flags.Regex.Any(x => x.IsMatch(name))) {
			return;
		}

		using var texture = asset.Load<Graphics.Texture>(Game);
		if (texture == null) {
			return;
		}

		var format = flags.Format;
		switch (flags.Format) {
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

		Log.Information("Converting {Path} to {Type}", name, format);

		if (flags.Dry) {
			return;
		}

		if (flags.Flatten) {
			name = Path.GetFileName(name);
		}

		name = Path.ChangeExtension(name, format.ToString("G").ToLower());

		var target = Path.Combine(flags.OutputDir, name);
		Directory.CreateDirectory(Path.GetDirectoryName(target)!);
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

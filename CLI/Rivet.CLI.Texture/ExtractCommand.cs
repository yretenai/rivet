// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using DragonLib.CommandLine;
using Rivet.Converters;
using Rivet.Models.Data;
using Serilog;
using SixLabors.ImageSharp;

namespace Rivet.CLI.Texture;

[Command(typeof(ExtractTextureFlags), "extract", "Extracts textures and converts them")]
internal record ExtractCommand : RivetCLICommand {
	public ExtractCommand(ExtractTextureFlags flags) : base(flags) {
		foreach (var asset in Game.TOC.Assets.Values.SelectMany(x => x)) {
			if (asset.Type is not AssetType.Texture || asset.Category is not AssetCategory.Game) {
				continue;
			}

			using var texture = asset.Load<Graphics.Texture>(Game);
			if (texture == null) {
				continue;
			}

			var format = flags.Format;
			switch (flags.Format) {
				case ImageFormat.PNG when !texture.IsSupported():
				case ImageFormat.TIF when !texture.IsSupported():
					continue;
				case ImageFormat.Auto:
					format = texture.IsSupported() ? texture.IsHDR ? ImageFormat.TIF : ImageFormat.PNG : ImageFormat.DDS;
					break;
				case ImageFormat.PNG:
				case ImageFormat.TIF:
				case ImageFormat.DDS:
					break;
				default:
					continue;
			}

			var name = RivetGame.ProcessName(asset);
			Log.Information("Converting {Path} to {Type}", name, format);

			if (flags.Dry) {
				continue;
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
					continue;
				}

				if (format == ImageFormat.TIF) {
					image.SaveAsTiff(stream);
				} else {
					image.SaveAsPng(stream);
				}
			}
		}
	}
}

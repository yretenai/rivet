// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics.CodeAnalysis;
using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.Converters;
using Rivet.Graphics;
using Rivet.Models;
using Rivet.Models.Data;
using Rivet.Models.Graphics;
using Serilog;
using SixLabors.ImageSharp;
using SixLabors.ImageSharp.PixelFormats;
using SixLabors.ImageSharp.Processing;

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
				} else if (texture.IsHDR && Flags.AllowHDR) {
					format = ImageFormat.TIF; // ImageFormat.EXR;
				} else {
					format = ImageFormat.PNG;
				}

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

				Image crossImage;
				if (frames[0] is Image<RgbaVector>) {
					crossImage = new Image<RgbaVector>(rootFrame.Configuration, faceSize * 4, faceSize * 3, new RgbaVector());
				} else {
					crossImage = new Image<Rgba32>(rootFrame.Configuration, faceSize * 4, faceSize * 3, new Rgba32());
				}

				try {
					crossImage.Mutate([SuppressMessage("ReSharper", "AccessToDisposedClosure")](ctx) => {
						ctx.DrawImage(frames[2], new Point(faceSize, 0), 1f);
						ctx.DrawImage(frames[1], new Point(0, faceSize), 1f);
						ctx.DrawImage(frames[4], new Point(faceSize, faceSize), 1f);
						ctx.DrawImage(frames[0], new Point(faceSize * 2, faceSize), 1f);
						ctx.DrawImage(frames[5], new Point(faceSize * 3, faceSize), 1f);
						ctx.DrawImage(frames[3], new Point(faceSize, faceSize * 2), 1f);
					});
					SaveImage(stream, format, crossImage);
					return;
				} finally {
					crossImage.Dispose();
				}
			}

			if (frames.Count == 1) {
				SaveImage(stream, format, frames[0]);
				return;
			}

			if (format == ImageFormat.TIF) {
				foreach (var frame in frames.Skip(1)) {
					rootFrame.Frames.AddFrame(frame.Frames[0]);
				}

				SaveImage(stream, format, rootFrame);
				return;
			}

			Image tileImage;
			if (frames[0] is Image<RgbaVector>) {
				tileImage = new Image<RgbaVector>(rootFrame.Configuration, texture.Dimensions.Width, texture.Dimensions.Height * frames.Count, new RgbaVector(0, 0, 0, 0));
			} else {
				tileImage = new Image<Rgba32>(rootFrame.Configuration, texture.Dimensions.Width, texture.Dimensions.Height * frames.Count, new Rgba32(0, 0, 0, 0));
			}

			try {
				tileImage.Mutate([SuppressMessage("ReSharper", "AccessToDisposedClosure")](ctx) => {
					for (var surfaceIndex = 0; surfaceIndex < frames.Count; ++surfaceIndex) {
						ctx.DrawImage(frames[surfaceIndex], new Point(0, texture.Dimensions.Height * surfaceIndex), 1f);
					}
				});
				SaveImage(stream, format, tileImage);
			} finally {
				tileImage.Dispose();
			}
		}
	}

	private static void SaveImage(Stream stream, ImageFormat format, Image image) {
		switch (format) {
			case ImageFormat.PNG:
				image.SaveAsPng(stream);
				break;
			case ImageFormat.TIF:
				image.SaveAsTiff(stream);
				break;
		}
	}
}

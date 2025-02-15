// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AssetRipper.TextureDecoder.Rgb;
using AssetRipper.TextureDecoder.Rgb.Formats;
using BCDecNet;
using Rivet.Converters.Imaging;
using Rivet.Converters.Support;
using Rivet.Graphics;
using Rivet.IO;
using Rivet.Models.Graphics;
using SixLabors.ImageSharp;
using SixLabors.ImageSharp.PixelFormats;

namespace Rivet.Converters;

public static class TextureConverter {
	static TextureConverter() {
		ImageConfiguration = Configuration.Default.Clone();
		ImageConfiguration.MaxDegreeOfParallelism = Environment.ProcessorCount;
		ImageConfiguration.PreferContiguousImageBuffers = true;
		ImageConfiguration.MemoryAllocator = new ArrayPoolAllocator();
	}

	private static Configuration ImageConfiguration { get; }

	public static bool IsSupported(this Texture texture) => texture.TextureHeader.Format.GetPitchFactor().PixelsPerBlock > 0;

	public static RivetMemory<byte> ToDDS(this Texture texture) {
		var hasStream = texture.StreamBuffer.Size > 0;
		var numMips = texture.TextureHeader.Mips;
		if (!hasStream) {
			numMips -= texture.TextureHeader.StreamMips;
		}

		var surfaceCount = texture.TextureHeader.SurfaceCount;
		if (texture.TextureHeader.Flags.Dimension == TextureDimension.Cube) {
			surfaceCount *= 6;
		}

		var streamOnly = hasStream && surfaceCount > 1;
		if (streamOnly) {
			numMips = texture.TextureHeader.StreamMips;
		}

		DDSHeader dds = new();
		DX10Header dx10 = new();
		dds.Width = hasStream ? texture.TextureHeader.StreamDimensions.Key : texture.TextureHeader.ResidentDimensions.Key;
		dds.Height = hasStream ? texture.TextureHeader.StreamDimensions.Value : texture.TextureHeader.ResidentDimensions.Value;
		dds.MipMapCount = numMips;
		dx10.Format = texture.TextureHeader.Format;
		dx10.ArraySize = surfaceCount;

		if (dds.MipMapCount > 1) {
			dds.Flags |= DDSFlags.MipMapCount;
		}

		var (bitsPerBlock, pixelsPerBlock) = texture.TextureHeader.Format.GetPitchFactor();

		if (pixelsPerBlock > 1) {
			var oneSurface = CalculateSurfaceSize(dds.Width, dds.Height, pixelsPerBlock, bitsPerBlock, numMips, out _);
			dds.PitchOrLinearSize = oneSurface;
			dds.Flags |= DDSFlags.Linear;
		} else {
			dds.PitchOrLinearSize = (uint) (dds.Width * (bitsPerBlock >> 3));
			dds.Flags |= DDSFlags.Pitch;
		}

		switch (texture.TextureHeader.Flags.Dimension) {
			case TextureDimension.Cube:
				dds.Caps2 |= DDSCaps2.CubeMapAll;
				break;
			case TextureDimension.Texture3D:
				dds.Depth = texture.TextureHeader.SurfaceCount;
				dds.Caps2 |= DDSCaps2.Volume;
				break;
		}

		var gpuHeader = texture.Asset.TextureHeader;
		if (gpuHeader.ResidentSize + gpuHeader.StreamSize > 0) {
			dx10.ResourceDimension = gpuHeader.Descriptor.Dimension;
		} else {
			dx10.ResourceDimension = texture.TextureHeader.Flags.Dimension switch {
				                         TextureDimension.Texture1D => DXGIResourceDimension.Texture1D,
				                         TextureDimension.Texture2D => DXGIResourceDimension.Texture2D,
				                         TextureDimension.Array => DXGIResourceDimension.Texture2D,
				                         TextureDimension.Cube => DXGIResourceDimension.Texture2D,
				                         TextureDimension.Texture3D => DXGIResourceDimension.Texture3D,
				                         _ => DXGIResourceDimension.Texture2D,
			                         };
		}

		var bufferSize = Unsafe.SizeOf<DDSHeader>() + Unsafe.SizeOf<DX10Header>();
		var offset = bufferSize;
		if (hasStream) {
			bufferSize += texture.TextureHeader.StreamSize;
		}

		if (!streamOnly) {
			bufferSize += texture.TextureHeader.ResidentSize;
		}

		var buffer = new RivetMemory<byte>(bufferSize);

		MemoryMarshal.Write(buffer.Memory.Span, dds);
		MemoryMarshal.Write(buffer.Memory[Unsafe.SizeOf<DDSHeader>()..].Span, dx10);
		if (hasStream) {
			texture.StreamBuffer.Memory[..texture.TextureHeader.StreamSize].CopyTo(buffer.Memory[offset..]);
			offset += texture.TextureHeader.StreamSize;
		}

		if (!streamOnly) {
			texture.ResidentBuffer.Memory[..texture.TextureHeader.ResidentSize].CopyTo(buffer.Memory[offset..]);
		}

		return buffer;
	}

	public static ImageCollection ToImage(this Texture texture, bool allowHDR, bool allowNormalReconstruction) {
		var (width, height) = texture.Dimensions;
		var outputHDR = allowHDR && texture.IsHDR;
		var isNormal = allowNormalReconstruction && texture.TextureHeader.Flags.ContentType == TextureContentType.Normal; // don't allow channel packed formats
		using var frameBuffer = new RivetMemory<byte>(width * height * (texture.IsHDR ? 16 : 4));

		ImageCollection frames = [];
		try {
			var surfaceCount = (int) texture.TextureHeader.SurfaceCount;
			if (surfaceCount < 1) {
				surfaceCount = 1;
			}

			if (texture.TextureHeader.Flags.Dimension == TextureDimension.Cube) {
				surfaceCount *= 6;
			}

			for (var surface = 0; surface < surfaceCount; ++surface) {
				frames.Add(DecodeSurface(texture, surface, frameBuffer, outputHDR, isNormal));
			}

			return frames;
		} catch {
			frames.Dispose();
			throw;
		}
	}

	private static Image DecodeSurface(Texture texture, int surface, RivetMemory<byte> frameBuffer, bool isHDR, bool isNormal) {
		var (width, height) = texture.Dimensions;
		var (bitsPerBlock, pixelsPerBlock) = texture.TextureHeader.Format.GetPitchFactor();
		var hasStream = texture.StreamBuffer.Size > 0;
		var numMips = !hasStream ? texture.TextureHeader.Mips - texture.TextureHeader.StreamMips : texture.TextureHeader.StreamMips;
		var oneSurface = CalculateSurfaceSize(width, height, pixelsPerBlock, bitsPerBlock, numMips, out var largestMip);

		using var chunk = new SharedRivetMemory<byte>(hasStream ? texture.StreamBuffer : texture.ResidentBuffer, (int) (oneSurface * surface), (int) largestMip);

		var frameBufferMem = frameBuffer.Memory;
		var frameBufferSrc = frameBufferMem.Span;
		var chunkMem = chunk.Memory;
		var chunkSrc = chunkMem.Span;
		switch (texture.TextureHeader.Format) {
			case DXGIFormat.BC1_UNORM:
			case DXGIFormat.BC1_UNORM_SRGB:
				BCDec.DecompressBC1(chunkMem, frameBufferMem, width, height);

				if (isNormal) {
					BCDec.ComputeNormal(frameBufferSrc);
				}

				return Image.LoadPixelData<Rgba32>(ImageConfiguration, frameBufferSrc, width, height);
			case DXGIFormat.BC2_UNORM:
			case DXGIFormat.BC2_UNORM_SRGB:
				BCDec.DecompressBC2(chunkMem, frameBufferMem, width, height);

				if (isNormal) {
					BCDec.ComputeNormal(frameBufferSrc);
				}

				return Image.LoadPixelData<Rgba32>(ImageConfiguration, frameBufferSrc, width, height);
			case DXGIFormat.BC3_UNORM:
			case DXGIFormat.BC3_UNORM_SRGB:
				BCDec.DecompressBC3(chunkMem, frameBufferMem, width, height);

				if (isNormal) {
					BCDec.ComputeNormal(frameBufferSrc);
				}

				return Image.LoadPixelData<Rgba32>(ImageConfiguration, frameBufferSrc, width, height);
			case DXGIFormat.BC4_UNORM:
			case DXGIFormat.BC4_SNORM:
				BCDec.DecompressBC4(chunkMem, frameBufferMem, width, height, texture.TextureHeader.Format == DXGIFormat.BC4_SNORM);
				RgbConverter.Convert<ColorR<byte>, byte, ColorRGBA<byte>, byte>(frameBufferSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.BC5_SNORM when isNormal:
				BCDec.DecompressBC5Normal(chunkMem, frameBufferMem, width, height, true);
				RgbConverter.Convert<ColorRGB<sbyte>, sbyte, ColorRGBA<byte>, byte>(frameBufferSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.BC5_UNORM when isNormal:
				BCDec.DecompressBC5Normal(chunkMem, frameBufferMem, width, height, false);
				RgbConverter.Convert<ColorRGB<byte>, byte, ColorRGBA<byte>, byte>(frameBufferSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.BC5_SNORM:
				BCDec.DecompressBC5(chunkMem, frameBufferMem, width, height, true);
				RgbConverter.Convert<ColorRG<sbyte>, sbyte, ColorRGBA<byte>, byte>(frameBufferSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.BC5_UNORM:
				BCDec.DecompressBC5(chunkMem, frameBufferMem, width, height, false);
				RgbConverter.Convert<ColorRG<byte>, byte, ColorRGBA<byte>, byte>(frameBufferSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.BC6H_SF16:
			case DXGIFormat.BC6H_UF16:
				BCDec.DecompressBC6H(chunkMem, frameBufferMem, width, height, texture.TextureHeader.Format == DXGIFormat.BC6H_SF16);

				if (isNormal) {
					BCDec.ComputeNormal(MemoryMarshal.Cast<byte, float>(frameBufferSrc), 3);
				}

				if (!isHDR) {
					RgbConverter.Convert<ColorRGB<Half>, Half, ColorRGBA<byte>, byte>(frameBufferSrc, width, height, frameBufferSrc);
					break;
				}

				RgbConverter.Convert<ColorRGB<Half>, Half, ColorRGBA<ushort>, ushort>(frameBufferSrc, width, height, frameBufferSrc);
				return Image.LoadPixelData<Rgba64>(ImageConfiguration, frameBufferSrc, width, height);
			case DXGIFormat.BC7_UNORM:
			case DXGIFormat.BC7_UNORM_SRGB:
				BCDec.DecompressBC7(chunkMem, frameBufferMem, width, height);

				if (isNormal) {
					BCDec.ComputeNormal(frameBufferSrc);
				}

				return Image.LoadPixelData<Rgba32>(ImageConfiguration, frameBufferSrc, width, height);
			case DXGIFormat.A8_UNORM:
			case DXGIFormat.R8_UNORM:
			case DXGIFormat.R8_SNORM:
				RgbConverter.Convert<ColorR<byte>, byte, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R8G8_SINT:
			case DXGIFormat.R8G8_SNORM:
				RgbConverter.Convert<ColorRG<sbyte>, sbyte, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R8G8_UNORM:
			case DXGIFormat.R8G8_UINT:
				RgbConverter.Convert<ColorRG<byte>, byte, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16_SINT:
			case DXGIFormat.R16_SNORM:
				RgbConverter.Convert<ColorR<short>, short, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16_UINT:
			case DXGIFormat.R16_UNORM:
				RgbConverter.Convert<ColorR<ushort>, ushort, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16_FLOAT when !isHDR:
				RgbConverter.Convert<ColorR<Half>, Half, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16_FLOAT:
				RgbConverter.Convert<ColorR<Half>, Half, ColorRGBA<float>, float>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R8G8B8A8_UNORM:
			case DXGIFormat.R8G8B8A8_UNORM_SRGB:
			case DXGIFormat.R8G8B8A8_UINT:
				frameBufferSrc = chunkSrc[..frameBuffer.Size];
				chunkSrc[..frameBuffer.Size].CopyTo(frameBufferSrc);
				break;
			case DXGIFormat.R8G8B8A8_SNORM:
			case DXGIFormat.R8G8B8A8_SINT:
				RgbConverter.Convert<ColorRGBA<sbyte>, sbyte, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R32_FLOAT when !isHDR:
				RgbConverter.Convert<ColorR<float>, float, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R32_FLOAT:
				RgbConverter.Convert<ColorR<float>, float, ColorRGBA<float>, float>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R32_SINT:
				RgbConverter.Convert<ColorR<int>, int, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R32_UINT:
				RgbConverter.Convert<ColorR<uint>, uint, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16_FLOAT when !isHDR:
				RgbConverter.Convert<ColorRG<Half>, Half, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16_FLOAT:
				RgbConverter.Convert<ColorRG<Half>, Half, ColorRGBA<float>, float>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16_UNORM:
			case DXGIFormat.R16G16_UINT:
				RgbConverter.Convert<ColorRG<ushort>, ushort, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16_SNORM:
			case DXGIFormat.R16G16_SINT:
				RgbConverter.Convert<ColorRG<short>, short, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R10G10B10A2_UNORM:
			case DXGIFormat.R10G10B10A2_UINT:
				RgbConverter.Convert<ColorR10G10B10A2, ushort, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.B8G8R8A8_UNORM:
			case DXGIFormat.B8G8R8A8_UNORM_SRGB:
			case DXGIFormat.B8G8R8X8_UNORM:
			case DXGIFormat.B8G8R8X8_UNORM_SRGB:
				RgbConverter.Convert<ColorBGRA32, byte, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16B16A16_FLOAT when !isHDR:
				RgbConverter.Convert<ColorRGBA<Half>, Half, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16B16A16_FLOAT:
				RgbConverter.Convert<ColorRGBA<Half>, Half, ColorRGBA<ushort>, ushort>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16B16A16_SINT when !isHDR:
			case DXGIFormat.R16G16B16A16_SNORM when !isHDR:
				RgbConverter.Convert<ColorRGBA<short>, short, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16B16A16_SINT:
			case DXGIFormat.R16G16B16A16_SNORM:
				RgbConverter.Convert<ColorRGBA<short>, short, ColorRGBA<ushort>, ushort>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16B16A16_UINT when !isHDR:
			case DXGIFormat.R16G16B16A16_UNORM when !isHDR:
				RgbConverter.Convert<ColorRGBA<ushort>, ushort, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R16G16B16A16_UINT:
			case DXGIFormat.R16G16B16A16_UNORM:
				frameBufferSrc = chunkSrc[..frameBuffer.Size];
				break;
			case DXGIFormat.R32G32_FLOAT when !isHDR:
				RgbConverter.Convert<ColorRG<float>, float, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R32G32_FLOAT:
				RgbConverter.Convert<ColorRG<float>, float, ColorRGBA<float>, float>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R32G32_SINT:
				RgbConverter.Convert<ColorRG<int>, int, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R32G32_UINT:
				RgbConverter.Convert<ColorRG<uint>, uint, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R32G32B32A32_FLOAT when !isHDR:
				RgbConverter.Convert<ColorRGBA<float>, float, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBufferSrc);
				break;
			case DXGIFormat.R32G32B32A32_FLOAT:
				RgbConverter.Convert<ColorRGBA<float>, float, ColorRGBA<ushort>, ushort>(chunkSrc, width, height, frameBufferSrc);
				break;
			default:
				throw new NotSupportedException();
		}

		if (isHDR) {
			return Image.LoadPixelData<Rgba64>(ImageConfiguration, frameBufferSrc, width, height);
		}

		return Image.LoadPixelData<Rgba32>(ImageConfiguration, frameBufferSrc, width, height);
	}

	private static uint CalculateSurfaceSize(int width, int height, uint pixelsPerBlock, uint bitsPerBlock, int numMips, out uint largestMip) {
		var oneSurface = 0u;
		// this will always work as long as width and height are stable powers of 2, you're welcome
		var mask = ((uint) width * (uint) height / pixelsPerBlock * bitsPerBlock) >> 3;
		largestMip = mask;
		for (var i = 0; i < numMips; ++i) {
			oneSurface ^= mask; // maybe use += instead of ^= for non-power-of-2?
			mask >>= 2;
		}

		return oneSurface;
	}

	public static (uint BitsPerBlock, uint PixelsPerBlock) GetPitchFactor(this DXGIFormat format) {
		return format switch {
			       DXGIFormat.BC1_UNORM or DXGIFormat.BC1_UNORM_SRGB or DXGIFormat.BC2_UNORM or DXGIFormat.BC2_UNORM_SRGB => (64, 16),
			       DXGIFormat.BC3_UNORM or DXGIFormat.BC3_UNORM_SRGB => (128, 16),
			       DXGIFormat.BC4_UNORM or DXGIFormat.BC4_SNORM => (64, 16),
			       DXGIFormat.BC5_UNORM or DXGIFormat.BC5_SNORM or DXGIFormat.BC6H_SF16 or DXGIFormat.BC6H_UF16 or DXGIFormat.BC7_UNORM or DXGIFormat.BC7_UNORM_SRGB => (128, 16),
			       DXGIFormat.A8_UNORM or DXGIFormat.R8_UNORM or DXGIFormat.R8_SNORM => (8, 1),
			       DXGIFormat.R8G8_SINT or DXGIFormat.R8G8_UINT or DXGIFormat.R8G8_SNORM or DXGIFormat.R8G8_UNORM or DXGIFormat.R16_SINT or DXGIFormat.R16_UINT or DXGIFormat.R16_FLOAT or DXGIFormat.R16_SNORM or DXGIFormat.R16_UNORM => (16, 1),
			       DXGIFormat.R8G8B8A8_UNORM or DXGIFormat.R8G8B8A8_UNORM_SRGB or DXGIFormat.R8G8B8A8_SNORM or DXGIFormat.R8G8B8A8_SINT or DXGIFormat.R8G8B8A8_UINT or DXGIFormat.R32_FLOAT or DXGIFormat.R32_SINT or DXGIFormat.R32_UINT or DXGIFormat.R16G16_FLOAT or DXGIFormat.R16G16_UNORM or DXGIFormat.R16G16_UINT or DXGIFormat.R16G16_SNORM or DXGIFormat.R16G16_SINT or DXGIFormat.R10G10B10A2_UNORM or DXGIFormat.R10G10B10A2_UINT or DXGIFormat.B8G8R8A8_UNORM or DXGIFormat.B8G8R8A8_UNORM_SRGB
				       or DXGIFormat.B8G8R8X8_UNORM or DXGIFormat.B8G8R8X8_UNORM_SRGB => (32, 1),
			       DXGIFormat.R16G16B16A16_FLOAT or DXGIFormat.R16G16B16A16_SINT or DXGIFormat.R16G16B16A16_UINT or DXGIFormat.R16G16B16A16_SNORM or DXGIFormat.R16G16B16A16_UNORM or DXGIFormat.R32G32_FLOAT or DXGIFormat.R32G32_SINT or DXGIFormat.R32G32_UINT => (64, 1),
			       DXGIFormat.R32G32B32A32_FLOAT => (128, 1),
			       _ => (0, 0),
		       };
	}
}

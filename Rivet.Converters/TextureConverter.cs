// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Buffers;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AssetRipper.TextureDecoder.Bc;
using AssetRipper.TextureDecoder.Rgb;
using AssetRipper.TextureDecoder.Rgb.Formats;
using ImageMagick;
using Rivet.Converters.Support;
using Rivet.Graphics;
using Rivet.IO;
using Rivet.Models.Graphics;

namespace Rivet.Converters;

public static class TextureConverter {
	private static DecompressBc6h? DecompressBc6HProc { get; set; }
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

		var (bitsPerBlock, pixelsPerBlock) = texture.TextureHeader.Format.GetPitchFactor();
		var oneSurface = CalculateSurfaceSize(dds.Width, dds.Height, pixelsPerBlock, bitsPerBlock, numMips, out _);
		dds.Pitch = oneSurface;

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

	public static MagickImageCollection ToImage(this Texture texture) {
		var (width, height) = texture.Dimensions;

		using var frameBuffer = new RivetMemory<byte>(width * height * (texture.IsHDR ? 16 : 4));

		#pragma warning disable CA2000 // disposed later or transferred
		var image = new MagickImageCollection();
		#pragma warning restore CA2000
		try {
			var surfaceCount = (int) texture.TextureHeader.SurfaceCount;
			if (texture.TextureHeader.Flags.Dimension == TextureDimension.Cube) {
				surfaceCount *= 6;
			}

			for (var surface = 0; surface < Math.Max(1, surfaceCount); ++surface) {
				image.Add(DecodeSurface(texture, surface, frameBuffer));
			}

			return image;
		} catch {
			image.Dispose();
			throw;
		}
	}

	private static MagickImage DecodeSurface(Texture texture, int surface, RivetMemory<byte> frameBuffer) {
		var (width, height) = texture.Dimensions;
		var (bitsPerBlock, pixelsPerBlock) = texture.TextureHeader.Format.GetPitchFactor();
		var hasStream = texture.StreamBuffer.Size > 0;
		var numMips = !hasStream ? texture.TextureHeader.Mips - texture.TextureHeader.StreamMips : texture.TextureHeader.StreamMips;
		var oneSurface = CalculateSurfaceSize(width, height, pixelsPerBlock, bitsPerBlock, numMips, out var largestMip);

		#pragma warning disable CA2000 // dogshit analyzer telling me to use using when i'm using using
		using var chunk = new SharedRivetMemory<byte>(hasStream ? texture.StreamBuffer : texture.ResidentBuffer, (int) (oneSurface * surface), (int) largestMip);
		#pragma warning restore CA2000
		switch (texture.TextureHeader.Format) {
			case DXGIFormat.BC1_UNORM:
			case DXGIFormat.BC1_UNORM_SRGB:
				Bc1.Decompress(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.BC2_UNORM:
			case DXGIFormat.BC2_UNORM_SRGB:
				Bc2.Decompress(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.BC3_UNORM:
			case DXGIFormat.BC3_UNORM_SRGB:
				Bc3.Decompress(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.BC4_UNORM:
			case DXGIFormat.BC4_SNORM:
				Bc4.Decompress(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.BC5_SNORM:
			case DXGIFormat.BC5_UNORM:
				Bc5.Decompress(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.BC6H_SF16:
			case DXGIFormat.BC6H_UF16:
				DecompressBC6Float(chunk.Memory.Span, width, height, texture.TextureHeader.Format is DXGIFormat.BC6H_SF16, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.BC7_UNORM:
			case DXGIFormat.BC7_UNORM_SRGB:
				Bc7.Decompress(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.A8_UNORM:
			case DXGIFormat.R8_UNORM:
			case DXGIFormat.R8_SNORM:
				RgbConverter.Convert<ColorR<byte>, byte, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R8G8_SINT:
			case DXGIFormat.R8G8_SNORM:
				RgbConverter.Convert<ColorRG<sbyte>, sbyte, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R8G8_UNORM:
			case DXGIFormat.R8G8_UINT:
				RgbConverter.Convert<ColorRG<byte>, byte, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R16_SINT:
			case DXGIFormat.R16_SNORM:
				RgbConverter.Convert<ColorRG<short>, short, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R16_UINT:
			case DXGIFormat.R16_UNORM:
				RgbConverter.Convert<ColorRG<ushort>, ushort, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R16_FLOAT:
				RgbConverter.Convert<ColorRG<Half>, Half, ColorRGBA<float>, float>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R8G8B8A8_UNORM:
			case DXGIFormat.R8G8B8A8_UNORM_SRGB:
			case DXGIFormat.R8G8B8A8_UINT:
				chunk.Memory.Span[..frameBuffer.Size].CopyTo(frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R8G8B8A8_SNORM:
			case DXGIFormat.R8G8B8A8_SINT:
				RgbConverter.Convert<ColorRGBA<sbyte>, sbyte, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R32_FLOAT:
				RgbConverter.Convert<ColorR<float>, float, ColorRGBA<float>, float>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R32_SINT:
				RgbConverter.Convert<ColorR<int>, int, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R32_UINT:
				RgbConverter.Convert<ColorR<uint>, uint, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R16G16_FLOAT:
				RgbConverter.Convert<ColorRG<Half>, Half, ColorRGBA<float>, float>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R16G16_UNORM:
			case DXGIFormat.R16G16_UINT:
				RgbConverter.Convert<ColorRG<ushort>, ushort, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R16G16_SNORM:
			case DXGIFormat.R16G16_SINT:
				RgbConverter.Convert<ColorRG<short>, short, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R10G10B10A2_UNORM:
			case DXGIFormat.R10G10B10A2_UINT:
				RgbConverter.Convert<ColorR10G10B10A2, ushort, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.B8G8R8A8_UNORM:
			case DXGIFormat.B8G8R8A8_UNORM_SRGB:
			case DXGIFormat.B8G8R8X8_UNORM:
			case DXGIFormat.B8G8R8X8_UNORM_SRGB:
				RgbConverter.Convert<ColorBGRA32, byte, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;

			case DXGIFormat.R16G16B16A16_FLOAT:
				RgbConverter.Convert<ColorRGBA<Half>, Half, ColorRGBA<float>, float>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R16G16B16A16_SINT:
			case DXGIFormat.R16G16B16A16_UINT:
			case DXGIFormat.R16G16B16A16_SNORM:
			case DXGIFormat.R16G16B16A16_UNORM:
				RgbConverter.Convert<ColorRGBA<ushort>, ushort, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R32G32_FLOAT:
				RgbConverter.Convert<ColorRG<float>, float, ColorRGBA<float>, float>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R32G32_SINT:
				RgbConverter.Convert<ColorRGBA<int>, int, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R32G32_UINT:
				RgbConverter.Convert<ColorRG<uint>, uint, ColorRGBA<byte>, byte>(chunk.Memory.Span, width, height, frameBuffer.Memory.Span);
				break;
			case DXGIFormat.R32G32B32A32_FLOAT:
				chunk.Memory.Span[..frameBuffer.Size].CopyTo(frameBuffer.Memory.Span);
				break;
			default:
				throw new NotSupportedException();
		}

		return new MagickImage(frameBuffer.Memory.Span, new PixelReadSettings((uint) width, (uint) height, texture.IsHDR ? StorageType.Float : StorageType.Char, PixelMapping.RGBA));
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

	private static void DecompressBC6Float(ReadOnlySpan<byte> input, int width, int height, bool isSigned, Span<byte> output) {
		var bufferSize = width * height * Unsafe.SizeOf<ColorRGB<Half>>();
		using var bufferArray = MemoryPool<byte>.Shared.Rent(bufferSize);
		var buffer = bufferArray.Memory.Span[..bufferSize];
		var inputOffset = 0;

		// hack to get access to internal type.
		DecompressBc6HProc ??= typeof(Bc6h).Assembly.GetType("AssetRipper.TextureDecoder.Bc.BcHelpers")!.GetMethod("DecompressBc6h")!.CreateDelegate<DecompressBc6h>();

		for (var i = 0; i < height; i += 4) {
			for (var j = 0; j < width; j += 4) {
				var outputOffset = (i * width + j) * Unsafe.SizeOf<ColorRGB<Half>>();
				DecompressBc6HProc(input.Slice(inputOffset, Bc6h.BlockSize), buffer[outputOffset..], width * 3, isSigned);
				inputOffset += Bc6h.BlockSize;
			}
		}

		RgbConverter.Convert<ColorRGB<Half>, Half, ColorRGBA<float>, float>(buffer, width, height, output);
	}

	public static (uint BitsPerBlock, uint PixelsPerBlock) GetPitchFactor(this DXGIFormat format) {
		return format switch {
			       DXGIFormat.BC1_UNORM or DXGIFormat.BC1_UNORM_SRGB or DXGIFormat.BC2_UNORM or DXGIFormat.BC2_UNORM_SRGB => (64, 16),
			       DXGIFormat.BC3_UNORM or DXGIFormat.BC3_UNORM_SRGB => (16, 16),
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

	private delegate void DecompressBc6h(ReadOnlySpan<byte> compressedBlock, Span<byte> decompressedBlock, int destinationPitch, bool isSigned);
}

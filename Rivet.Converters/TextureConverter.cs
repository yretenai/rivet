// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Buffers;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AssetRipper.TextureDecoder.Bc;
using AssetRipper.TextureDecoder.Rgb;
using AssetRipper.TextureDecoder.Rgb.Formats;
using Rivet.Converters.Support;
using Rivet.Graphics;
using Rivet.IO;
using Rivet.Models.Graphics;
using SixLabors.ImageSharp;
using SixLabors.ImageSharp.PixelFormats;

namespace Rivet.Converters;

public static class TextureConverter {
	public static bool IsSupported(this Texture texture) => texture.TextureHeader.Format.GetPitchFactor().PixelsPerBlock > 1;

	public static RivetMemory<byte> ToDDS(this Texture texture) {
		var hasStream = texture.StreamBuffer.Memory.Length > 0;
		var numMips = texture.TextureHeader.Mips;
		if (!hasStream) {
			numMips -= texture.TextureHeader.StreamMips;
		}

		var streamOnly = hasStream && texture.TextureHeader.SurfaceCount > 1;
		if (streamOnly) {
			numMips = texture.TextureHeader.StreamMips;
		}

		DDSHeader dds = new();
		DX10Header dx10 = new();
		dds.Width = hasStream ? texture.TextureHeader.StreamDimensions.Key : texture.TextureHeader.ResidentDimensions.Key;
		dds.Height = hasStream ? texture.TextureHeader.StreamDimensions.Value : texture.TextureHeader.ResidentDimensions.Value;
		dds.MipMapCount = numMips;
		dx10.Format = texture.TextureHeader.Format;
		dx10.ArraySize = texture.TextureHeader.SurfaceCount;

		var (bitsPerBlock, pixelsPerBlock) = texture.TextureHeader.Format.GetPitchFactor();
		var oneSurface = CalculateSurfaceSize(dds.Width, dds.Height, pixelsPerBlock, bitsPerBlock, numMips, out _);
		dds.Pitch = oneSurface;

		switch (texture.TextureHeader.Layout) {
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
			dx10.ResourceDimension = texture.TextureHeader.Layout switch {
				                         TextureDimension.Texture1D => DXGIResourceDimension.Texture1D,
				                         TextureDimension.Texture2D => DXGIResourceDimension.Texture2D,
				                         TextureDimension.Array => DXGIResourceDimension.Texture2D,
				                         TextureDimension.Texture3D => DXGIResourceDimension.Texture3D,
				                         TextureDimension.Cube => DXGIResourceDimension.Texture2D,
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

	public static Image? ToImage(this Texture texture) {
		var (bitsPerBlock, pixelsPerBlock) = texture.TextureHeader.Format.GetPitchFactor();
		if (bitsPerBlock == 0) {
			return null;
		}

		var (width, height) = texture.Dimensions;
		Image? image = null;
		try {
			var hasStream = texture.StreamBuffer.Memory.Length > 0;
			var numMips = !hasStream ? texture.TextureHeader.Mips - texture.TextureHeader.StreamMips : texture.TextureHeader.StreamMips;

			using var frameBuffer = new RivetMemory<byte>(width * height * (texture.IsHDR ? 16 : 4));

			for (var surface = 0u; surface < Math.Max(1, (int) texture.TextureHeader.SurfaceCount); ++surface) {
				var oneSurface = CalculateSurfaceSize(width, height, pixelsPerBlock, bitsPerBlock, numMips, out var largestMip);
				var chunk = new SharedRivetMemory<byte>(hasStream ? texture.StreamBuffer : texture.ResidentBuffer, (int) (oneSurface * surface), (int) largestMip);

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
						chunk.Memory.Span[..frameBuffer.Memory.Length].CopyTo(frameBuffer.Memory.Span);
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
						chunk.Memory.Span[..frameBuffer.Memory.Length].CopyTo(frameBuffer.Memory.Span);
						break;
					default:
						image?.Dispose();
						return null;
				}

				Image frame = texture.IsHDR ? Image.WrapMemory<RgbaVector>(frameBuffer.Memory, width, height) : Image.WrapMemory<Rgba32>(frameBuffer.Memory, width, height);
				if (image == null) {
					image = frame;
				} else {
					try {
						image.Frames.AddFrame(frame.Frames[0]);
					} finally {
						frame.Dispose();
					}
				}
			}
		} catch {
			image?.Dispose();
			throw;
		}

		return image;
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
		for (var i = 0; i < height; i += 4) {
			for (var j = 0; j < width; j += 4) {
				var outputOffset = ((i * width) + j) * Unsafe.SizeOf<ColorRGB<Half>>();
				BcHelpers.DecompressBc6h(input.Slice(inputOffset, Bc6h.BlockSize), buffer[outputOffset..], width * 3, isSigned);
				inputOffset += Bc6h.BlockSize;
			}
		}

		RgbConverter.Convert<ColorRGB<Half>, Half, ColorRGBA<float>, float>(buffer, width, height, output);
	}

	public static (uint BitsPerBlock, uint PixelsPerBlock) GetPitchFactor(this DXGIFormat format) {
		switch (format) {
			case DXGIFormat.BC1_UNORM:
			case DXGIFormat.BC1_UNORM_SRGB:
			case DXGIFormat.BC2_UNORM:
			case DXGIFormat.BC2_UNORM_SRGB:
				return (64, 16);

			case DXGIFormat.BC3_UNORM:
			case DXGIFormat.BC3_UNORM_SRGB:
				return (16, 16);

			case DXGIFormat.BC4_UNORM:
			case DXGIFormat.BC4_SNORM:
				return (64, 16);

			case DXGIFormat.BC5_UNORM:
			case DXGIFormat.BC5_SNORM:
			case DXGIFormat.BC6H_SF16:
			case DXGIFormat.BC6H_UF16:
			case DXGIFormat.BC7_UNORM:
			case DXGIFormat.BC7_UNORM_SRGB:
				return (128, 16);

			case DXGIFormat.A8_UNORM:
			case DXGIFormat.R8_UNORM:
			case DXGIFormat.R8_SNORM: return (8, 1);

			case DXGIFormat.R8G8_SINT:
			case DXGIFormat.R8G8_UINT:
			case DXGIFormat.R8G8_SNORM:
			case DXGIFormat.R8G8_UNORM:
			case DXGIFormat.R16_SINT:
			case DXGIFormat.R16_UINT:
			case DXGIFormat.R16_FLOAT:
			case DXGIFormat.R16_SNORM:
			case DXGIFormat.R16_UNORM: return (16, 1);

			case DXGIFormat.R8G8B8A8_UNORM:
			case DXGIFormat.R8G8B8A8_UNORM_SRGB:
			case DXGIFormat.R8G8B8A8_SNORM:
			case DXGIFormat.R8G8B8A8_SINT:
			case DXGIFormat.R8G8B8A8_UINT:
			case DXGIFormat.R32_FLOAT:
			case DXGIFormat.R32_SINT:
			case DXGIFormat.R32_UINT:
			case DXGIFormat.R16G16_FLOAT:
			case DXGIFormat.R16G16_UNORM:
			case DXGIFormat.R16G16_UINT:
			case DXGIFormat.R16G16_SNORM:
			case DXGIFormat.R16G16_SINT:
			case DXGIFormat.R10G10B10A2_UNORM:
			case DXGIFormat.R10G10B10A2_UINT:
			case DXGIFormat.B8G8R8A8_UNORM:
			case DXGIFormat.B8G8R8A8_UNORM_SRGB:
			case DXGIFormat.B8G8R8X8_UNORM:
			case DXGIFormat.B8G8R8X8_UNORM_SRGB: return (32, 1);

			case DXGIFormat.R16G16B16A16_FLOAT:
			case DXGIFormat.R16G16B16A16_SINT:
			case DXGIFormat.R16G16B16A16_UINT:
			case DXGIFormat.R16G16B16A16_SNORM:
			case DXGIFormat.R16G16B16A16_UNORM:
			case DXGIFormat.R32G32_FLOAT:
			case DXGIFormat.R32G32_SINT:
			case DXGIFormat.R32G32_UINT: return (64, 1);

			case DXGIFormat.R32G32B32A32_FLOAT: return (128, 1);
			default: return (0, 0);
		}
	}
}

// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using BCDecNet;
using Rivet.Converters.Support;
using Rivet.Graphics;
using Rivet.IO;
using Rivet.Models.Graphics;
using Triton;
using Triton.Pixel;
using Triton.Pixel.Formats;

namespace Rivet.Converters;

public static class TextureConverter {
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
		var outputHDR = allowHDR && texture.IsHDR;
		var isNormal = allowNormalReconstruction && texture.TextureHeader.Flags.ContentType == TextureContentType.Normal; // don't allow channel packed formats

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
				var outputSurface = DecodeSurface(texture, surface, isNormal);
				if (!outputHDR && outputSurface.ColorId.IsHDR) {
					var old = outputSurface;
					try {
						outputSurface = outputSurface.ColorId.IsSigned ? old.Cast<short>() : old.Cast<ushort>();
					} finally {
						old.Dispose();
					}
				}

				frames.Add(outputSurface);
			}

			return frames;
		} catch {
			frames.Dispose();
			throw;
		}
	}

	private static IImageBuffer DecodeSurface(Texture texture, int surface, bool isNormal) {
		var (width, height) = texture.Dimensions;
		var (bitsPerBlock, pixelsPerBlock) = texture.TextureHeader.Format.GetPitchFactor();
		var hasStream = texture.StreamBuffer.Size > 0;
		var numMips = !hasStream ? texture.TextureHeader.Mips - texture.TextureHeader.StreamMips : texture.TextureHeader.StreamMips;
		var oneSurface = CalculateSurfaceSize(width, height, pixelsPerBlock, bitsPerBlock, numMips, out var largestMip);

		var chunk = new SharedRivetMemory<byte>(hasStream ? texture.StreamBuffer : texture.ResidentBuffer, (int) (oneSurface * surface), (int) largestMip);
		var chunkMem = chunk.Memory;
		var chunkSrc = chunkMem.Span;

		if (texture.TextureHeader.Format is >= DXGIFormat.BC1_TYPELESS and <= DXGIFormat.BC5_SNORM or >= DXGIFormat.BC6H_TYPELESS and <= DXGIFormat.BC7_UNORM_SRGB) {
			try {
				var frameBuffer = new RivetMemory<byte>(width * height * 16);
				try {
					var frameBufferMem = frameBuffer.Memory;
					var frameBufferSrc = frameBufferMem.Span;
					switch (texture.TextureHeader.Format) {
						case DXGIFormat.BC1_UNORM:
						case DXGIFormat.BC1_UNORM_SRGB:
							BCDec.DecompressBC1(chunkMem, frameBufferMem, width, height);

							if (isNormal) {
								BCDec.ComputeNormal(frameBufferSrc);
							}

							return new ImageBuffer<ColorRGBA<byte>, byte>(frameBuffer, width, height);
						case DXGIFormat.BC2_UNORM:
						case DXGIFormat.BC2_UNORM_SRGB:
							BCDec.DecompressBC2(chunkMem, frameBufferMem, width, height);

							if (isNormal) {
								BCDec.ComputeNormal(frameBufferSrc);
							}

							return new ImageBuffer<ColorRGBA<byte>, byte>(frameBuffer, width, height);
						case DXGIFormat.BC3_UNORM:
						case DXGIFormat.BC3_UNORM_SRGB:
							BCDec.DecompressBC3(chunkMem, frameBufferMem, width, height);

							if (isNormal) {
								BCDec.ComputeNormal(frameBufferSrc);
							}

							return new ImageBuffer<ColorRGBA<byte>, byte>(frameBuffer, width, height);
						case DXGIFormat.BC4_UNORM:
						case DXGIFormat.BC4_SNORM:
							BCDec.DecompressBC4(chunkMem, frameBufferMem, width, height, texture.TextureHeader.Format == DXGIFormat.BC4_SNORM);
							return new ImageBuffer<ColorR<byte>, byte>(frameBuffer, width, height);
						case DXGIFormat.BC5_SNORM when isNormal:
							BCDec.DecompressBC5Normal(chunkMem, frameBufferMem, width, height, true);
							return new ImageBuffer<ColorRGB<sbyte>, sbyte>(frameBuffer, width, height);
						case DXGIFormat.BC5_UNORM when isNormal:
							BCDec.DecompressBC5Normal(chunkMem, frameBufferMem, width, height, false);
							return new ImageBuffer<ColorRGB<byte>, byte>(frameBuffer, width, height);
						case DXGIFormat.BC5_SNORM:
							BCDec.DecompressBC5(chunkMem, frameBufferMem, width, height, true);
							return new ImageBuffer<ColorRG<sbyte>, sbyte>(frameBuffer, width, height);
						case DXGIFormat.BC5_UNORM:
							BCDec.DecompressBC5(chunkMem, frameBufferMem, width, height, false);
							return new ImageBuffer<ColorRG<sbyte>, sbyte>(frameBuffer, width, height);
						case DXGIFormat.BC6H_SF16:
						case DXGIFormat.BC6H_UF16: {
							var isSigned = texture.TextureHeader.Format == DXGIFormat.BC6H_SF16;
							BCDec.DecompressBC6HFloat(chunkMem, frameBufferMem, width, height, isSigned);

							if (isNormal) {
								BCDec.ComputeNormal(MemoryMarshal.Cast<byte, float>(frameBufferSrc), 3);
							}

							return new ImageBuffer<ColorRGB<float>, float>(frameBuffer, width, height, isSigned);
						}
						case DXGIFormat.BC7_UNORM:
						case DXGIFormat.BC7_UNORM_SRGB:
							BCDec.DecompressBC7(chunkMem, frameBufferMem, width, height);

							if (isNormal) {
								BCDec.ComputeNormal(frameBufferSrc);
							}

							return new ImageBuffer<ColorRGBA<byte>, byte>(frameBuffer, width, height);
					}
				} catch {
					frameBuffer.Dispose();
					throw;
				}

				frameBuffer.Dispose();
				throw new UnreachableException();
			} finally {
				chunk.Dispose();
			}
		}

		switch (texture.TextureHeader.Format) {
			case DXGIFormat.A8_UNORM:
			case DXGIFormat.R8_UNORM:
			case DXGIFormat.R8_SNORM:
				return new ImageBuffer<ColorR<byte>, byte>(chunk, width, height);
			case DXGIFormat.R8G8_SINT:
			case DXGIFormat.R8G8_SNORM:
				return new ImageBuffer<ColorRG<sbyte>, sbyte>(chunk, width, height);
			case DXGIFormat.R8G8_UNORM:
			case DXGIFormat.R8G8_UINT:
				return new ImageBuffer<ColorRG<byte>, byte>(chunk, width, height);
			case DXGIFormat.R16_SINT:
			case DXGIFormat.R16_SNORM:
				return new ImageBuffer<ColorR<short>, short>(chunk, width, height);
			case DXGIFormat.R16_UINT:
			case DXGIFormat.R16_UNORM:
				return new ImageBuffer<ColorR<ushort>, ushort>(chunk, width, height);
			case DXGIFormat.R16_FLOAT:
				return new ImageBuffer<ColorR<Half>, Half>(chunk, width, height);
			case DXGIFormat.R8G8B8A8_UNORM:
			case DXGIFormat.R8G8B8A8_UNORM_SRGB:
			case DXGIFormat.R8G8B8A8_UINT:
				return new ImageBuffer<ColorRGBA<byte>, byte>(chunk, width, height);
			case DXGIFormat.R8G8B8A8_SNORM:
			case DXGIFormat.R8G8B8A8_SINT:
				return new ImageBuffer<ColorRGBA<sbyte>, sbyte>(chunk, width, height);
			case DXGIFormat.R32_FLOAT:
				return new ImageBuffer<ColorR<float>, float>(chunk, width, height);
			case DXGIFormat.R32_SINT:
				return new ImageBuffer<ColorR<int>, int>(chunk, width, height);
			case DXGIFormat.R32_UINT:
				return new ImageBuffer<ColorR<uint>, uint>(chunk, width, height);
			case DXGIFormat.R16G16_FLOAT:
				return new ImageBuffer<ColorRG<Half>, Half>(chunk, width, height);
			case DXGIFormat.R16G16_UNORM:
			case DXGIFormat.R16G16_UINT:
				return new ImageBuffer<ColorRG<ushort>, ushort>(chunk, width, height);
			case DXGIFormat.R16G16_SNORM:
			case DXGIFormat.R16G16_SINT:
				return new ImageBuffer<ColorRG<short>, short>(chunk, width, height);
			case DXGIFormat.R10G10B10A2_UNORM:
			case DXGIFormat.R10G10B10A2_UINT:
				try {
					var frameBuffer = new RivetMemory<byte>(width * height * 8);
					RgbConverter.Convert<ColorR10G10B10A2, ushort, ColorRGBA<ushort>, ushort>(chunkSrc, width, height, frameBuffer.Memory.Span);
					return new ImageBuffer<ColorRG<ushort>, ushort>(frameBuffer, width, height);
				} finally {
					chunk.Dispose();
				}
			case DXGIFormat.B8G8R8A8_UNORM:
			case DXGIFormat.B8G8R8A8_UNORM_SRGB:
			case DXGIFormat.B8G8R8X8_UNORM:
			case DXGIFormat.B8G8R8X8_UNORM_SRGB:
				try {
					var frameBuffer = new RivetMemory<byte>(width * height * 4);
					RgbConverter.Convert<ColorBGRA32, byte, ColorRGBA<byte>, byte>(chunkSrc, width, height, frameBuffer.Memory.Span);
					return new ImageBuffer<ColorRGBA<byte>, byte>(frameBuffer, width, height);
				} finally {
					chunk.Dispose();
				}
			case DXGIFormat.R16G16B16A16_FLOAT:
				return new ImageBuffer<ColorRGBA<Half>, Half>(chunk, width, height);
			case DXGIFormat.R16G16B16A16_SINT:
			case DXGIFormat.R16G16B16A16_SNORM:
				return new ImageBuffer<ColorRGBA<short>, short>(chunk, width, height);
			case DXGIFormat.R16G16B16A16_UINT:
			case DXGIFormat.R16G16B16A16_UNORM:
				return new ImageBuffer<ColorRGBA<ushort>, ushort>(chunk, width, height);
			case DXGIFormat.R32G32_FLOAT:
				return new ImageBuffer<ColorRG<float>, float>(chunk, width, height);
			case DXGIFormat.R32G32_SINT:
				return new ImageBuffer<ColorRG<int>, int>(chunk, width, height);
			case DXGIFormat.R32G32_UINT:
				return new ImageBuffer<ColorRG<uint>, uint>(chunk, width, height);
			case DXGIFormat.R32G32B32A32_FLOAT:
				return new ImageBuffer<ColorRGBA<float>, float>(chunk, width, height);
			default:
				throw new NotSupportedException();
		}
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

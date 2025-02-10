// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Graphics;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct TextureHeader {
	public int ResidentSize { get; set; }
	public int StreamSize { get; set; }
	public PackedPair<ushort, ushort> StreamDimensions { get; set; }
	public PackedPair<ushort, ushort> ResidentDimensions { get; set; }
	public ushort SurfaceCount { get; set; }
	public TextureFlags Flags { get; set; }
	public DXGIFormat Format { get; set; }
	public float Bias { get; set; }
	public TextureFilter Filter { get; set; }
	public ushort Mips { get; set; }
	public byte StreamMips { get; set; }
	public TextureWrapMode WrapU { get; set; }
	public TextureWrapMode WrapV { get; set; }
	public TextureWrapMode WrapW { get; set; }
}

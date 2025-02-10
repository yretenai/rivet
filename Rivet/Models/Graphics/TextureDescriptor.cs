// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Graphics;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct TextureDescriptor {
	public DXGIResourceDimension Dimension { get; set; }
	public uint Padding { get; set; }
	public uint Alignment { get; set; }
	public uint Padding2 { get; set; }
	public uint Width { get; set; }
	public uint Padding3 { get; set; }
	public uint Height { get; set; }
	public uint Surfaces { get; set; }
	public ushort Mips { get; set; }
	public ushort Unknown1 { get; set; }
	public DXGIFormat Format { get; set; }
	public uint Tile { get; set; }
	public uint Padding4 { get; set; }
	public ulong Flags { get; set; }
}

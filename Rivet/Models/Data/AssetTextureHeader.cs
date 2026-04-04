// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;
using Rivet.Models.Graphics;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct AssetTextureHeader {
	public TextureDescriptor Descriptor { get; set; }
	public uint ResidentSize { get; set; }
	public uint StreamSize { get; set; }
	public byte StreamedMips { get; set; }
	public byte ResidentMips { get; set; }
	public ushort Reserved { get; set; }
	public uint Reserved2 { get; set; }
}

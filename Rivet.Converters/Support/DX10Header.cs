// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.Models.Graphics;

namespace Rivet.Converters.Support;

public record struct DX10Header() {
	public DXGIFormat Format { get; set; }
	public DXGIResourceDimension ResourceDimension { get; set; } = DXGIResourceDimension.Texture2D;
	public DX10Flags Flags { get; set; }
	public uint ArraySize { get; set; }
	public DX10AlphaMode AlphaMode { get; set; }
}

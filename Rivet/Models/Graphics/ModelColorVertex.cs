// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Numerics;
using System.Runtime.InteropServices;

namespace Rivet.Models.Graphics;

[StructLayout(LayoutKind.Sequential, Pack = 1, Size = 4)]
public readonly record struct ModelColorVertex {
	public Array4 Color { get; init; }

	public void Decode(ref ModelVertex vertex) {
		vertex.Color = new Vector4(Color[0], Color[1], Color[2], Color[3]) * ModelStdVertex.OneOver255;
	}
}

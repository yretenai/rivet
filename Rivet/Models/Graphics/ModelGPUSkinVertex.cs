// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Graphics;

[StructLayout(LayoutKind.Sequential, Pack = 1, Size = 8)]
public readonly record struct ModelGPUSkinVertex {
	public Array4 Index { get; init; }
	public Array4 Weight { get; init; }

	public void Decode(ref ModelVertex vertex) {
		var index = vertex.BoneIndices;
		var weight = vertex.BoneWeights;
		for (var i = 0; i < 4; ++i) {
			index[i] = Index[i];
			weight[i] = Weight[i + 1] * ModelStdVertex.OneOver255;
		}

		vertex.BoneIndices = index;
		vertex.BoneWeights = weight;
	}
}

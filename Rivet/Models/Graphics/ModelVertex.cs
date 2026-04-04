// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Numerics;

namespace Rivet.Models.Graphics;

public record struct ModelVertex {
	public Vector3 Position { get; set; }
	public float Extent { get; set; }
	public Vector3 Normal { get; set; }
	public Vector4 Tangent { get; set; }
	public Vector2 UV0 { get; set; }
	public Vector2 UV1 { get; set; }
	public Vector4 Color { get; set; }
	public Vector4Int BoneIndices { get; set; }
	public Vector4 BoneWeights { get; set; }

	public readonly ModelStdVertex Encode(Vector3 modelScale, float vertexScale, uint packedScale) => throw new NotImplementedException();

	public void FlipUV() {
		UV0 = UV0 with {
			Y = UV0.Y * -1,
		};

		UV1 = UV1 with {
			Y = UV1.Y * -1,
		};
	}
}

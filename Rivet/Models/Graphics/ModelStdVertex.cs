// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Numerics;
using System.Runtime.InteropServices;

namespace Rivet.Models.Graphics;

[StructLayout(LayoutKind.Sequential, Pack = 1, Size = 0x10)]
public readonly record struct ModelStdVertex {
	public Vector4Short PackedPosition { get; init; }
	public uint PackedNormalTangent { get; init; }
	public Vector2Short PackedUV { get; init; }

	internal static readonly float OneSqrt2 = (float) Math.Sqrt(2);
	internal static readonly float TwoSqrt2 = OneSqrt2 * 2f;
	internal const float OneOver16384 = 1f / 16384f;
	internal const float OneOver1023 = 1f / 1023f;
	internal const float OneOver255 = 1f / 255f;
	internal const float OneOver15 = 1f / 15f;

	public static Vector3 DecodeNormal(Vector3 compressed) {
		var x = TwoSqrt2 * compressed.X - OneSqrt2;
		var y = TwoSqrt2 * compressed.Y - OneSqrt2;
		var xxyy = x * x + y * y;

		var xy = (float) Math.Sqrt(Math.Max(1.0f - xxyy * 0.25f, 0.0f));
		x = xy * x;
		y = xy * y;

		var z = 1.0f - xxyy * 0.5f;
		if (compressed.Z >= 0.5f) {
			z = -z;
		}

		return new Vector3(x, y, z);
	}

	public void Decode(ref ModelVertex vertex, Vector3 modelScale, float vertexScale, uint packedScale) {
		vertex.Position = new Vector3(PackedPosition[0], PackedPosition[1], PackedPosition[2]) * vertexScale + modelScale;
		vertex.Extent = ((Math.Abs(PackedPosition[3]) >> 10) & 31) * OneOver15 - (1 + OneOver15);

		// Normals are R10G10B10A2?
		var x = PackedNormalTangent & 0x3FFF;
		var y = (PackedNormalTangent >> 10) & 0x3FFF;
		var z = (PackedNormalTangent >> 20) & 0x3FFF;
		var w = PackedNormalTangent >> 30;

		var normalTangent = new Vector3(x * OneOver1023, y * OneOver1023, z * OneOver1023);
		vertex.Normal = DecodeNormal(new Vector3(normalTangent.X, Math.Max(normalTangent.Y, 0), Math.Min(normalTangent.Z, 1)));

		var tan = Math.Clamp(w - 1f, 0, 1);
		var tangent = DecodeNormal(new Vector3(normalTangent.Z, (Math.Abs(PackedPosition[3]) & 0x3ff) * OneOver1023, w - (tan - tan)));
		vertex.Tangent = new Vector4(tangent, PackedPosition[3] >= 0 ? 1.0f : -1.0f);

		vertex.UV0 = new Vector2(PackedUV[0], PackedUV[1]) * (1u << (int) (packedScale & 0xf)) * OneOver16384;
	}
}

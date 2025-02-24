using System.Numerics;
using System.Runtime.InteropServices;

namespace Rivet.Models.Graphics;

[StructLayout(LayoutKind.Sequential, Pack = 1, Size = 4)]
public readonly record struct ModelUV1Vertex {
	public Vector2Short PackedUV { get; init; }

	public void Decode(ref ModelVertex vertex, uint packedScale) {
		vertex.UV1 = new Vector2(PackedUV[0], PackedUV[1]) * (1u << (int) (packedScale & 0xf)) * ModelStdVertex.OneOver16384;
	}
}

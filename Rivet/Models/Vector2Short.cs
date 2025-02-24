using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace Rivet.Models;

[InlineArray(2)]
public struct Vector2Short : IEquatable<Vector2Short> {
	public short Value;

	public bool Equals(Vector2Short other) => ((Span<short>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is Vector2Short other && Equals(other);
	public static bool operator ==(Vector2Short left, Vector2Short right) => left.Equals(right);
	public static bool operator !=(Vector2Short left, Vector2Short right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes(MemoryMarshal.AsBytes((Span<short>) this));
		return hashCode.ToHashCode();
	}
}

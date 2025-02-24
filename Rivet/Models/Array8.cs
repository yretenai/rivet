using System.Runtime.CompilerServices;

namespace Rivet.Models;

[InlineArray(8)]
public struct Array8 : IEquatable<Array8> {
	public byte Value;

	public bool Equals(Array8 other) => ((Span<byte>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is Array8 other && Equals(other);
	public static bool operator ==(Array8 left, Array8 right) => left.Equals(right);
	public static bool operator !=(Array8 left, Array8 right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes((Span<byte>) this);
		return hashCode.ToHashCode();
	}
}

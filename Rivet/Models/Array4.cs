using System.Runtime.CompilerServices;

namespace Rivet.Models;

[InlineArray(4)]
public struct Array4 : IEquatable<Array4> {
	public byte Value;

	public bool Equals(Array4 other) => ((Span<byte>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is Array4 other && Equals(other);
	public static bool operator ==(Array4 left, Array4 right) => left.Equals(right);
	public static bool operator !=(Array4 left, Array4 right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes((Span<byte>) this);
		return hashCode.ToHashCode();
	}
}

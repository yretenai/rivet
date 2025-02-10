// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace Rivet.Models;

[InlineArray(4)]
public struct Int4Array : IEquatable<Int4Array> {
	public int Value;

	public bool Equals(Int4Array other) => ((Span<int>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is Int4Array other && Equals(other);
	public static bool operator ==(Int4Array left, Int4Array right) => left.Equals(right);
	public static bool operator !=(Int4Array left, Int4Array right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes(MemoryMarshal.AsBytes((Span<int>) this));
		return hashCode.ToHashCode();
	}
}

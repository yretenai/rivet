// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;

namespace Rivet.Models;

[InlineArray(0x10)]
public struct Array16 : IEquatable<Array16> {
	public byte Value;

	public bool Equals(Array16 other) => ((Span<byte>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is Array16 other && Equals(other);
	public static bool operator ==(Array16 left, Array16 right) => left.Equals(right);
	public static bool operator !=(Array16 left, Array16 right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes(this);
		return hashCode.ToHashCode();
	}
}

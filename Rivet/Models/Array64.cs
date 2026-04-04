// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;

namespace Rivet.Models;

[InlineArray(0x40)]
public struct Array64 : IEquatable<Array64> {
	public byte Value;

	public bool Equals(Array64 other) => ((Span<byte>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is Array64 other && Equals(other);
	public static bool operator ==(Array64 left, Array64 right) => left.Equals(right);
	public static bool operator !=(Array64 left, Array64 right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes(this);
		return hashCode.ToHashCode();
	}
}

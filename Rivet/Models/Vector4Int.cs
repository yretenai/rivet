// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace Rivet.Models;

[InlineArray(4)]
public struct Vector4Int : IEquatable<Vector4Int> {
	public int Value;

	public bool Equals(Vector4Int other) => ((Span<int>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is Vector4Int other && Equals(other);
	public static bool operator ==(Vector4Int left, Vector4Int right) => left.Equals(right);
	public static bool operator !=(Vector4Int left, Vector4Int right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes(MemoryMarshal.AsBytes((Span<int>) this));
		return hashCode.ToHashCode();
	}
}

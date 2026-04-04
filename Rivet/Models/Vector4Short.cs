// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace Rivet.Models;

[InlineArray(4)]
public struct Vector4Short : IEquatable<Vector4Short> {
	public short Value;

	public bool Equals(Vector4Short other) => ((Span<short>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is Vector4Short other && Equals(other);
	public static bool operator ==(Vector4Short left, Vector4Short right) => left.Equals(right);
	public static bool operator !=(Vector4Short left, Vector4Short right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes(MemoryMarshal.AsBytes((Span<short>) this));
		return hashCode.ToHashCode();
	}
}

// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[InlineArray(4)]
public struct AssetSizes : IEquatable<AssetSizes> {
	public int Value;

	public bool Equals(AssetSizes other) => ((Span<int>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is AssetSizes other && Equals(other);
	public static bool operator ==(AssetSizes left, AssetSizes right) => left.Equals(right);
	public static bool operator !=(AssetSizes left, AssetSizes right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes(MemoryMarshal.AsBytes((Span<int>) this));
		return hashCode.ToHashCode();
	}

	public override string ToString() => $"[ {this[0]}, {this[1]}, {this[2]}, {this[3]} ]";
}

// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;

namespace Rivet.Models;

[InlineArray(0x40)]
public struct Byte64Array : IEquatable<Byte64Array> {
	public byte Value;

	public bool Equals(Byte64Array other) => ((Span<byte>) this).SequenceEqual(other);
	public override bool Equals(object? obj) => obj is Byte64Array other && Equals(other);
	public static bool operator ==(Byte64Array left, Byte64Array right) => left.Equals(right);
	public static bool operator !=(Byte64Array left, Byte64Array right) => !(left == right);

	public override int GetHashCode() {
		var hashCode = new HashCode();
		hashCode.AddBytes(this);
		return hashCode.ToHashCode();
	}
}

// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using DragonLib;

namespace Rivet.IO;

public sealed record SharedRivetMemory<T>(IUnsafeMemoryOwner<T> UnderlyingOwner, int Offset, int Size) : IUnsafeMemoryOwner<T> where T : struct {
	public SharedRivetMemory(IUnsafeMemoryOwner<T> underlyingOwner, int offset) : this(underlyingOwner, offset, underlyingOwner.Size - offset) { }
	public int Offset { get; set; } = Offset;
	public int Size { get; set; } = Size;

	public Memory<T> Memory => Size > 0 ? UnderlyingOwner.Memory.Slice(Offset, Size) : Memory<T>.Empty;

	public IUnsafeMemoryOwner<T> Shift(int offset) {
		if (Offset + offset < 0 || offset > Size) {
			throw new IndexOutOfRangeException();
		}

		Offset += offset;
		Size -= offset;

		return this;
	}

	public IUnsafeMemoryOwner<T> Shift<TShift>() => Shift(Unsafe.SizeOf<TShift>());

	public override string ToString() => $"SharedRivetMemory of {(Size * Unsafe.SizeOf<T>()).GetHumanReadableBytes()}";

	public void Dispose() {
		// note: maybe implement ref counting?
	}
}

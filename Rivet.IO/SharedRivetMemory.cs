// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using DragonLib;

namespace Rivet.IO;

public record struct SharedRivetMemory<T>(IUnsafeMemoryOwner<T> UnderlyingOwner, int Offset, int Size) : IUnsafeMemoryOwner<T> where T : struct {
	public SharedRivetMemory(IUnsafeMemoryOwner<T> underlyingOwner, int offset) : this(underlyingOwner, offset, underlyingOwner.Memory.Length - offset) { }

	public readonly Memory<T> Memory => Size > 0 ? UnderlyingOwner.Memory.Slice(Offset, Size) : Memory<T>.Empty;

	public IUnsafeMemoryOwner<T> Shift(int offset) {
		if (offset < 0 || offset > Size) {
			throw new IndexOutOfRangeException();
		}

		Offset += offset;
		Size -= offset;

		return this;
	}

	public IUnsafeMemoryOwner<T> Shift<TShift>() => Shift(Unsafe.SizeOf<TShift>());

	public readonly override string ToString() => $"SharedRivetMemory of {(Size * Unsafe.SizeOf<T>()).GetHumanReadableBytes()}";
}

// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using DragonLib;

namespace Rivet.IO;

public sealed record TypedRivetMemory<T>(IUnsafeMemoryOwner<byte> UnderlyingOwner, int RealOffset, int Size) : IUnsafeMemoryOwner<T>, IDisposable where T : struct {
	public TypedRivetMemory(IUnsafeMemoryOwner<byte> underlyingOwner, int offset) : this(underlyingOwner, offset, underlyingOwner.Memory.Length - offset) { }

	public MemoryTypeManager<T, byte>? Manager { get; private set; } = new(UnderlyingOwner.Memory.Slice(RealOffset, Size * Unsafe.SizeOf<T>()));
	public int Offset { get; set; }
	public int RealOffset { get; set; } = RealOffset;
	public int Size { get; set; } = Size;

	public void Dispose() {
		Dispose(true);
		GC.SuppressFinalize(this);
	}

	public Memory<T> Memory => Size <= 0 ? Memory<T>.Empty : Manager!.Memory;

	public IUnsafeMemoryOwner<T> Shift(int offset) {
		if (Offset + offset < 0 || offset > Size) {
			throw new IndexOutOfRangeException();
		}

		Offset += offset;
		RealOffset += Unsafe.SizeOf<T>() * offset;
		Size -= offset;

		((IDisposable) Manager!).Dispose();
		Manager = new MemoryTypeManager<T, byte>(UnderlyingOwner.Memory.Slice(RealOffset, Size * Unsafe.SizeOf<T>()));

		return this;
	}

	public IUnsafeMemoryOwner<T> Shift<TShift>() => Shift(Unsafe.SizeOf<TShift>());
	~TypedRivetMemory() => Dispose(false);

	public override string ToString() => $"TypedRivetMemory<{typeof(T).Name}> of {(Size * Unsafe.SizeOf<T>()).GetHumanReadableBytes()}";

	private void Dispose(bool disposing) {
		(Manager as IDisposable)?.Dispose();
		Manager = null;
	}
}

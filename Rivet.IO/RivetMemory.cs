// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MIT

using System.Buffers;
using System.Runtime.CompilerServices;
using DragonLib;

namespace Rivet.IO;

public record struct RivetMemory<T>(int Size) : IUnsafeMemoryOwner<T>, IMemoryOwner<T> where T : struct {
	public RivetMemory(FileInfo info) : this((int) info.Length) {
		using var stream = new FileStream(info.FullName, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
		stream.ReadExactly(Memory.Span.AsBytes());
	}

	public IMemoryOwner<T> UnderlyingOwner { get; } = MemoryPool<T>.Shared.Rent(Size);
	public int Offset { get; set; } = 0;
	public void Dispose() => UnderlyingOwner?.Dispose();
	public readonly Memory<T> Memory => UnderlyingOwner.Memory.Slice(Offset, Size - Offset);

	public IUnsafeMemoryOwner<T> Shift(int offset) {
		if (Offset + offset < 0 || Offset + offset > Size) {
			throw new IndexOutOfRangeException();
		}

		Offset += offset;

		return this;
	}

	public IUnsafeMemoryOwner<T> Shift<TShift>() => Shift(Unsafe.SizeOf<TShift>());
	public readonly override string ToString() => $"RivetMemory of {(Size * Unsafe.SizeOf<T>()).GetHumanReadableBytes()}";
}

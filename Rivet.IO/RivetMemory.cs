// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Buffers;
using System.Runtime.CompilerServices;
using DragonLib;

namespace Rivet.IO;

public sealed record RivetMemory<T>(int Size) : IUnsafeMemoryOwner<T>, IMemoryOwner<T> where T : struct {
	public RivetMemory(FileInfo info) : this((int) info.Length) {
		using var stream = new FileStream(info.FullName, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
		stream.ReadExactly(Memory.Span.AsBytes());
	}

	public RivetMemory(Stream stream) : this((int) (stream.Length - stream.Position)) => stream.ReadExactly(Memory.Span.AsBytes());
	public RivetMemory(Stream stream, int length) : this(length) => stream.ReadExactly(Memory.Span.AsBytes());

	public IMemoryOwner<T>? UnderlyingOwner { get; private set; } = MemoryPool<T>.Shared.Rent(Size);
	public int Offset { get; set; }

	public void Dispose() {
		Dispose(true);
		GC.SuppressFinalize(this);
	}

	public Memory<T> Memory => UnderlyingOwner!.Memory.Slice(Offset, Size - Offset);

	public IUnsafeMemoryOwner<T> Shift(int offset) {
		if (Offset + offset < 0 || Offset + offset > Size) {
			throw new IndexOutOfRangeException();
		}

		Offset += offset;

		return this;
	}

	public IUnsafeMemoryOwner<T> Shift<TShift>() => Shift(Unsafe.SizeOf<TShift>());

	~RivetMemory() => Dispose(false);

	private void Dispose(bool disposing) {
		UnderlyingOwner?.Dispose();
		UnderlyingOwner = null;
	}

	public override string ToString() => $"RivetMemory of {(Size * Unsafe.SizeOf<T>()).GetHumanReadableBytes()}";
}

// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Buffers;
using System.Runtime.CompilerServices;
using DragonLib;

namespace Rivet.IO;

public readonly record struct RivetMemory<T>(int Size) : IUnsafeMemoryOwner<T>, IMemoryOwner<T> where T : struct {
	public RivetMemory(FileInfo info) : this((int) info.Length) {
		using var stream = new FileStream(info.FullName, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
		stream.ReadExactly(Memory.Span.AsBytes());
	}

	public IMemoryOwner<T> UnderlyingOwner { get; } = MemoryPool<T>.Shared.Rent(Size);
	public void Dispose() => UnderlyingOwner?.Dispose();
	public Memory<T> Memory => UnderlyingOwner.Memory[..Size];
	public override string ToString() => $"RivetMemory of {(Size * Unsafe.SizeOf<T>()).GetHumanReadableBytes()}";
}

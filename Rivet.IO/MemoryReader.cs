// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;

namespace Rivet.IO;

public class MemoryReader(IUnsafeMemoryOwner<byte> buffer) {
	public IUnsafeMemoryOwner<byte> Buffer { get; } = buffer;
	public int Offset { get; set; }
	public int Unconsumed => Buffer.Memory.Length - Offset;

	public T Peek<T>() where T : struct => MemoryMarshal.Read<T>(Buffer.Memory[Offset..].Span);

	public ReadOnlySpan<T> Peek<T>(int count) where T : struct => count == 0 ? ReadOnlySpan<T>.Empty : MemoryMarshal.Cast<byte, T>(Buffer.Memory.Slice(Offset, Unsafe.SizeOf<T>() * count).Span);

	public T Get<T>() where T : struct {
		var value = Peek<T>();
		Offset += Unsafe.SizeOf<T>();
		return value;
	}

	public ReadOnlySpan<T> Get<T>(int count) where T : struct {
		if (count == 0) {
			return ReadOnlySpan<T>.Empty;
		}

		var value = Peek<T>(count);
		Offset += Unsafe.SizeOf<T>() * count;
		return value;
	}

	public IUnsafeMemoryOwner<T> Slice<T>(int count) where T : struct {
		var value = Slice<T>(Offset, count);
		Offset += Unsafe.SizeOf<T>() * count;
		return value;
	}

	public IUnsafeMemoryOwner<T> Slice<T>(int offset, int count) where T : struct => count == 0 ? IUnsafeMemoryOwner<T>.Empty : new TypedRivetMemory<T>(Buffer, offset, count);

	public IUnsafeMemoryOwner<byte> Slice(int count) {
		var slice = Slice(Offset, count);
		Offset += count;
		return slice;
	}

	public IUnsafeMemoryOwner<byte> Slice(int offset, int count) => count == 0 ? IUnsafeMemoryOwner<byte>.Empty : new SharedRivetMemory<byte>(Buffer, offset, count);

	public string GetCString() {
		var span = Buffer.Memory[Offset..].Span;
		var index = span.IndexOf((byte) 0);
		if (index == -1) {
			return string.Empty;
		}

		Offset += index;
		return Encoding.UTF8.GetString(span[..index]);
	}

	public void Align(int n) => Offset = unchecked(Offset + (n - 1)) & ~(n - 1);
}

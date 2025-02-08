using System.Runtime.CompilerServices;
using DragonLib;

namespace Rivet.IO;

public record struct TypedRivetMemory<T>(IUnsafeMemoryOwner<byte> UnderlyingOwner, int RealOffset, int Size) : IUnsafeMemoryOwner<T>
	where T : struct {
	public TypedRivetMemory(IUnsafeMemoryOwner<byte> underlyingOwner, int offset) : this(underlyingOwner, offset, underlyingOwner.Memory.Length - offset) { }

	public MemoryTypeManager<T, byte>? Manager { get; private set; } = new(UnderlyingOwner.Memory.Slice(RealOffset, Size * Unsafe.SizeOf<T>()));
	public readonly Memory<T> Memory => Size <= 0 ? Memory<T>.Empty : Manager!.Memory;
	public int Offset { get; set; } = 0;

	public IUnsafeMemoryOwner<T> Shift(int offset) {
		if (Offset + offset < 0 || Offset + offset > Size) {
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

	public readonly override string ToString() => $"TypedRivetMemory<{typeof(T).Name}> of {(Size * Unsafe.SizeOf<T>()).GetHumanReadableBytes()}";

	public void Dispose() {
		(Manager as IDisposable)?.Dispose();
		Manager = null;
	}
}

using System.Runtime.CompilerServices;
using DragonLib;

namespace Rivet.IO;

public record struct TypedRivetMemory<T>(IUnsafeMemoryOwner<byte> UnderlyingOwner, int Offset, int Size) : IUnsafeMemoryOwner<T>
	where T : struct {
	public TypedRivetMemory(IUnsafeMemoryOwner<byte> underlyingOwner, int offset) : this(underlyingOwner, offset, underlyingOwner.Memory.Length - offset) { }

	public MemoryTypeManager<T, byte>? Manager { get; private set; } = new(UnderlyingOwner.Memory.Slice(Offset, Size * Unsafe.SizeOf<T>()));
	public readonly Memory<T> Memory => Size <= 0 ? Memory<T>.Empty : Manager!.Memory;

	public IUnsafeMemoryOwner<T> Shift(int offset) {
		if (offset < 0 || offset > Size) {
			throw new IndexOutOfRangeException();
		}

		Offset += offset * Unsafe.SizeOf<T>();
		Size -= offset;

		return this;
	}

	public IUnsafeMemoryOwner<T> Shift<TShift>() => Shift(Unsafe.SizeOf<TShift>());

	public readonly override string ToString() => $"TypedRivetMemory<{typeof(T).Name}> of {(Size * Unsafe.SizeOf<T>()).GetHumanReadableBytes()}";

	public void Dispose() {
		(Manager as IDisposable)?.Dispose();
		Manager = null;
	}
}

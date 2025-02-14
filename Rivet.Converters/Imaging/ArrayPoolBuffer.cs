using System.Buffers;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace Rivet.Converters.Imaging;

public sealed class ArrayPoolBuffer<T>(T[] array, int length) : MemoryManager<T> where T : struct {
	public ArrayPoolBuffer(T[] array) : this(array, array.Length) { }
	public ArrayPoolBuffer(int length) : this(ArrayPool<T>.Shared.Rent(length), length) { }

	public T[] Array { get; private set; } = array;

	private GCHandle Handle { get; set; }

	public int Length { get; private set; } = length;

	public override Span<T> GetSpan() => Array.AsSpan(0, Length);

	protected override void Dispose(bool disposing) {
		if (Array.Length > 0) {
			ArrayPool<T>.Shared.Return(Array);
		}

		Array = [];
		Length = 0;
	}

	public override unsafe MemoryHandle Pin(int elementIndex = 0) {
		if (!Handle.IsAllocated) {
			Handle = GCHandle.Alloc(Array, GCHandleType.Pinned);
		}

		var ptr = Unsafe.Add<T>((void*) Handle.AddrOfPinnedObject(), elementIndex);

		return new MemoryHandle(ptr, pinnable: this);
	}

	public override void Unpin() {
		if (Handle.IsAllocated) {
			Handle.Free();
		}
	}
}

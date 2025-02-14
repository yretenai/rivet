using System.Buffers;
using SixLabors.ImageSharp.Memory;

namespace Rivet.Converters.Imaging;

public class ArrayPoolAllocator : MemoryAllocator {

	protected override int GetBufferCapacityInBytes() => int.MaxValue;

	public override IMemoryOwner<T> Allocate<T>(int length, AllocationOptions options = AllocationOptions.None) {
		var buffer = new ArrayPoolBuffer<T>(length);

		if ((options & AllocationOptions.Clean) != 0) {
			buffer.GetSpan().Clear();
		}

		return buffer;
	}
}

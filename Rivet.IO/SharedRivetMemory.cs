using System.Runtime.CompilerServices;
using DragonLib;

namespace Rivet.IO;

public readonly record struct SharedRivetMemory<T>(IUnsafeMemoryOwner<T> UnderlyingOwner, int Offset, int Size) : IUnsafeMemoryOwner<T> where T : struct {
	public Memory<T> Memory => Size > 0 ? UnderlyingOwner.Memory.Slice(Offset, Size) : Memory<T>.Empty;
	public override string ToString() => $"SharedRivetMemory of {(Size * Unsafe.SizeOf<T>()).GetHumanReadableBytes()}";
	public void Dispose() { }
}

namespace Rivet.IO;

public interface IUnsafeMemoryOwner<T> where T : struct {
	Memory<T> Memory { get; }

	static IUnsafeMemoryOwner<T> Empty { get; } = new ZeroOwner<T>();
}

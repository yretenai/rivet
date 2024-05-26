// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MIT

namespace Rivet.IO;

public interface IUnsafeMemoryOwner<T> where T : struct {
	Memory<T> Memory { get; }

	static IUnsafeMemoryOwner<T> Empty { get; } = new ZeroOwner<T>();
	public IUnsafeMemoryOwner<T> Shift(int offset);

	public IUnsafeMemoryOwner<T> Shift<TShift>();
}

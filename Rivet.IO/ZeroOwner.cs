// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MIT

namespace Rivet.IO;

public readonly record struct ZeroOwner<T> : IUnsafeMemoryOwner<T> where T : struct {
	public Memory<T> Memory => Memory<T>.Empty;

	public IUnsafeMemoryOwner<T> Shift(int offset) => this;

	public IUnsafeMemoryOwner<T> Shift<TShift>() => this;
}

// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.IO;

public sealed record ZeroOwner<T> : IUnsafeMemoryOwner<T> where T : struct {
	public Memory<T> Memory => Memory<T>.Empty;

	public IUnsafeMemoryOwner<T> Shift(int offset) => this;

	public IUnsafeMemoryOwner<T> Shift<TShift>() => this;
	public void Dispose() { }
	public void Ref() { }
}

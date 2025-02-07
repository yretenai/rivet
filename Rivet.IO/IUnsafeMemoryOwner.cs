// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.IO;

public interface IUnsafeMemoryOwner<T> where T : struct {
	Memory<T> Memory { get; }

	static IUnsafeMemoryOwner<T> Empty { get; } = new ZeroOwner<T>();
	public IUnsafeMemoryOwner<T> Shift(int offset);

	public IUnsafeMemoryOwner<T> Shift<TShift>();
}

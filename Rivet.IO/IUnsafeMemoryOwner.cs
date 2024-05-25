// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.IO;

public interface IUnsafeMemoryOwner<T> where T : struct {
	Memory<T> Memory { get; }

	static IUnsafeMemoryOwner<T> Empty { get; } = new ZeroOwner<T>();
}

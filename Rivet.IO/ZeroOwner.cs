// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.IO;

public class ZeroOwner<T> : IUnsafeMemoryOwner<T> where T : struct {
	public Memory<T> Memory => Memory<T>.Empty;
}

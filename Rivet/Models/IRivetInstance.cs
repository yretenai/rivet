// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using Rivet.IO;

namespace Rivet.Models;

public interface IRivetInstance {
	public static abstract object? CreateInstance(RivetAsset asset, RivetGame game, IUnsafeMemoryOwner<byte> buffer);
}

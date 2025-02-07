// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using Rivet.IO;

namespace Rivet.Models;

public interface IRivetInstance {
	public static abstract object? CreateInstance(RivetAsset asset, RivetGame game, IUnsafeMemoryOwner<byte> buffer);
}

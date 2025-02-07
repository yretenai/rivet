// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.Models;

public record struct RivetAssetFlags {
	public bool IsTexture { get; set; }
	public bool HasHeader { get; set; }
	public bool IsVirtual { get; set; }
	public bool IsKey { get; set; }
}

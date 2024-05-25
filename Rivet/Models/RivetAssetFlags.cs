// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

namespace Rivet.Models;

public record struct RivetAssetFlags {
	public bool IsTexture { get; set; }
	public bool HasHeader { get; set; }
	public bool IsVirtual { get; set; }
	public bool IsKey { get; set; }
}

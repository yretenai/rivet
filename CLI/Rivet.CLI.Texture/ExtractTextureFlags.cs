// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;

namespace Rivet.CLI.Texture;

internal record ExtractTextureFlags : RivetExtractFlags {
	[Flag("format", Help = "Force image conversion to this type")]
	public ImageFormat Format { get; set; } = ImageFormat.Auto;

	[Flag("flat", Help = "Do not build directory hierarchies")]
	public bool Flatten { get; set; }
}

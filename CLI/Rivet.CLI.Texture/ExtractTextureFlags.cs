// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using DragonLib.CommandLine;

namespace Rivet.CLI.Texture;

internal record ExtractTextureFlags : RivetExtractFlags {
	[Flag("format", Help = "Force image conversion to this type")]
	public ImageFormat Format { get; set; } = ImageFormat.Auto;

	[Flag("flat", Help = "Do not build directory hierarchies")]
	public bool Flatten { get; set; }
}

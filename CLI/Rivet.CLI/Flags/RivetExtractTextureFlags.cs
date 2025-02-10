// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;
using Rivet.CLI.Extract;

namespace Rivet.CLI.Flags;

internal record RivetExtractTextureFlags : RivetExtractFlags {
	[Flag("format", Help = "Force image conversion to this type")]
	public ImageFormat Format { get; set; } = ImageFormat.Auto;

	[Flag("flat", Help = "Do not build directory hierarchies")]
	public bool Flatten { get; set; }
}

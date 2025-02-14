// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;

namespace Rivet.CLI.Flags;

internal record RivetExtractTextureFlags : RivetExtractFlags {
	[Flag("format", Help = "Force image conversion to this type")]
	public ImageFormat Format { get; set; } = ImageFormat.Auto;

	[Flag("cube-array", Help = "Convert cubemaps into arrays of images instead of a cross")]
	public bool AssumeCubeIsSurfaces { get; set; }

	[Flag("no-hdr", Help = "Convert HDR colorspaces to SDR")]
	public bool DisallowHDR { get; set; }
}

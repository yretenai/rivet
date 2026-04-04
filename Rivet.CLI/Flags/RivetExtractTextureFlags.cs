// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.CommandLine;
using Triton;

namespace Rivet.CLI.Flags;

internal record RivetExtractTextureFlags : RivetExtractFlags {
	[Flag("format", Help = "Force image conversion to this type")]
	public ImageFormat Format { get; set; } = ImageFormat.Auto;

	[Flag("cube-array", Help = "Convert cubemaps into arrays of images instead of a cross")]
	public bool AssumeCubeIsSurfaces { get; set; }

	[Flag("cube-style", Help = "Convert cubemaps into this style")]
	public CubemapStyle CubeStyle { get; set; } = CubemapStyle.Cross;

	[Flag("no-hdr", Help = "Convert HDR colorspaces to SDR")]
	public bool DisallowHDR { get; set; }

	[Flag("no-normal", Help = "Disallow Normal Z component reconstruction")]
	public bool DisallowNormalZ { get; set; }

	[Flag("compress", Help = "Compress textures at the cost of speed.")]
	public bool CompressTextures { get; set; }

	public bool AllowHDR => !DisallowHDR;
	public bool AllowNormalZ => !DisallowNormalZ;
}

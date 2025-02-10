// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using DragonLib.CommandLine;
using Rivet.CLI.Extract;

namespace Rivet.CLI.Flags;

internal record RivetExtractTextureFlags : RivetExtractFlags {
	[Flag("format", Help = "Force image conversion to this type")]
	public ImageFormat Format { get; set; } = ImageFormat.Auto;
}

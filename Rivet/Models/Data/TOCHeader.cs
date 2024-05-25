// rivet project
// Copyright (c) 2024 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct TOCHeader {
	public RivetTypeId TypeId { get; set; }
	public int Size { get; set; }
}

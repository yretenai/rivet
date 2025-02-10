// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct DAGHeader {
	public RivetTypeId TypeId { get; set; }
	public int Size { get; set; }
	public int CompressedSize { get; set; }
}

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;
using Rivet.IO;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 1)]
public record struct DAT1Entry {
	public RivetTypeId TypeId { get; set; }
	public int Offset { get; set; }
	public int Size { get; set; }
}

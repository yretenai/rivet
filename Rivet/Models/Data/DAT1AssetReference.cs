// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;
using Rivet.IO;

namespace Rivet.Models.Data;

[StructLayout(LayoutKind.Sequential, Pack = 8)]
public record struct DAT1AssetReference {
	public RivetAssetId AssetId { get; set; }
	public int StringOffset { get; set; }
	public RivetTypeId TypeId { get; set; }
}

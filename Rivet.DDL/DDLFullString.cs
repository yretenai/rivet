// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;
using Rivet.IO;

namespace Rivet.DDL;

[StructLayout(LayoutKind.Sequential, Pack = 8)]
public record DDLFullString(string Value, RivetTypeId Type, RivetAssetId Asset) {
	public override string ToString() => Value;
	public override int GetHashCode() => (int) Type.Hash;
}

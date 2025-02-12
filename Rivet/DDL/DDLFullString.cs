// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;
using Rivet.Models;

namespace Rivet.DDL;

[StructLayout(LayoutKind.Sequential, Pack = 8)]
public record DDLFullString(string Value, RivetTypeId Type, RivetAssetId Asset) {
	public override string ToString() => Value;
	public override int GetHashCode() => (int) Type.Hash;
}

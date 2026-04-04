// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.IO.Binary;

namespace Rivet.Models;

public interface IRivetInstance<out T> {
	public static abstract T CreateInstance(RivetAsset asset, RivetGame game, IRentedArray<byte> buffer);
}

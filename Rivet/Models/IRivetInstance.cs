// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.IO.Binary;

namespace Rivet.Models;

public interface IRivetInstance<out T> {
	public static abstract T CreateInstance(RivetAsset asset, RivetGame game, IRentedArray<byte> buffer);
}

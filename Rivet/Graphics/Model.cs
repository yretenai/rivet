// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.IO.Binary;
using Rivet.Data;
using Rivet.Models;
using Rivet.Models.Data;

namespace Rivet.Graphics;

public class Model : AssetPack, IRivetInstance<Model> {
	public Model(RivetAsset asset, IRentedArray<byte> buffer, RivetGame game) : base(asset, buffer, game) {
		if (Asset.Header.Version != AssetVersion.Model || Buffers.Count < 2) {
			throw new InvalidDataException();
		}

		var dat = new DAT1(Buffers);
	}

	public static Model CreateInstance(RivetAsset asset, RivetGame game, IRentedArray<byte> buffer) => new(asset, buffer, game);
}

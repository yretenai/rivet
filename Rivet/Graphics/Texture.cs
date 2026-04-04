// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Pluto.IO.Binary;
using Rivet.Data;
using Rivet.Models;
using Rivet.Models.Data;
using Rivet.Models.Graphics;

namespace Rivet.Graphics;

public class Texture : AssetPack, IRivetInstance<Texture> {
	public Texture(RivetAsset asset, IRentedArray<byte> buffer, RivetGame game) : base(asset, buffer, game) {
		if (Buffers.Count < 1) {
			throw new InvalidDataException();
		}

		List<IRentedArray<byte>> buffers;
		if (asset.Header.Version is AssetVersion.Zone) {
			if (Buffers.Count < 2) {
				throw new InvalidDataException();
			}

			var zoneDat = new DAT1(Buffers);
			if (zoneDat.Header.Version is not AssetVersion.Zone) {
				throw new InvalidDataException();
			}

			var atlas = zoneDat.GetSection("Zone Impostors Atlas"u8);
			if (atlas.Length == 0) {
				ResidentBuffer = RentedArray<byte>.Empty;
				StreamBuffer = RentedArray<byte>.Empty;
				return;
			}

			buffers = [new UnownedRentedArray<byte>(atlas, 16), Buffers[3]];
		} else {
			if (Asset.Header.Version != AssetVersion.Texture) {
				throw new InvalidDataException();
			}

			buffers = Buffers;
		}

		ResidentBuffer = buffers.Count > 1 ? buffers[1] : RentedArray<byte>.Empty;

		var dat = new DAT1(buffers);

		TextureHeader = dat.GetSection<TextureHeader>("Texture Header"u8)[0];

		if (HasStream && Game.TryFindAsset(Asset.Id, asset.Locale, AssetCategory.Texture, out var streamAsset)) {
			StreamBuffer = streamAsset.Open() ?? RentedArray<byte>.Empty;
		} else {
			StreamBuffer = RentedArray<byte>.Empty;
		}
	}

	public TextureHeader TextureHeader { get; }
	public bool IsHDR => TextureHeader.Format is DXGIFormat.BC6H_SF16 or DXGIFormat.BC6H_UF16 or DXGIFormat.R16_FLOAT or DXGIFormat.R32_FLOAT or DXGIFormat.R16G16_FLOAT or DXGIFormat.R16G16B16A16_FLOAT or DXGIFormat.R32G32_FLOAT or DXGIFormat.R32G32B32A32_FLOAT;
	public bool HasStream => TextureHeader.StreamMips > 0;
	public IRentedArray<byte> ResidentBuffer { get; private set; }
	public IRentedArray<byte> StreamBuffer { get; private set; }

	public (int Width, int Height) Dimensions {
		get {
			var (width, height) = StreamBuffer.Length > 0 ? TextureHeader.StreamDimensions : TextureHeader.ResidentDimensions;
			return (width, height);
		}
	}

	public bool IsValid => Dimensions.Height * Dimensions.Width > 0 && ResidentBuffer.Length + StreamBuffer.Length > 0;

	public static Texture CreateInstance(RivetAsset asset, RivetGame game, IRentedArray<byte> buffer) => new(asset, buffer, game);

	protected override void Dispose(bool disposing) {
		base.Dispose(disposing);

		if (disposing) {
			StreamBuffer.Dispose();
			ResidentBuffer.Dispose();
		}
	}
}

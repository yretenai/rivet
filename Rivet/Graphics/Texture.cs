// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.Data;
using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;
using Rivet.Models.Graphics;

namespace Rivet.Graphics;

public class Texture : AssetPack, IRivetInstance<Texture> {
	public const uint TypeId = 0x8F53A199;

	public Texture(RivetAsset asset, IUnsafeMemoryOwner<byte> buffer, RivetGame game) : base(asset, buffer, game) {
		if (Asset.Header.Schema != TypeId || Buffers.Count < 1) {
			throw new InvalidDataException();
		}

		using var dat = new DAT1(Buffers[0], Buffers[0]);

		TextureHeader = dat.GetSection<TextureHeader>("Texture Header"u8)[0];

		ResidentBuffer = Buffers.Count > 1 ? Buffers[1] : IUnsafeMemoryOwner<byte>.Empty;

		if (HasStream && Game.TryFindAsset(Asset.Id, asset.Locale, AssetCategory.Texture, out var streamAsset)) {
			StreamBuffer = streamAsset.Open() ?? IUnsafeMemoryOwner<byte>.Empty;
		} else {
			StreamBuffer = IUnsafeMemoryOwner<byte>.Empty;
		}
	}

	public TextureHeader TextureHeader { get; }
	public bool IsHDR => TextureHeader.Format is DXGIFormat.BC6H_SF16 or DXGIFormat.BC6H_UF16 or DXGIFormat.R16_FLOAT or DXGIFormat.R32_FLOAT or DXGIFormat.R16G16_FLOAT or DXGIFormat.R16G16B16A16_FLOAT or DXGIFormat.R32G32_FLOAT or DXGIFormat.R32G32B32A32_FLOAT;
	public bool HasStream => TextureHeader.StreamMips > 0;
	public IUnsafeMemoryOwner<byte> ResidentBuffer { get; private set; }
	public IUnsafeMemoryOwner<byte> StreamBuffer { get; private set; }

	public (int Width, int Height) Dimensions {
		get {
			var (width, height) = StreamBuffer.Size > 0 ? TextureHeader.StreamDimensions : TextureHeader.ResidentDimensions;
			return (width, height);
		}
	}

	public static Texture CreateInstance(RivetAsset asset, RivetGame game, IUnsafeMemoryOwner<byte> buffer) => new(asset, buffer, game);

	protected override void Dispose(bool disposing) {
		base.Dispose(disposing);

		if (disposing) {
			StreamBuffer.Dispose();
			ResidentBuffer.Dispose();
			StreamBuffer = IUnsafeMemoryOwner<byte>.Empty;
			ResidentBuffer = IUnsafeMemoryOwner<byte>.Empty;
		}
	}
}

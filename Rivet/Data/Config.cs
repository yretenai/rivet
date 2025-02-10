using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;

namespace Rivet.Data;

public class Config : AssetPack, IRivetInstance {
	public const uint TypeId = 0x21A56F68;

	public Config(RivetAsset asset, IUnsafeMemoryOwner<byte> buffer, RivetGame game) : base(asset, buffer, game) {
		if (Asset.Header.Schema != TypeId || Buffers.Count < 1) {
			throw new InvalidDataException();
		}

		using var dat = new DAT1(Buffers[0], Buffers[0]);

		foreach (var reference in dat.GetSection<DAT1AssetReference>("Config Asset Refs"u8)) {
			AssetReferences.Add(new RivetAssetReference(reference.AssetId, dat.GetString(reference.StringOffset), reference.TypeId));
		}

		Type = DDLSerializer.Deserialize(dat.GetSection("Config Type"u8), dat);
		Built = DDLSerializer.Deserialize(dat.GetSection("Config Built"u8), dat);
	}

	public List<RivetAssetReference> AssetReferences { get; } = [];
	public DDLObject Type { get; }
	public DDLObject Built { get; }

	public static object CreateInstance(RivetAsset asset, RivetGame game, IUnsafeMemoryOwner<byte> buffer) => new Config(asset, buffer, game);
}

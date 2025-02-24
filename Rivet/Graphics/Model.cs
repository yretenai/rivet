using Rivet.Data;
using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;

namespace Rivet.Graphics;

public class Model : AssetPack, IRivetInstance<Model> {
	public Model(RivetAsset asset, IUnsafeMemoryOwner<byte> buffer, RivetGame game) : base(asset, buffer, game) {
		if (Asset.Header.Version != AssetVersion.Model || Buffers.Count < 2) {
			throw new InvalidDataException();
		}

		var dat = new DAT1(Buffers);
	}

	public static Model CreateInstance(RivetAsset asset, RivetGame game, IUnsafeMemoryOwner<byte> buffer) => new(asset, buffer, game);
}

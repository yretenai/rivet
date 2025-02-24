using System.Runtime.InteropServices;
using DragonLib.CommandLine;
using DragonLib.IO;
using Rivet.CLI.Flags;
using Rivet.Data;
using Rivet.DDL.Enums;
using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;

namespace Rivet.CLI.Utility;

[Command<RivetDAT1Flags>("dat1", "Splits a DAT1 stream into chunks")]
public record RivetDAT1Command(RivetDAT1Flags Flags) : RivetCommand {
	public override void Execute() {
		var blank = new RivetAsset {
			Id = 0,
		};
		var header = new AssetHeader();
		var headerBlit = MemoryMarshal.AsBytes(new Span<AssetHeader>(ref header));

		foreach (var arg in new FileEnumerator(Flags.Positionals, new EnumerationOptions { RecurseSubdirectories = Flags.Recursive })) {
			var ext = Path.GetExtension(arg);
			if (ext.Length <= 1) {
				continue;
			}

			if (!Enum.TryParse<AssetExtensions>(ext[1..], true, out var assetExt)) {
				continue;
			}

			using var stream = new FileStream(arg, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
			stream.ReadExactly(headerBlit);
			using var data = new RivetMemory<byte>(stream);

			using var bundle = new AssetPack(blank with {
				Type = (AssetType) assetExt,
				Header = header,
			}, data, RivetGame.Instance!);

			var destination = arg + ".dat";

			var offset = 0;
			var datReadPoint = 0;
			for (var index = 0; index < bundle.Buffers.Count; index++) {
				using var block = bundle.Buffers[index];
				var oldOffset = offset;
				offset += block.Size;

				if (oldOffset + block.Size <= datReadPoint) {
					continue;
				}

				if (block.Size <= 4) {
					continue;
				}

				var magic = MemoryMarshal.Read<uint>(block.Memory.Span);
				var blockDestination = Path.Combine(destination, index.ToString("D"));

				if (magic == DAT1.MagicValue) {
					using var dat1 = new DAT1(bundle.Buffers[index..]);

					if (dat1.Sections.Count == 0) {
						continue;
					}

					Directory.CreateDirectory(blockDestination);

					foreach (var (sectionId, (_, section)) in dat1.Sections) {
						var sectionDestination = Path.Combine(blockDestination, sectionId + ".built");
						using var sectionStream = new FileStream(sectionDestination, FileMode.Create, FileAccess.Write, FileShare.ReadWrite);
						sectionStream.Write(section.Memory.Span);
					}

					datReadPoint = dat1.Size;

					continue;
				}

				File.WriteAllBytes(blockDestination + ".bin", block.Memory.Span);
			}
		}
	}
}

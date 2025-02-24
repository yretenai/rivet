using DragonLib.CommandLine;
using Rivet.CLI.Flags;
using Rivet.IO;
using Serilog;

namespace Rivet.CLI.BugCheck;

[Command<RivetCLIFlags>("asset-header-format-check", "If every story had a happy ending, there would be no reason to turn the page.", "bug", true)]
public record RivetBugCheckAHFCCommand(RivetCLIFlags Flags) : RivetCLICommand<RivetCLIFlags>(Flags) {
	public override void Execute() {
		foreach (var asset in Game.TOC.Assets.Values.SelectMany(x => x)) {
			var format = asset.Header.FormatData;
			if (((Span<byte>) format).ContainsAnyInRange((byte) 1, byte.MaxValue)) {
				Log.Information("{Id} = {Header}", new RivetAssetId(asset.Id), Convert.ToHexString(format));
			}
		}
	}
}

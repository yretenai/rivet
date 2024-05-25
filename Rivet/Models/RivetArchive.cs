using Rivet.Data;
using Rivet.Models.Data;

namespace Rivet.Models;

public sealed record RivetArchive : IDisposable, IAsyncDisposable {
	public required string Name { get; init; }
	public Locale Locale { get; set; }
	public DataStreamArchive? DataStream { get; set; }

	public async ValueTask DisposeAsync() {
		if (DataStream != null) {
			await DataStream.DisposeAsync();
		}
	}

	public void Dispose() {
		DataStream?.Dispose();
	}
}

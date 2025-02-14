using SixLabors.ImageSharp;

namespace Rivet.Converters.Imaging;

public sealed class ImageCollection : List<Image>, IDisposable {
	public void Dispose() {
		foreach (var frame in this) {
			frame.Dispose();
		}
	}
}

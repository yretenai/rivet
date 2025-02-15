namespace Rivet.Converters.Imaging;

public sealed class ImageCollection : List<IImageBuffer>, IDisposable {
	public void Dispose() {
		foreach (var frame in this) {
			frame.Dispose();
		}
	}
}

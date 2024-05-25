using System.Buffers;
using System.Diagnostics;
using DragonLib;
using GDeflateNet;
using IronCompress;
using Rivet.IO;
using Rivet.Models.Data;

namespace Rivet.Data;

public sealed class DataStreamArchive : IDisposable, IAsyncDisposable {
	private const uint DSARMagic = 0x52415344;
	public DataStreamArchive(string path) : this(new FileStream(path, FileMode.Open, FileAccess.Read, FileShare.ReadWrite)) { }

	public DataStreamArchive(Stream stream) {
		BaseStream = stream;
		DSARHeader header = default;
		stream.ReadExactly(new Span<DSARHeader>(ref header).AsBytes());
		if (header.Magic != DSARMagic) {
			IsCompressed = false;
			header = default;
			header.Size = stream.Length;
		}

		Header = header;

		if (!IsCompressed) {
			return;
		}

		if (Header.VersionMajor != 3 || header.VersionMinor != 0 || header.VersionPatch != 1) {
			throw new NotSupportedException("Only Version 3.0.1 is supported");
		}

		Chunks = new DSARChunk[header.Count];
		stream.ReadExactly(Chunks.AsSpan().AsBytes());
	}

	public Stream BaseStream { get; }
	public bool IsCompressed { get; } = true;
	public DSARHeader Header { get; }
	public DSARChunk[] Chunks { get; } = [];
	private static Iron Iron { get; } = new();

	public ValueTask DisposeAsync() => BaseStream.DisposeAsync();

	public void Dispose() => BaseStream.Dispose();

	public RivetMemory<byte> ReadBytes(long assetOffset, int assetSize) {
		var assetEnd = assetOffset + assetSize;

		ArgumentOutOfRangeException.ThrowIfGreaterThan(assetOffset, Header.Size, nameof(assetOffset));
		ArgumentOutOfRangeException.ThrowIfGreaterThan(assetEnd, Header.Size, nameof(assetOffset));

		var buffer = new RivetMemory<byte>(assetSize);
		if (!IsCompressed) {
			BaseStream.Position = assetOffset;
			BaseStream.ReadExactly(buffer.Memory.Span);
			return buffer;
		}

		var chunkIndex = -1;
		// find the first chunk that contains the start offset
		for (var i = 0; i < Chunks.Length; ++i) {
			var chunk = Chunks[i];
			if (chunk.Offset <= assetOffset && chunk.Offset + chunk.Size >= assetOffset) {
				chunkIndex = i;
				break;
			}
		}

		if (chunkIndex == -1) {
			throw new UnreachableException("chunk index is unknown, goodbye");
		}

		var localOffset = 0;
		while (localOffset < assetSize) {
			if (chunkIndex >= Chunks.Length) {
				throw new UnreachableException("chunk index is greater than asset end, goodbye");
			}

			var chunk = Chunks[chunkIndex++];

			if (chunk.Offset > assetEnd) {
				throw new UnreachableException("chunk offset is greater than asset end, goodbye");
			}

			var shift = localOffset == 0 && chunk.Offset < assetOffset ? (int) (assetOffset - chunk.Offset) : 0;
			if (chunk.CompressionType == DSARCompression.Padding) {
				localOffset += chunk.Size - shift;
				continue;
			}

			using var uncompressedBuffer = MemoryPool<byte>.Shared.Rent(chunk.Size);
			using var compressedBuffer = MemoryPool<byte>.Shared.Rent(chunk.CompressedSize);
			BaseStream.Position = chunk.CompressedOffset;
			BaseStream.ReadExactly(compressedBuffer.Memory[..chunk.CompressedSize].Span);

			switch (chunk.CompressionType) {
				case DSARCompression.None: {
					compressedBuffer.Memory[..chunk.CompressedSize].CopyTo(uncompressedBuffer.Memory[..chunk.Size]);
					break;
				}
				case DSARCompression.Unknown1: {
					throw new NotSupportedException("compression type 1 has never been seen before");
				}
				case DSARCompression.GDeflate: {
					if (!GDeflate.Decompress(compressedBuffer.Memory[..chunk.CompressedSize], uncompressedBuffer.Memory[..chunk.Size], 1)) {
						throw new InvalidOperationException("gdeflate failure");
					}

					break;
				}
				case DSARCompression.LZ4: {
					var lz4 = Iron.Decompress(Codec.LZ4, compressedBuffer.Memory[..chunk.CompressedSize].Span, chunk.Size);
					lz4.AsSpan().CopyTo(uncompressedBuffer.Memory.Span);
					break;
				}
			}

			var copy = uncompressedBuffer.Memory[..chunk.Size].Span[shift..];
			if (chunk.Offset + chunk.Size > assetEnd) {
				copy = copy[..(assetSize - localOffset)];
			}

			copy.CopyTo(buffer.Memory.Span[localOffset..]);
			localOffset += copy.Length;
		}

		return buffer;
	}
}

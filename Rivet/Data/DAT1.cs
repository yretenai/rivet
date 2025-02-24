// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics;
using System.Runtime.InteropServices;
using Rivet.IO;
using Rivet.Models.Data;

namespace Rivet.Data;

public sealed class DAT1 : IStringPooled {
	public const uint MagicValue = 0x44415431u;

	/// <remarks>Ownership of the buffers is NOT TRANSFERRED to this class, the calling class must dispose it.</remarks>
	public DAT1(IUnsafeMemoryOwner<byte> buffer) : this([buffer]) { }

	/// <remarks>Ownership of the buffers is NOT TRANSFERRED to this class, the calling class must dispose it.</remarks>
	public DAT1(List<IUnsafeMemoryOwner<byte>> buffers) {
		Buffers = buffers;

		var reader = new MemoryReader(Buffers[0]);

		if (reader.Peek<uint>() != MagicValue) {
			throw new InvalidDataException("Invalid magic value");
		}

		Debug.Assert(Header.Reserved == 0);

		Header = reader.Get<DAT1Header>();
		var sectionHeaders = reader.Get<DAT1Entry>(Header.SectionCount);
		TypeName = reader.GetCString();
		foreach (var sectionHeader in sectionHeaders) {
			var bufferOffset = 0;
			foreach (var buffer in Buffers) {
				if (sectionHeader.Offset < bufferOffset + buffer.Size) {
					var slice = new SharedRivetMemory<byte>(buffer, sectionHeader.Offset - bufferOffset, sectionHeader.Size);
					Sections[sectionHeader.TypeId] = (sectionHeader, slice);
					goto nextSection;
				}

				bufferOffset += buffer.Size;
			}

			throw new InvalidOperationException("Section offset is out of bounds");

		nextSection:
			var size = sectionHeader.Offset + sectionHeader.Size;
			if (size > Size) {
				Size = size;
			}
		}
	}

	public DAT1Header Header { get; }
	public List<IUnsafeMemoryOwner<byte>> Buffers { get; }
	public Dictionary<RivetTypeId, (DAT1Entry Entry, IUnsafeMemoryOwner<byte> Buffer)> Sections { get; } = [];
	public string TypeName { get; }
	public int Size { get; }

	public string GetString(int offset) =>
		new MemoryReader(Buffers[0]) {
			Offset = offset,
		}.GetCString();

	public IUnsafeMemoryOwner<byte> GetSection(ReadOnlySpan<byte> name) => GetSection(RivetTypeId.Checksum(name));
	public IUnsafeMemoryOwner<byte> GetSection(uint hash) => !Sections.TryGetValue(hash, out var section) ? IUnsafeMemoryOwner<byte>.Empty : section.Buffer;
	public ReadOnlySpan<T> GetSection<T>(ReadOnlySpan<byte> name) where T : struct => GetSection<T>(RivetTypeId.Checksum(name));
	public ReadOnlySpan<T> GetSection<T>(uint hash) where T : struct => MemoryMarshal.Cast<byte, T>(GetSection(hash).Memory.Span);
}

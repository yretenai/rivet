// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Text;
using Pluto.Extensions;
using Pluto.IO.Binary;
using Rivet.IO;
using Rivet.Models.Data;

namespace Rivet.Data;

public sealed class DAT1 : IStringPooled {
	public const uint MagicValue = 0x44415431u;

	/// <remarks>Ownership of the buffers is NOT TRANSFERRED to this class, the calling class must dispose it.</remarks>
	public DAT1(IRentedArray<byte> buffer) : this([buffer]) { }

	/// <remarks>Ownership of the buffers is NOT TRANSFERRED to this class, the calling class must dispose it.</remarks>
	public DAT1(List<IRentedArray<byte>> buffers) {
		Buffers = buffers;

		using var reader = new ArrayPoolBinaryReader(Buffers[0], true);

		if (reader.Peek<uint>() != MagicValue) {
			throw new InvalidDataException("Invalid magic value");
		}

		Debug.Assert(Header.Reserved == 0);

		Header = reader.Read<DAT1Header>();
		var sectionHeaders = reader.Read<DAT1Entry>(Header.SectionCount);
		TypeName = reader.ReadCString<byte>(Encoding.ASCII);
		foreach (var sectionHeader in sectionHeaders) {
			var bufferOffset = 0;
			foreach (var buffer in Buffers) {
				if (sectionHeader.Offset < bufferOffset + buffer.Length) {
					Sections[sectionHeader.TypeId] = (sectionHeader, new UnownedRentedArray<byte>(buffer, sectionHeader.Offset - bufferOffset, sectionHeader.Size));
					goto nextSection;
				}

				bufferOffset += buffer.Length;
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
	public List<IRentedArray<byte>> Buffers { get; }
	public Dictionary<RivetTypeId, (DAT1Entry Entry, IRentedArray<byte> Buffer)> Sections { get; } = [];
	public string TypeName { get; }
	public int Size { get; }

	public string GetString(int offset) => Buffers[0].Span[offset..].ReadString(Encoding.ASCII) ?? string.Empty;

	public IRentedArray<byte> GetSection(ReadOnlySpan<byte> name) => GetSection(RivetTypeId.Checksum(name));
	public IRentedArray<byte> GetSection(uint hash) => !Sections.TryGetValue(hash, out var section) ? RentedArray<byte>.Empty : section.Buffer;
	public ReadOnlySpan<T> GetSection<T>(ReadOnlySpan<byte> name) where T : struct => GetSection<T>(RivetTypeId.Checksum(name));
	public ReadOnlySpan<T> GetSection<T>(uint hash) where T : struct => MemoryMarshal.Cast<byte, T>(GetSection(hash).Memory.Span);
}

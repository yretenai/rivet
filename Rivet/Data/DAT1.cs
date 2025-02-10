// rivet project
// Copyright (c) 2024-2025 Legiayayana <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.InteropServices;
using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;

namespace Rivet.Data;

public class DAT1 : IDisposable {
	protected const uint DAT1Magic = 0x44415431u;

	public DAT1(IUnsafeMemoryOwner<byte> owner, IUnsafeMemoryOwner<byte> buffer, IUnsafeMemoryOwner<byte>? residentBuffer = null) {
		Owner = owner;
		Buffer = buffer;
		ResidentBuffer = residentBuffer ?? IUnsafeMemoryOwner<byte>.Empty;
		var reader = new MemoryReader(Buffer);

		if (reader.Peek<uint>() != DAT1Magic) {
			throw new InvalidDataException("Invalid magic value");
		}

		Header = reader.Get<DAT1Header>();
		var sectionHeaders = reader.Get<DAT1Entry>(Header.SectionCount);
		TypeName = reader.GetCString();

		var residentStart = buffer.Memory.Length;
		var residentEnd = residentStart + ResidentBuffer.Memory.Length;
		foreach (var sectionHeader in sectionHeaders) {
			if (sectionHeader.Offset > residentEnd) {
				throw new InvalidOperationException("Section offset is out of bounds");
			}

			if (sectionHeader.Offset < residentStart) {
				var slice = reader.Slice(sectionHeader.Offset, sectionHeader.Size);
				Sections[sectionHeader.TypeId] = (sectionHeader, slice);
			} else {
				var slice = reader.Slice(sectionHeader.Offset - residentStart, sectionHeader.Size);
				Sections[sectionHeader.TypeId] = (sectionHeader, slice);
			}
		}
	}

	public DAT1Header Header { get; }
	public IUnsafeMemoryOwner<byte> Owner { get; private set; }
	public IUnsafeMemoryOwner<byte> Buffer { get; private set; }
	public IUnsafeMemoryOwner<byte> ResidentBuffer { get; private set; }
	public Dictionary<RivetTypeId, (DAT1Entry Entry, IUnsafeMemoryOwner<byte> Buffer)> Sections { get; } = [];
	public string TypeName { get; }

	public void Dispose() {
		Dispose(true);
		GC.SuppressFinalize(this);
	}

	protected virtual void Dispose(bool disposing) {
		if (disposing) {
			Release();
		}
	}

	protected void Release() {
		if (Owner is IDisposable ownerDisposable) {
			ownerDisposable.Dispose();
		}

		if (Buffer is IDisposable bufferDisposable) {
			bufferDisposable.Dispose();
		}

		if (ResidentBuffer is IDisposable residentDisposable) {
			residentDisposable.Dispose();
		}

		Owner = IUnsafeMemoryOwner<byte>.Empty;
		Buffer = IUnsafeMemoryOwner<byte>.Empty;
		ResidentBuffer = IUnsafeMemoryOwner<byte>.Empty;
		Sections.Clear();
	}

	public IUnsafeMemoryOwner<byte> GetSection(ReadOnlySpan<byte> name) => GetSection(RivetTypeId.Checksum(name));
	public IUnsafeMemoryOwner<byte> GetSection(uint hash) => !Sections.TryGetValue(hash, out var section) ? IUnsafeMemoryOwner<byte>.Empty : section.Buffer;
	public ReadOnlySpan<T> GetSection<T>(ReadOnlySpan<byte> name) where T : struct => GetSection<T>(RivetTypeId.Checksum(name));
	public ReadOnlySpan<T> GetSection<T>(uint hash) where T : struct => MemoryMarshal.Cast<byte, T>(GetSection(hash).Memory.Span);

	public string GetString(int offset) =>
		new MemoryReader(Buffer) {
			Offset = offset,
		}.GetCString();
}

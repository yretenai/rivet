// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using System.Text;
using Pluto.IO.Binary;
using Rivet.DDL.Models;
using Rivet.IO;

namespace Rivet.DDL;

public static class DDLSerializer {
	public static DDLObject Deserialize(IRentedArray<byte> data, IStringPooled stringPool) => Deserialize(new ArrayPoolBinaryReader(data, true), stringPool);

	public static DDLObject Deserialize(BufferBinaryReader reader, IStringPooled stringPool) {
		if (reader.Unconsumed <= Unsafe.SizeOf<DDLHeader>()) {
			return [];
		}

		var header = reader.Read<DDLHeader>();
		if (header.Magic != DDLHeader.MagicValue) {
			return [];
		}

		var objectBlob = new ArrayPoolBinaryReader(reader.ReadSharedBytes(header.Size));
		var fieldInfos = objectBlob.Read<DDLFieldHeader>(header.FieldCount);
		var fieldNameOffsets = objectBlob.Read<int>(header.FieldCount);

		var result = new DDLObject();
		for (var fieldIndex = 0; fieldIndex < header.FieldCount; ++fieldIndex) {
			var fieldInfo = fieldInfos[fieldIndex];
			var fieldName = stringPool.GetString(fieldNameOffsets[fieldIndex]);
			result[fieldInfo.Id] = new DDLField(fieldInfo.Id, fieldName, ReadValue(fieldInfo, stringPool, objectBlob));
		}

		return result;
	}

	public static List<object?> ReadValue(DDLFieldHeader field, IStringPooled stringPool, BufferBinaryReader reader) {
		var count = field.Type == DDLTypeKind.Default ? Math.Min(1, field.Count) : field.Count;
		if (count == 0) {
			return [];
		}

		var result = new List<object?>(count);
		for (var index = 0; index < count; ++index) {
			switch (field.Type) {
				case DDLTypeKind.Bool: {
					result.Add(reader.Read<byte>() != 0);
					break;
				}
				case DDLTypeKind.UInt8: {
					result.Add(reader.Read<byte>());
					break;
				}
				case DDLTypeKind.UInt16: {
					result.Add(reader.Read<ushort>());
					break;
				}
				case DDLTypeKind.UInt32: {
					result.Add(reader.Read<uint>());
					break;
				}
				case DDLTypeKind.Identifier:
				case DDLTypeKind.UInt64: {
					result.Add(reader.Read<ulong>());
					break;
				}
				case DDLTypeKind.Asset: {
					result.Add(new RivetAssetId(reader.Read<ulong>()));
					break;
				}
				case DDLTypeKind.Int8: {
					result.Add(reader.Read<sbyte>());
					break;
				}
				case DDLTypeKind.Int16: {
					result.Add(reader.Read<short>());
					break;
				}
				case DDLTypeKind.Int32: {
					result.Add(reader.Read<int>());
					break;
				}
				case DDLTypeKind.Int64: {
					result.Add(reader.Read<long>());
					break;
				}
				case DDLTypeKind.Float: {
					result.Add(reader.Read<float>());
					break;
				}
				case DDLTypeKind.Double: {
					result.Add(reader.Read<double>());
					break;
				}
				case DDLTypeKind.Enum:
				case DDLTypeKind.Bitfield:
				case DDLTypeKind.Json:
				case DDLTypeKind.String:
				case DDLTypeKind.File: {
					var str = reader.Read<DDLString>();
					var value = reader.ReadCString<byte>(Encoding.UTF8, str.Length, true);
					result.Add(new DDLFullString(value, str.Hash, str.Checksum));
					reader.Position += 1;
					reader.Align();
					break;
				}
				case DDLTypeKind.Struct: {
					result.Add(Deserialize(reader, stringPool));
					reader.Align();
					break;
				}
				case DDLTypeKind.Default: {
					result.Add(null);
					reader.Position += 1;
					break;
				}
				case DDLTypeKind.Unknown:
				default: throw new NotSupportedException();
			}
		}

		return result;
	}
}

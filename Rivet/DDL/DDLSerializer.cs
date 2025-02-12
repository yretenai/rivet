// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Runtime.CompilerServices;
using System.Text;
using Rivet.Data;
using Rivet.IO;
using Rivet.Models;
using Rivet.Models.Data;

namespace Rivet.DDL;

public static class DDLSerializer {
	public static DDLObject Deserialize(IUnsafeMemoryOwner<byte> data, DAT1 dat) => Deserialize(new MemoryReader(data), dat);

	public static DDLObject Deserialize(MemoryReader reader, DAT1 dat) {
		if (reader.Unconsumed <= Unsafe.SizeOf<DDLHeader>()) {
			return [];
		}

		var header = reader.Get<DDLHeader>();
		if (header.Magic != DDLHeader.MagicValue) {
			return [];
		}

		var objectBlob = new MemoryReader(reader.Slice(header.Size));
		var fieldInfos = objectBlob.Get<DDLFieldHeader>(header.FieldCount);
		var fieldNameOffsets = objectBlob.Get<int>(header.FieldCount);

		var result = new DDLObject();
		for (var fieldIndex = 0; fieldIndex < header.FieldCount; ++fieldIndex) {
			var fieldInfo = fieldInfos[fieldIndex];
			var fieldName = dat.GetString(fieldNameOffsets[fieldIndex]);
			result[fieldInfo.Id] = new DDLField(fieldInfo.Id, fieldName, ReadValue(fieldInfo, dat, objectBlob));
		}

		return result;
	}

	public static List<object?> ReadValue(DDLFieldHeader field, DAT1 dat, MemoryReader reader) {
		var count = field.Type == DDLTypeKind.Default ? Math.Min(1, field.Count) : field.Count;
		if (count == 0) {
			return [];
		}

		var result = new List<object?>(count);
		for (var index = 0; index < count; ++index) {
			switch (field.Type) {
				case DDLTypeKind.Bool: {
					result.Add(reader.Get<byte>() != 0);
					break;
				}
				case DDLTypeKind.UInt8: {
					result.Add(reader.Get<byte>());
					break;
				}
				case DDLTypeKind.UInt16: {
					result.Add(reader.Get<ushort>());
					break;
				}
				case DDLTypeKind.UInt32: {
					result.Add(reader.Get<uint>());
					break;
				}
				case DDLTypeKind.Identifier:
				case DDLTypeKind.UInt64: {
					result.Add(reader.Get<ulong>());
					break;
				}
				case DDLTypeKind.Asset: {
					result.Add(new RivetAssetId(reader.Get<ulong>()));
					break;
				}
				case DDLTypeKind.Int8: {
					result.Add(reader.Get<sbyte>());
					break;
				}
				case DDLTypeKind.Int16: {
					result.Add(reader.Get<short>());
					break;
				}
				case DDLTypeKind.Int32: {
					result.Add(reader.Get<int>());
					break;
				}
				case DDLTypeKind.Int64: {
					result.Add(reader.Get<long>());
					break;
				}
				case DDLTypeKind.Float: {
					result.Add(reader.Get<float>());
					break;
				}
				case DDLTypeKind.Double: {
					result.Add(reader.Get<double>());
					break;
				}
				case DDLTypeKind.Enum:
				case DDLTypeKind.Bitfield:
				case DDLTypeKind.Json:
				case DDLTypeKind.String:
				case DDLTypeKind.File: {
					var str = reader.Get<DDLString>();
					var value = str.Length == 0 ? string.Empty : Encoding.UTF8.GetString(reader.Get<byte>(str.Length));
					result.Add(new DDLFullString(value, str.Hash, str.Checksum));
					reader.Offset += 1;
					reader.Align(4);
					break;
				}
				case DDLTypeKind.Struct: {
					result.Add(Deserialize(reader, dat));
					reader.Align(4);
					break;
				}
				case DDLTypeKind.Default: {
					result.Add(null);
					reader.Offset += 1;
					break;
				}
				case DDLTypeKind.Unknown:
				default: throw new NotSupportedException();
			}
		}

		return result;
	}
}

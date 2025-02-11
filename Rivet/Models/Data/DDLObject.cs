// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.DDL;

namespace Rivet.Models.Data;

public class DDLObject : Dictionary<uint, DDLField> {
	public T GetValue<T>(uint id, T defaultValue = default, int index = 0) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > index) {
			switch (field.Value[index]) {
				case T value:
					return value;
				case DDLFullString str when typeof(T) == typeof(RivetTypeId):
					return (T) (object) str.Type;
				case DDLFullString str when typeof(T) == typeof(RivetAssetId):
					return (T) (object) str.Asset;
			}
		}

		return defaultValue;
	}

	public string? GetString(uint id, string? defaultValue = default, int index = 0) {
		if (TryGetValue(id, out var field) && field.Value.Count > index && field.Value[index] is DDLFullString value) {
			return value.Value;
		}

		return defaultValue;
	}

	public T? GetObject<T>(uint id, T? defaultValue = default, int index = 0) where T : DDLObjectType, IDDLObjectType<T> {
		if (TryGetValue(id, out var field) && field.Value.Count > index && field.Value[index] is DDLObject value) {
			return T.Create(value);
		}

		return defaultValue;
	}

	public T GetEnumValue<T>(uint id, Dictionary<uint, T> enumValues, T defaultValue = default, int fieldIndex = 0) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > fieldIndex && field.Value[fieldIndex] is DDLFullString value) {
			return enumValues.GetValueOrDefault(value.Type, defaultValue);
		}

		return defaultValue;
	}

	public T GetBitset<T>(uint id, Dictionary<uint, T> enumValues, T defaultValue = default) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is DDLFullString) {
			var bitset = 0ul;

			foreach (var value in field.Value) {
				bitset |= Convert.ToUInt32(enumValues.GetValueOrDefault(((DDLFullString) value!).Type));
			}

			return (T) Enum.ToObject(typeof(T), bitset);
		}

		return defaultValue;
	}

	public List<T> GetValues<T>(uint id) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is T) {
			var list = new List<T>(field.Value.Count);
			for (var index = 0; index < field.Value.Count; index++) {
				switch (field.Value[index]) {
					case T value:
						list.Add(value);
						break;
					case DDLFullString str when typeof(T) == typeof(RivetTypeId):
						list.Add((T) (object) str.Type);
						break;
					case DDLFullString str when typeof(T) == typeof(RivetAssetId):
						list.Add((T) (object) str.Asset);
						break;
				}
			}

			return list;
		}

		return [];
	}

	public List<string> GetStrings(uint id) {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is DDLFullString) {
			var list = new List<string>(field.Value.Count);
			list.AddRange(field.Value.Cast<DDLFullString>().Select(x => x.Value));
			return list;
		}

		return [];
	}

	public List<T> GetObjects<T>(uint id) where T : DDLObjectType, IDDLObjectType<T> {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is DDLObject) {
			var list = new List<T>(field.Value.Count);
			foreach (var value in field.Value) {
				list.Add(T.Create((DDLObject) value!));
			}

			list.AddRange(field.Value.Cast<T>());
			return list;
		}

		return [];
	}

	public List<T> GetEnumValues<T>(uint id, Dictionary<uint, T> enumValues) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is DDLFullString) {
			var list = new List<T>(field.Value.Count);

			foreach (var value in field.Value) {
				list.Add(enumValues.GetValueOrDefault(((DDLFullString) value!).Type));
			}

			return list;
		}

		return [];
	}

	public Dictionary<string, object?> Collapse() {
		var result = new Dictionary<string, object?>();
		foreach (var (_, value) in this) {
			if (value.Value.Count == 0) {
				continue;
			}

			switch (value.Value[0]) {
				case DDLObject ddl when value.Value.Count == 1:
					result[value.Name] = ddl.Collapse();
					break;
				case DDLObject:
					result[value.Name] = value.Value.Cast<DDLObject>().Select(x => x.Collapse()).ToList();
					break;
				case DDLFullString dfs when value.Value.Count == 1:
					result[value.Name] = dfs.Value;
					break;
				case DDLFullString:
					result[value.Name] = value.Value.Cast<DDLFullString>().Select(x => x.Value).ToList();
					break;
				default: {
					if (value.Value.Count == 1) {
						result[value.Name] = value.Value[0];
					} else {
						result[value.Name] = value.Value;
					}

					break;
				}
			}
		}

		return result;
	}
}

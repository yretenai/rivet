// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.DDL;

namespace Rivet.Models.Data;

public class DDLObject : Dictionary<uint, DDLField>, IDDLObject {
	public T GetValue<T>(uint id, T defaultValue = default!, int index = 0) {
		if (TryGetValue(id, out var field) && field.Value.Count > index && field.Value[index] is T value) {
			return value;
		}

		return defaultValue;
	}

	public T GetObject<T>(uint id, T defaultValue = default!, int index = 0) where T : DDLObjectType, IDDLObjectType<T> {
		if (TryGetValue(id, out var field) && field.Value.Count > index && field.Value[index] is DDLObject value) {
			return T.Create(value);
		}

		return defaultValue;
	}

	public T GetEnumValue<T>(uint id, Dictionary<uint, T> enumValues, T defaultValue = default, int fieldIndex = 0) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > fieldIndex && field.Value[fieldIndex] is string value) {
			return enumValues.GetValueOrDefault(RivetTypeId.Checksum(value), defaultValue);
		}

		return defaultValue;
	}

	public T GetBitset<T>(uint id, Dictionary<uint, T> enumValues, T defaultValue = default) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is string) {
			var bitset = 0ul;

			foreach (var value in field.Value) {
				bitset |= Convert.ToUInt32(enumValues.GetValueOrDefault(RivetTypeId.Checksum((string) value!)));
			}

			return (T) Enum.ToObject(typeof(T), bitset);
		}

		return defaultValue;
	}

	public List<T> GetValues<T>(uint id) {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is T) {
			var list = new List<T>(field.Value.Count);
			list.AddRange(field.Value.Cast<T>());
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
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is string) {
			var list = new List<T>(field.Value.Count);

			foreach (var value in field.Value) {
				list.Add(enumValues.GetValueOrDefault(RivetTypeId.Checksum((string) value!)));
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

			if (value.Value[0] is DDLObject) {
				if (value.Value.Count == 1) {
					result[value.Name] = ((DDLObject) value.Value[0]!).Collapse();
				} else {
					result[value.Name] = value.Value.Cast<DDLObject>().Select(x => x.Collapse()).ToList();
				}
			} else {
				if (value.Value.Count == 1) {
					result[value.Name] = value.Value[0];
				} else {
					result[value.Name] = value.Value;
				}
			}
		}

		return result;
	}
}

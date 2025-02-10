namespace Rivet.Models.Data;

public static class DDLObjectExtensions {
	public static T GetValue<T>(this DDLObject obj, RivetTypeId id, T defaultValue = default!, int index = 0) {
		if (obj.TryGetValue(id, out var field) && field.Value.Count > index && field.Value[index] is T value) {
			return value;
		}

		return defaultValue;
	}

	public static T GetEnumValue<T>(this DDLObject obj, RivetTypeId id, Dictionary<string, T> enumValues, T defaultValue = default, int fieldIndex = 0) where T : struct {
		if (obj.TryGetValue(id, out var field) && field.Value.Count > fieldIndex && field.Value[fieldIndex] is string value) {
			return enumValues.GetValueOrDefault(value, defaultValue);
		}

		return defaultValue;
	}

	public static T GetBitset<T>(this DDLObject obj, RivetTypeId id, Dictionary<string, T> enumValues, T defaultValue = default) where T : struct {
		if (obj.TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is string) {
			var bitset = 0ul;

			foreach (var value in field.Value) {
				bitset |= Convert.ToUInt64(enumValues.GetValueOrDefault((string) value!));
			}

			return (T) Enum.ToObject(typeof(T), bitset);
		}

		return defaultValue;
	}

	public static List<T> GetValues<T>(this DDLObject obj, RivetTypeId id) {
		if (obj.TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is T) {
			var list = new List<T>(field.Value.Count);
			list.AddRange(field.Value.Cast<T>());
			return list;
		}

		return [];
	}

	public static List<T> GetEnumValues<T>(this DDLObject obj, RivetTypeId id, Dictionary<string, T> enumValues) where T : struct {
		if (obj.TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is string) {
			var list = new List<T>(field.Value.Count);

			foreach (var value in field.Value) {
				list.Add(enumValues.GetValueOrDefault((string) value!));
			}

			return list;
		}

		return [];
	}

	public static Dictionary<string, object?> Collapse(this DDLObject obj) {
		var result = new Dictionary<string, object?>();
		foreach (var (key, value) in obj) {
			if (value.Value.Count == 0) {
				continue;
			}

			if (value.Value[0] is DDLObject) {
				if (value.Value.Count == 1) {
					result[value.Name] = ((DDLObject) value.Value[0]!).Collapse();
				} else {
					result[value.Name] = value.Value.Cast<DDLObject>().Select(Collapse).ToList();
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

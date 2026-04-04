// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics;
using System.Globalization;
using System.Reflection;
using Rivet.IO;
using Serilog;

namespace Rivet.DDL;

public class DDLObject : Dictionary<uint, DDLField> {
	static DDLObject() {
		var create = typeof(DDLPolymorphicObject).GetMethod("CreatePolymorphic");
		Debug.Assert(create != null, nameof(create) + " != null");

		PolymorphicCreate = (type, instance) => create.MakeGenericMethod(type).Invoke(instance, null) as DDLObjectType;
	}

	public static Dictionary<uint, Type> TypeRegistration { get; } = [];
	public static Dictionary<uint, Type> RootRegistration { get; } = [];

	private static CreateDelegate PolymorphicCreate { get; }

	public static void LoadTypes(Assembly assembly) {
		foreach (var type in assembly.GetTypes()) {
			if (!type.IsClass) {
				continue;
			}

			var attr = type.GetCustomAttribute<DDLRegistrationAttribute>();
			if (attr == null) {
				continue;
			}

			TypeRegistration[attr.Id] = type;

			var rootAttributes = type.GetCustomAttributes<DDLTypeRootAttribute>();
			foreach (var rootAttribute in rootAttributes) {
				RootRegistration[rootAttribute.Id] = type;
			}
		}
	}

	public static DDLObjectType? Create(uint id, DDLObject ddl) {
		if (!TypeRegistration.TryGetValue(id, out var type) && !RootRegistration.TryGetValue(id, out type)) {
			return null;
		}

		return (DDLObjectType?) Activator.CreateInstance(type, ddl);
	}

	public T GetValue<T>(uint id, T defaultValue = default, int index = 0) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > index) {
			switch (field.Value[index]) {
				case T value:
					return value;
				case ulong u when typeof(T) == typeof(RivetAssetId):
					return (T) (object) new RivetAssetId(u);
				case uint u when typeof(T) == typeof(RivetTypeId):
					return (T) (object) new RivetTypeId(u);
				case DDLFullString str when typeof(T) == typeof(RivetTypeId):
					return (T) (object) str.Type;
				case DDLFullString str when typeof(T) == typeof(RivetAssetId):
					return (T) (object) str.Asset;
				case null:
					break;
				default:
					return (T) Convert.ChangeType(field.Value[index], typeof(T))!;
			}
		}

		return defaultValue;
	}

	public string? GetString(uint id, int index = 0) {
		if (TryGetValue(id, out var field) && field.Value.Count > index && field.Value[index] is { } value) {
			return value.ToString();
		}

		return null;
	}

	public object? GetField(uint id, int index = 0) {
		if (TryGetValue(id, out var field) && field.Value.Count > index && field.Value[index] is { } value) {
			return value;
		}

		return null;
	}

	public T? GetObject<T>(uint id, int index = 0) where T : DDLObjectType, IDDLObjectType<T> {
		if (TryGetValue(id, out var field) && field.Value.Count > index && field.Value[index] is { } selectedValue) {
			if (selectedValue is DDLObject value) {
				if (value.Count == 2 && DDLPolymorphicObject.Check(value)) {
					var poly = DDLPolymorphicObject.Create(value);

					if (TypeRegistration.TryGetValue(poly.Type, out var subType)) {
						var polyType = PolymorphicCreate(subType, poly);
						if (polyType is T correctPolyType) {
							return correctPolyType;
						}

						Log.Warning("Tried to cast a substruct to an invalid type: {SubType} is not valid for {AssumedType}", subType.Name, typeof(T).Name);
					}

					return T.Create(poly.Object);
				}

				return T.Create(value);
			}

			Log.Warning("Value {Id} exists but is an invalid type: Expected DDLObject but was {T}", id, selectedValue.GetType().Name);
		}

		return null;
	}

	public T GetEnum<T>(uint id, Dictionary<uint, T> enumValues, T defaultValue = default, int fieldIndex = 0) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > fieldIndex && field.Value[fieldIndex] is { } selectedValue) {
			if (selectedValue is DDLFullString value) {
				return enumValues.GetValueOrDefault(value.Type, defaultValue);
			}

			Log.Warning("Value {Id} exists but is an invalid type: Expected String but was {T}", id, selectedValue.GetType().Name);
		}

		return defaultValue;
	}

	public T GetBitset<T>(uint id, Dictionary<uint, T> enumValues, T defaultValue = default) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is { } primaryValue) {
			if (primaryValue is DDLFullString) {
				var bitset = 0ul;

				foreach (var value in field.Value) {
					bitset |= Convert.ToUInt32(enumValues.GetValueOrDefault(((DDLFullString) value!).Type));
				}

				return (T) Enum.ToObject(typeof(T), bitset);
			}

			Log.Warning("Value {Id} exists but is an invalid type: Expected String but was {T}", id, primaryValue.GetType().Name);
		}

		return defaultValue;
	}

	public List<T> GetValues<T>(uint id, List<T> defaultValue) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is not null) {
			var list = new List<T>(field.Value.Count);
			for (var index = 0; index < field.Value.Count; index++) {
				switch (field.Value[index]) {
					case T value:
						list.Add(value);
						break;
					case ulong u when typeof(T) == typeof(RivetAssetId):
						list.Add((T) (object) u);
						break;
					case uint u when typeof(T) == typeof(RivetTypeId):
						list.Add((T) (object) u);
						break;
					case DDLFullString str when typeof(T) == typeof(RivetTypeId):
						list.Add((T) (object) str.Type);
						break;
					case DDLFullString str when typeof(T) == typeof(RivetAssetId):
						list.Add((T) (object) str.Asset);
						break;
					default:
						list.Add((T) Convert.ChangeType(field.Value[index], typeof(T))!);
						break;
				}
			}

			return list;
		}

		return defaultValue;
	}

	public List<string?> GetStrings(uint id, List<string?> defaultValue) {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is not null) {
			var list = new List<string?>(field.Value.Count);
			list.AddRange(field.Value.Select(x => x!.ToString()));
			return list;
		}

		return defaultValue;
	}

	public List<object?> GetFields(uint id) {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is not null) {
			return field.Value;
		}

		return [];
	}

	public List<T?> GetObjects<T>(uint id) where T : DDLObjectType, IDDLObjectType<T> {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is { } primaryValue) {
			if (primaryValue is DDLObject) {
				var list = new List<T?>(field.Value.Count);
				foreach (var value in field.Value.Cast<DDLObject>()) {
					if (value.Count == 2 && DDLPolymorphicObject.Check(value)) {
						var poly = DDLPolymorphicObject.Create(value);

						if (TypeRegistration.TryGetValue(poly.Type, out var subType) && PolymorphicCreate(subType, poly) is T polyValue) {
							list.Add(polyValue);
						} else {
							list.Add(T.Create(poly.Object));
						}
					} else {
						list.Add(T.Create(value));
					}
				}

				return list;
			}

			Log.Warning("Value {Id} exists but is an invalid type: Expected DDLObject but was {T}", id, primaryValue.GetType().Name);
		}

		return [];
	}

	public List<T> GetEnums<T>(uint id, Dictionary<uint, T> enumValues) where T : struct {
		if (TryGetValue(id, out var field) && field.Value.Count > 0 && field.Value[0] is { } primaryValue) {
			if (primaryValue is DDLFullString) {
				var list = new List<T>(field.Value.Count);

				foreach (var value in field.Value) {
					list.Add(enumValues.GetValueOrDefault(((DDLFullString) value!).Type));
				}

				return list;
			}

			Log.Warning("Value {Id} exists but is an invalid type: Expected String but was {T}", id, primaryValue.GetType().Name);
		}

		return [];
	}

	public Dictionary<TKey, TValue?> GetDictionary<TKey, TValue>(uint id, Func<string, TKey> keyVisitor, Func<uint, DDLObject, TValue?> valueVisitor) where TKey : notnull {
		if (GetField(id) is not DDLObject ddl) {
			return [];
		}

		var result = new Dictionary<TKey, TValue?>();

		foreach (var (_, value) in ddl) {
			result[keyVisitor(value.Name)] = valueVisitor(value.Id, ddl);
		}

		return result;
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

	private delegate DDLObjectType? CreateDelegate(Type T, DDLPolymorphicObject instance);
}

public static class DDLMapTypeHandler {
	public static bool VisitBool(string value) => bool.TryParse(value, out var result) ? result : default;
	public static string VisitString(string value) => value;
	public static byte VisitByte(string value) => byte.TryParse(value, NumberStyles.Integer, null, out var result) ? result : default;
	public static sbyte VisitSByte(string value) => sbyte.TryParse(value, NumberStyles.Integer, null, out var result) ? result : default;
	public static ushort VisitUShort(string value) => ushort.TryParse(value, NumberStyles.Integer, null, out var result) ? result : default;
	public static short VisitShort(string value) => short.TryParse(value, NumberStyles.Integer, null, out var result) ? result : default;
	public static uint VisitUInt(string value) => uint.TryParse(value, NumberStyles.Integer, null, out var result) ? result : default;
	public static int VisitInt(string value) => int.TryParse(value, NumberStyles.Integer, null, out var result) ? result : default;
	public static ulong VisitULong(string value) => ulong.TryParse(value, NumberStyles.Integer, null, out var result) ? result : default;
	public static long VisitLong(string value) => long.TryParse(value, NumberStyles.Integer, null, out var result) ? result : default;
	public static float VisitFloat(string value) => float.TryParse(value, NumberStyles.Float, null, out var result) ? result : default;
	public static double VisitDouble(string value) => double.TryParse(value, NumberStyles.Float, null, out var result) ? result : default;
	public static RivetTypeId VisitRivetTypeId(string value) => new(VisitUInt(value));
	public static RivetAssetId VisitRivetAssetId(string value) => ulong.TryParse(value, NumberStyles.Integer, null, out var result) ? new RivetAssetId(result) : RivetAssetId.FromString(RivetAssetId.NormalizeString(value));
}

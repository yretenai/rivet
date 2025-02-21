// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.Text;
using System.Text.Json;
using Rivet.DDL.Generator.Structs;
using Serilog;

namespace Rivet.DDL.Generator;

[SuppressMessage("ReSharper", "ArrangeObjectCreationWhenTypeNotEvident")]
internal class Program {
	private static JsonSerializerOptions Options { get; } = new() {
		PropertyNameCaseInsensitive = true,
		PropertyNamingPolicy = JsonNamingPolicy.SnakeCaseLower,
	};

	private static void Main(string[] args) {
		if (args.Length < 2) {
			Console.WriteLine($"Usage: {AppDomain.CurrentDomain.FriendlyName} path/to/ddl.json path/to/ddl");
			return;
		}

		Log.Logger = new LoggerConfiguration().WriteTo.Console().CreateLogger();

		using var stream = new FileStream(args[0], FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
		var registry = JsonSerializer.Deserialize<DDLRegistry>(stream, Options)!;

		foreach (var value in registry.Types) {
			if (value.Name!.StartsWith("WWise")) {
				value.Name = $"WwiseAudio{value.Name[5..]}";
			}
		}

		Log.Information("Permutating strings...");
		var nameLookup = new Dictionary<uint, string>();
		PermutateNames(registry, nameLookup);

		Log.Information("Generating enums...");
		foreach (var value in registry.Enums) {
			GenerateEnum(nameLookup, value, Path.Combine(args[1], "Enums"));
		}

		Log.Information("Generating bitsets...");
		foreach (var value in registry.Bitsets) {
			GenerateBitset(nameLookup, value, Path.Combine(args[1], "Enums"));
		}

		Log.Information("Generating structs...");
		var roots = registry.Roots.Where(x => x.Parent != null).GroupBy(x => x.Parent!.Id).ToDictionary(x => x.Key, x => x.ToList());
		var typeMap = registry.Types.ToDictionary(x => x.Id, x => x);
		var enumMap = registry.Enums.ToDictionary(x => x.Id, x => x);
		foreach (var value in registry.Types) {
			GenerateStruct(nameLookup, value, roots, typeMap, enumMap, Path.Combine(args[1], "Types"));
		}
	}

	private static void PermutateNames(DDLRegistry registry, Dictionary<uint, string> nameLookup) {
		var nameCache = new HashSet<string>();
		foreach (var value in registry.Types) {
			PermutateName(nameLookup, value.Name);
			foreach (var field in value.Fields) {
				PermutateName(nameLookup, field.Name);
				foreach (var part in field.Label?.Split(' ', StringSplitOptions.TrimEntries | StringSplitOptions.RemoveEmptyEntries) ?? []) {
					if (nameCache.Add(part)) {
						PermutateName(nameLookup, part);
					}
				}

				foreach (var part in field.DisplayLabel?.Split(' ', StringSplitOptions.TrimEntries | StringSplitOptions.RemoveEmptyEntries) ?? []) {
					if (nameCache.Add(part)) {
						PermutateName(nameLookup, part);
					}
				}

				foreach (var part in field.Description?.Split(' ', StringSplitOptions.TrimEntries | StringSplitOptions.RemoveEmptyEntries) ?? []) {
					if (nameCache.Add(part)) {
						PermutateName(nameLookup, part);
					}
				}
			}
		}

		foreach (var value in registry.Enums) {
			foreach (var field in value.Values) {
				PermutateName(nameLookup, field.Name);
				foreach (var part in field.Label?.Split(' ', StringSplitOptions.TrimEntries | StringSplitOptions.RemoveEmptyEntries) ?? []) {
					if (nameCache.Add(part)) {
						PermutateName(nameLookup, part);
					}
				}

				foreach (var part in field.Description?.Split(' ', StringSplitOptions.TrimEntries | StringSplitOptions.RemoveEmptyEntries) ?? []) {
					if (nameCache.Add(part)) {
						PermutateName(nameLookup, part);
					}
				}
			}
		}

		foreach (var value in registry.Bitsets) {
			foreach (var field in value.Values) {
				PermutateName(nameLookup, field.Name);
			}
		}
	}

	private static void PermutateName(Dictionary<uint, string> lookup, string? name) {
		PermutateName(lookup, name, string.Empty);
		foreach (var str in new[] { "Enum", "Value", "Flag", "Bit", "Bitset", "Bitfield", "Select", "Option", "State", "Game", "Save", "Dev", "DevGame" }) {
			PermutateName(lookup, name, str);
			PermutateName(lookup, name, str + "s");
		}
	}

	private static void PermutateName(Dictionary<uint, string> lookup, string? name, string suffix) {
		if (string.IsNullOrEmpty(name)) {
			return;
		}

		lookup[RivetTypeId.Checksum(name + suffix)] = name + suffix;
		lookup[RivetTypeId.Checksum(name + "s" + suffix)] = name + "s" + suffix;
		lookup[RivetTypeId.Checksum(name + "es" + suffix)] = name + "es" + suffix;
		lookup[RivetTypeId.Checksum(name[^1..] + "ies" + suffix)] = name[^1..] + "ies" + suffix;
		lookup[RivetTypeId.Checksum(name[^1..] + suffix)] = name[^1..] + suffix;
	}

	private static void GenerateEnum(Dictionary<uint, string> lookup, DDLEnum value, string path) {
		Directory.CreateDirectory(path);

		if (!lookup.TryGetValue(value.Id, out var name) && !lookup.TryGetValue(value.Id2, out name)) {
			name = $"x{value.Id:x8}";
		}

		name = name.Strip();

		value.Name = name;
		Log.Information("Writing {Name}", name);

		var fields = new StringBuilder();
		var fwdlookup = new StringBuilder();
		var revLookup = new StringBuilder();
		foreach (var field in value.Values) {
			var label = string.Empty;
			var descriptionPrefix = "description: ";

			var fieldLabel = field.Label.Strip();
			if (!string.IsNullOrWhiteSpace(fieldLabel)) {
				label = DDLTemplate.Format(DDLTemplate.LabelAttributeField, new() {
					["label"] = fieldLabel,
					["type"] = string.Empty,
				});
				descriptionPrefix = string.Empty;
			}

			var fieldDescription = field.Description.Strip();
			if (!string.IsNullOrWhiteSpace(fieldDescription)) {
				label += DDLTemplate.Format(DDLTemplate.LabelAttributeField, new() {
					["label"] = fieldDescription,
					["type"] = descriptionPrefix,
				});
			}

			fields.AppendLine(DDLTemplate.Format(EnumTemplate.EnumField, new() {
				["name"] = field.Name!.Sanitize(),
				["hash"] = field.Id,
				["attribute"] = DDLTemplate.Format(DDLTemplate.RegistrationAttribute, new() {
					["hash"] = field.Id,
					["label"] = label,
				}),
			}));
			var lookupDict = new Dictionary<string, object> {
				["name"] = field.Name!,
				["enum-name"] = name,
				["hash"] = field.Id,
				["field-name"] = field.Name!.Sanitize(),
			};
			fwdlookup.AppendLine(DDLTemplate.Format(EnumTemplate.LookupEntry, lookupDict));
			revLookup.AppendLine(DDLTemplate.Format(EnumTemplate.ReverseLookupEntry, lookupDict));
		}

		var target = Path.Combine(path, $"{name}.cs");
		using var stream = new FileStream(target, FileMode.Create, FileAccess.Write, FileShare.ReadWrite);
		using var writer = new StreamWriter(stream);
		writer.NewLine = "\n";

		writer.WriteLine(DDLTemplate.Format(DDLTemplate.Header, new() {
			["type"] = "Enums",
		}));

		writer.WriteLine(DDLTemplate.Format(EnumTemplate.EnumBody, new() {
			["name"] = name,
			["body"] = fields.ToString().ReplaceLineEndings("\n").Trim(),
			["flags"] = string.Empty,
			["hash"] = value.Id,
			["lookup"] = fwdlookup.ToString().ReplaceLineEndings("\n").Trim(),
			["reverse-lookup"] = revLookup.ToString().ReplaceLineEndings("\n").Trim(),
			["attribute"] = DDLTemplate.Format(DDLTemplate.RegistrationAttribute, new() {
				["hash"] = value.Id,
				["label"] = string.Empty,
			}),
		}));
	}

	private static void GenerateBitset(Dictionary<uint, string> lookup, DDLBitset value, string path) {
		Directory.CreateDirectory(path);

		if (!lookup.TryGetValue(value.Id, out var name)) {
			name = $"x{value.Id:x8}";
		}

		name = name.Strip();

		value.Name = name;
		Log.Information("Writing {Name}", name);

		var fields = new StringBuilder();
		var fwdlookup = new StringBuilder();
		var revLookup = new StringBuilder();
		foreach (var field in value.Values) {
			fields.AppendLine(DDLTemplate.Format(EnumTemplate.BitsetField, new() {
				["name"] = field.Name!.Sanitize(),
				["hash"] = field.Id,
				["value"] = field.Value,
				["attribute"] = DDLTemplate.Format(DDLTemplate.RegistrationAttribute, new() {
					["hash"] = field.Id,
					["label"] = string.Empty,
				}),
			}));

			var lookupDict = new Dictionary<string, object> {
				["name"] = field.Name!,
				["enum-name"] = name,
				["hash"] = field.Id,
				["field-name"] = field.Name!.Sanitize(),
			};
			fwdlookup.AppendLine(DDLTemplate.Format(EnumTemplate.LookupEntry, lookupDict));
			revLookup.AppendLine(DDLTemplate.Format(EnumTemplate.ReverseLookupEntry, lookupDict));
		}

		var target = Path.Combine(path, $"{name}.cs");
		using var stream = new FileStream(target, FileMode.Create, FileAccess.Write, FileShare.ReadWrite);
		using var writer = new StreamWriter(stream);
		writer.NewLine = "\n";

		writer.WriteLine(DDLTemplate.Format(DDLTemplate.Header, new() {
			["type"] = "Enums",
		}));

		writer.WriteLine(DDLTemplate.Format(EnumTemplate.EnumBody, new() {
			["name"] = name,
			["body"] = fields.ToString().ReplaceLineEndings("\n").Trim(),
			["flags"] = EnumTemplate.BitsetFlags,
			["hash"] = value.Id,
			["lookup"] = fwdlookup.ToString().ReplaceLineEndings("\n").Trim(),
			["reverse-lookup"] = revLookup.ToString().ReplaceLineEndings("\n").Trim(),
			["attribute"] = DDLTemplate.Format(DDLTemplate.RegistrationAttribute, new() {
				["hash"] = value.Id,
				["label"] = string.Empty,
			}),
		}));
	}

	private static void GenerateStruct(Dictionary<uint, string> nameLookup, DDLType value, Dictionary<uint, List<DDLTypeRef>> rootLookup, Dictionary<uint, DDLType> typeMap, Dictionary<uint, DDLEnum> enumMap, string path) {
		Directory.CreateDirectory(path);

		var attribute = DDLTemplate.Format(DDLTemplate.RegistrationAttribute, new() {
			["hash"] = value.Id,
			["label"] = string.Empty,
		});

		if (rootLookup.TryGetValue(value.Id, out var roots)) {
			foreach (var root in roots) {
				attribute = DDLTemplate.Format(DDLTemplate.RootAttribute, new() {
					["hash"] = root.Id,
					["label"] = root.Name.Strip(),
				}) + attribute;
			}
		}

		if (value.Id == 0x4d4b74f2u) {
			value.ParentId = 0xaed4bb1fu; // ?!
		}

		var name = value.Name!.Sanitize();
		var baseName = value.ParentId == 0 ? "DDLObjectType" : nameLookup[value.ParentId].Sanitize();

		var initBody = new StringBuilder();
		var fieldBody = new StringBuilder();

		var parentFields = new HashSet<uint>();
		var parentId = value.ParentId;
		while (parentId != 0) {
			var parent = typeMap[parentId];
			parentFields.UnionWith(parent.Fields.Select(x => x.Id));
			parentId = parent.ParentId;
		}

		foreach (var field in value.Fields) {
			if (parentFields.Contains(field.Id)) {
				continue;
			}

			field.Name = field.Id switch {
				             0x1919b90eu => "AssetDocument",
				             0x927eba20u => "Collections",
				             _ => field.Name,
			             };

			var type = field.Type switch {
				           DDLTypeKind.Struct => typeMap[field.TypeId].Name!.Sanitize() + "?",
				           DDLTypeKind.Bitfield => nameLookup.GetValueOrDefault(field.TypeId)?.Sanitize() ?? $"x{field.TypeId:x8}",
				           DDLTypeKind.Enum => nameLookup.GetValueOrDefault(field.EnumTypeId)?.Sanitize() ?? nameLookup.GetValueOrDefault(field.TypeId)?.Sanitize() ?? $"x{field.EnumTypeId:x8}",
				           _ => DDLTemplate.TypeMapping[field.Type],
			           };

			var defaultValue = field.ArrayType switch {
				                   DDLArrayKind.None => "default",
				                   _ => "[]",
			                   };

			if (field.Default.HasValue && field.Default.Value.ValueKind is not JsonValueKind.Null) {
				var defaultField = field.Default.Value;
				defaultValue = JsonToTemplateValue(enumMap, defaultField, field, type);
			}

			var label = string.Empty;
			var descriptionPrefix = "description: ";

			var fieldLabel = field.Label.Strip();
			if (!string.IsNullOrWhiteSpace(fieldLabel)) {
				label = DDLTemplate.Format(DDLTemplate.LabelAttributeField, new() {
					["label"] = fieldLabel,
					["type"] = string.Empty,
				});
				descriptionPrefix = string.Empty;
			}

			var fieldDescription = field.Description.Strip();
			if (!string.IsNullOrWhiteSpace(fieldDescription)) {
				label += DDLTemplate.Format(DDLTemplate.LabelAttributeField, new() {
					["label"] = fieldDescription,
					["type"] = descriptionPrefix,
				});
			}

			fieldBody.AppendLine(DDLTemplate.Format(DDLTemplate.DDLField, new() {
				["type"] = DDLTemplate.Format(DDLTemplate.ArrayMapping[field.ArrayType], new() {
					["size"] = field.FixedSize,
					["type"] = type,
					["map-type"] = DDLTemplate.TypeMapping[field.MapType].Replace("?", "", StringComparison.Ordinal),
				}),
				["name"] = field.Name!.Sanitize(),
				["default"] = defaultValue,
				["attribute"] = DDLTemplate.Format(DDLTemplate.RegistrationAttribute, new() {
					["hash"] = field.Id,
					["label"] = label,
				}),
			}));

			string? initTemplate;
			var visitor = string.Empty;
			var keyHandler = string.Empty;
			if (field.ArrayType == DDLArrayKind.Map) {
				initTemplate = DDLTemplate.MapReader;
				visitor = DDLTemplate.Format(DDLTemplate.DictionaryReaderMapping.GetValueOrDefault(field.Type, DDLTemplate.DefaultMapReader), new() {
					["type"] = type.Replace("?", "", StringComparison.Ordinal),
				});
				keyHandler = DDLTemplate.Format(DDLTemplate.DefaultMapKeyHandler, new() {
					["type"] = DDLTemplate.MapTypeMapping[field.MapType],
				});
			} else if (field.ArrayType != DDLArrayKind.None) {
				initTemplate = DDLTemplate.ArrayReaderMapping.GetValueOrDefault(field.Type, DDLTemplate.DefaultArrayReader);
			} else {
				initTemplate = DDLTemplate.ReaderMapping.GetValueOrDefault(field.Type, DDLTemplate.DefaultReader);
			}

			if (!string.IsNullOrEmpty(initTemplate)) {
				initBody.AppendLine(DDLTemplate.Format(DDLTemplate.DDLInit, new() {
					["name"] = field.Name!.Sanitize(),
					["method"] = DDLTemplate.Format(initTemplate, new() {
						["type"] = type.Replace("?", "", StringComparison.Ordinal),
						["map-type"] = DDLTemplate.TypeMapping[field.MapType].Replace("?", "", StringComparison.Ordinal),
						["key-handler"] = keyHandler,
						["visitor"] = visitor,
						["hash"] = field.Id,
						["name"] = field.Name!.Sanitize(),
					}),
				}));
			}
		}

		var target = Path.Combine(path, $"{name}.cs");
		using var stream = new FileStream(target, FileMode.Create, FileAccess.Write, FileShare.ReadWrite);
		using var writer = new StreamWriter(stream);
		writer.NewLine = "\n";

		writer.WriteLine(DDLTemplate.Format(DDLTemplate.Header, new() {
			["type"] = "Types",
		}));

		writer.WriteLine(DDLTemplate.Format(DDLTemplate.DDLBody, new() {
			["name"] = name,
			["new"] = value.ParentId == 0 ? string.Empty : "new ",
			["base-name"] = baseName,
			["hash"] = value.Id,
			["init-body"] = initBody.ToString().ReplaceLineEndings("\n").Trim(),
			["field-body"] = fieldBody.ToString().ReplaceLineEndings("\n").Trim(),
			["attribute"] = attribute,
		}).Fixup());
	}

	private static string JsonToTemplateValue(Dictionary<uint, DDLEnum> enumMap, JsonElement defaultField, DDLTypeField field, string type) {
		switch (defaultField.ValueKind) {
			case JsonValueKind.Object: {
				var defaultValue = $"\"{defaultField.GetProperty("value").ToString().Replace(@"\", "/", StringComparison.Ordinal).Strip()}\"";

				return field.Type is DDLTypeKind.Asset or DDLTypeKind.Identifier ? $"new RivetAssetId.FromString({defaultValue})" : defaultValue;
			}
			case JsonValueKind.Number: {
				return field.Type switch {
					       DDLTypeKind.UInt8 => "0x" + defaultField.GetByte().ToString("x2"),
					       DDLTypeKind.UInt16 => "0x" + defaultField.GetUInt16().ToString("x4"),
					       DDLTypeKind.UInt32 => "0x" + defaultField.GetUInt32().ToString("x8"),
					       DDLTypeKind.UInt64 => "0x" + defaultField.GetUInt64().ToString("x16"),
					       DDLTypeKind.Identifier or DDLTypeKind.Asset => $"new RivetAssetId(0x{defaultField.GetUInt64():x16})",
					       DDLTypeKind.Int8 => defaultField.GetSByte().ToString("D"),
					       DDLTypeKind.Int16 => defaultField.GetInt16().ToString("D"),
					       DDLTypeKind.Int32 => defaultField.GetInt32().ToString("D"),
					       DDLTypeKind.Int64 => defaultField.GetInt64().ToString("D"),
					       DDLTypeKind.Float => defaultField.GetSingle().ToString("F", CultureInfo.InvariantCulture) + "f",
					       DDLTypeKind.Double => defaultField.GetDouble().ToString("F", CultureInfo.InvariantCulture) + "d",
					       DDLTypeKind.Enum => $"{type}.{enumMap[field.EnumTypeId].Values[defaultField.GetInt32()].Name!.Sanitize()}",
					       DDLTypeKind.Bitfield => $"({type}) 0x{defaultField.GetUInt32():x8}",
					       _ => throw new NotSupportedException(),
				       };
			}
			case JsonValueKind.True or JsonValueKind.False: {
				return defaultField.ToString().ToLower();
			}
			case JsonValueKind.Array when field.ArrayType is DDLArrayKind.Map: {
				var result = "{";
				foreach (var entry in defaultField.EnumerateArray()) {
					result += "[" + JsonToTemplateValue(enumMap, entry.GetProperty("key"), field with {
						Type = field.MapType,
					}, type) + "] = ";
					result += JsonToTemplateValue(enumMap, entry.GetProperty("value"), field, type) + ",";
				}

				return result + "}";
			}
			case JsonValueKind.Array: {
				var result = "[";
				var index = 0;
				foreach (var entry in defaultField.EnumerateArray()) {
					if (index++ > 0) {
						result += ", ";
					}

					result += JsonToTemplateValue(enumMap, entry, field, type);
				}

				return result + "]";
			}
			case JsonValueKind.Null: {
				return "default";
			}
			default:
				return defaultField.ToString();
		}
	}
}

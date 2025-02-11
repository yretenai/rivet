// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

using System.Diagnostics.CodeAnalysis;
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

		value.Name = name;
		Log.Information("Writing {Name}", name);

		var target = Path.Combine(path, $"{name}.cs");
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
				["attribute"] = DDLTemplate.Format(DDLTemplate.FieldAttribute, new() {
					["hash"] = field.Id,
					["label"] = label,
				})
			}));
			var lookupDict = new Dictionary<string, object>() {
				["name"] = field.Name!,
				["enum-name"] = name,
				["hash"] = field.Id,
				["field-name"] = field.Name!.Sanitize(),
			};
			fwdlookup.AppendLine(DDLTemplate.Format(EnumTemplate.LookupEntry, lookupDict));
			revLookup.AppendLine(DDLTemplate.Format(EnumTemplate.ReverseLookupEntry, lookupDict));
		}

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
		}));
	}

	private static void GenerateBitset(Dictionary<uint, string> lookup, DDLBitset value, string path) {
		Directory.CreateDirectory(path);

		if (!lookup.TryGetValue(value.Id, out var name)) {
			name = $"x{value.Id:x8}";
		}

		value.Name = name;
		Log.Information("Writing {Name}", name);

		var target = Path.Combine(path, $"{name}.cs");
		var fields = new StringBuilder();
		var fwdlookup = new StringBuilder();
		var revLookup = new StringBuilder();
		foreach (var field in value.Values) {
			fields.AppendLine(DDLTemplate.Format(EnumTemplate.BitsetField, new() {
				["name"] = field.Name!.Sanitize(),
				["hash"] = field.Id,
				["value"] = field.Value,
				["attribute"] = DDLTemplate.Format(DDLTemplate.FieldAttribute, new() {
					["hash"] = field.Id,
					["label"] = string.Empty,
				}),
			}));

			var lookupDict = new Dictionary<string, object>() {
				["name"] = field.Name!,
				["enum-name"] = name,
				["hash"] = field.Id,
				["field-name"] = field.Name!.Sanitize(),
			};
			fwdlookup.AppendLine(DDLTemplate.Format(EnumTemplate.LookupEntry, lookupDict));
			revLookup.AppendLine(DDLTemplate.Format(EnumTemplate.ReverseLookupEntry, lookupDict));
		}

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
		}));
	}
}

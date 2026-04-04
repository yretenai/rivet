// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using System.Text.Json;
using System.Text.Json.Serialization;

namespace Rivet.DDL.Generator.Structs;

[JsonSourceGenerationOptions(JsonSerializerDefaults.General, PropertyNamingPolicy = JsonKnownNamingPolicy.SnakeCaseLower, UseStringEnumConverter = true), JsonSerializable(typeof(DDLRegistry))]
public partial class DDLRegistrySerializerContext : JsonSerializerContext;

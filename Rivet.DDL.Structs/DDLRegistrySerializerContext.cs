using System.Text.Json;
using System.Text.Json.Serialization;

namespace Rivet.DDL.Structs;

[JsonSourceGenerationOptions(JsonSerializerDefaults.General, PropertyNamingPolicy = JsonKnownNamingPolicy.SnakeCaseLower, UseStringEnumConverter = true), JsonSerializable(typeof(DDLRegistry))]
public partial class DDLRegistrySerializerContext : JsonSerializerContext;

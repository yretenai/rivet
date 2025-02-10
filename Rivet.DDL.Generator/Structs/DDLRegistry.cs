namespace Rivet.DDL.Generator.Structs;

public record DDLRegistry {
	public HashSet<DDLEnum> Enums { get; set; } = [];
	public HashSet<DDLBitset> Bitsets { get; set; } = [];
	public HashSet<DDLTypeRef> Roots { get; set; } = [];
	public HashSet<DDLType> Types { get; set; } = [];
}

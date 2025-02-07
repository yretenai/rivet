namespace Rivet.DDL.Structs;

public class DDLEnum {
	public uint Id { get; set; }
	public uint Id2 { get; set; }
	public List<DDLEnumValue> Values { get; set; } = [];

	public override int GetHashCode() => (int) Id;
}

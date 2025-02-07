namespace Rivet.DDL.Structs;

public class DDLBitset {
	public uint Id { get; set; }
	public List<DDLBitsetValue> Values { get; set; } = [];

	public override int GetHashCode() => (int) Id;
}

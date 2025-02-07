namespace Rivet.DDL.Structs;

public class DDLBitsetValue {
	public uint Id { get; set; }
	public string? Name { get; set; }
	public uint Value { get; set; }

	public override int GetHashCode() => (int) Id;
}

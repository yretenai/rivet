namespace Rivet.Models.Data;

public record DDLField(RivetTypeId Id, string Name, List<object?> Value) {
	public override string ToString() => $"{Name} = {Value.ElementAtOrDefault(0) ?? "None"}";
}

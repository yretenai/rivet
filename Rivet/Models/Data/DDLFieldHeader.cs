namespace Rivet.Models.Data;

public record struct DDLFieldHeader {
	public RivetTypeId Id { get; set; }
	public uint Meta { get; set; }

	public int Count => (int) ((Meta >> 4) & 0xFFFFF);
	public DDLTypeKind Type => (DDLTypeKind) (Meta >> 24);
	public DDLArrayKind ArrayType => (DDLArrayKind) (Meta & 0xF);
}
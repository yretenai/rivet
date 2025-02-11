using Rivet.Models;

namespace Rivet.DDL;

public class DDLPolymorphicObject : DDLObjectType, IDDLObjectType<DDLPolymorphicObject> {
	public DDLPolymorphicObject(DDLObject ddl) {
		Object = (DDLObject) ddl.GetField(0x6c33fda5)!;
		Type = ddl.GetString(0xbc4e9799)!;
		ObjectType = RivetTypeId.FromString(Type);
	}

	public DDLPolymorphicObject() { }

	public string Type { get; set; } = string.Empty;
	public RivetTypeId ObjectType { get; set; } = RivetTypeId.Basis;
	public DDLObject Object { get; set; } = new();
	public static RivetTypeId TypeId => RivetTypeId.Basis;

	public static DDLPolymorphicObject Create(DDLObject ddl) => new(ddl);

	public T? CreatePolymorphic<T>() where T : DDLObjectType, IDDLObjectType<T> {
		if (string.IsNullOrEmpty(Type)) {
			return null;
		}

		return ObjectType != T.TypeId ? null : T.Create(Object);
	}

	public static bool Check(DDLObject value) => value.ContainsKey(0x6c33fda5) && value.ContainsKey(0xbc4e9799);
}

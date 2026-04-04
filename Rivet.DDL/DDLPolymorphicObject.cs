// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.IO;

namespace Rivet.DDL;

public class DDLPolymorphicObject : DDLObjectType, IDDLObjectType<DDLPolymorphicObject> {
	public DDLPolymorphicObject(DDLObject ddl) {
		Object = (DDLObject) ddl.GetField(0x6c33fda5)!;
		Type = ddl.GetValue<RivetTypeId>(0xbc4e9799);
	}

	public DDLPolymorphicObject() { }

	public RivetTypeId Type { get; set; } = RivetTypeId.Basis;
	public DDLObject Object { get; set; } = new();
	public static RivetTypeId TypeId => RivetTypeId.Basis;

	public static DDLPolymorphicObject Create(DDLObject ddl) => new(ddl);

	public T? CreatePolymorphic<T>() where T : DDLObjectType, IDDLObjectType<T> => Type != T.TypeId ? null : T.Create(Object);

	public static bool Check(DDLObject value) => value.ContainsKey(0x6c33fda5) && value.ContainsKey(0xbc4e9799);
}

// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

using Rivet.IO;

namespace Rivet.DDL;

public interface IDDLObjectType<out T> where T : DDLObjectType {
	public static abstract RivetTypeId TypeId { get; }
	public static abstract T Create(DDLObject ddl);
}

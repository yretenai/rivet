// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL;

public interface IDDLObjectType<out T> where T : DDLObjectType {
	public static abstract T Create(IDDLObject ddl);
}

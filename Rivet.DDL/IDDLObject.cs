// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

namespace Rivet.DDL;

public interface IDDLObject {
	public T GetValue<T>(uint id, T defaultValue = default!, int index = 0);
	public T GetObject<T>(uint id, T defaultValue = default!, int index = 0) where T : DDLObjectType, IDDLObjectType<T>;
	public T GetEnumValue<T>(uint id, Dictionary<uint, T> enumValues, T defaultValue = default, int fieldIndex = 0) where T : struct;
	public T GetBitset<T>(uint id, Dictionary<uint, T> enumValues, T defaultValue = default) where T : struct;
	public List<T> GetValues<T>(uint id);
	public List<T> GetObjects<T>(uint id) where T : DDLObjectType, IDDLObjectType<T>;
	public List<T> GetEnumValues<T>(uint id, Dictionary<uint, T> enumValues) where T : struct;
}

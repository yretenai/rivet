// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptVarWatch.hpp>

namespace rivet::ddl::generated {
	ScriptVarWatch::ScriptVarWatch([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UniqueId = serialized->get_uint64(UniqueId_type_id);
		Id = serialized->get_uint64(Id_type_id);
		InstanceTuid = serialized->get_uint64(InstanceTuid_type_id);
		PropertyId = serialized->get_uint32(PropertyId_type_id);
		Sort = serialized->get_uint32(Sort_type_id);
		Name = serialized->get_string(Name_type_id);
		OriginalName = serialized->get_string(OriginalName_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::x36ed0644>(Type_type_id, rivet::ddl::generated::x36ed0644_values);
		Value = serialized->get_field(Value_type_id);
		GraphId = serialized->get_uint64(GraphId_type_id);
		ZoneId = serialized->get_uint64(ZoneId_type_id);
		Pinned = serialized->get_bool(Pinned_type_id); 
	}

	[[nodiscard]] auto
	ScriptVarWatch::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptVarWatch::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptVarWatch> {
		if (incoming_type_id == ScriptVarWatch::type_id) {
			return std::make_shared<ScriptVarWatch>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
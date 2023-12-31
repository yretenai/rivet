// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/CustomDesignEventActionPrius.hpp>

namespace rivet::ddl::generated {
	CustomDesignEventActionPrius::CustomDesignEventActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		EventName = serialized->get_string(EventName_type_id);
		Number = serialized->get_float(Number_type_id);
		Vector = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Vector_type_id);
		String = serialized->get_string(String_type_id);
		Actor = serialized->get_uint64(Actor_type_id);
		Bool = serialized->get_bool(Bool_type_id); 
	}

	[[nodiscard]] auto
	CustomDesignEventActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CustomDesignEventActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomDesignEventActionPrius> {
		if (incoming_type_id == CustomDesignEventActionPrius::type_id) {
			return std::make_shared<CustomDesignEventActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

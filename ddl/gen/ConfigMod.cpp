// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConfigMod.hpp>

namespace rivet::ddl::generated {
	ConfigMod::ConfigMod([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Variable = serialized->get_string(Variable_type_id);
		Op = serialized->get_enum<rivet::ddl::generated::x2d67b08a>(Op_type_id, rivet::ddl::generated::x2d67b08a_values);
		Value = serialized->get_float(Value_type_id);
		GroupId = serialized->get_int32(GroupId_type_id);
		ClassFlags = serialized->get_uint32(ClassFlags_type_id); 
	}

	[[nodiscard]] auto
	ConfigMod::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConfigMod::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConfigMod> {
		if (incoming_type_id == ConfigMod::type_id) {
			return std::make_shared<ConfigMod>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GateActionPrius.hpp>

namespace rivet::ddl::generated {
	GateActionPrius::GateActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		StartOpen = serialized->get_bool(StartOpen_type_id);
		AutoClose = serialized->get_uint32(AutoClose_type_id); 
	}

	[[nodiscard]] auto
	GateActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GateActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GateActionPrius> {
		if (incoming_type_id == GateActionPrius::type_id) {
			return std::make_shared<GateActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

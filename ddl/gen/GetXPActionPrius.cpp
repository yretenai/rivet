// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GetXPActionPrius.hpp>

namespace rivet::ddl::generated {
	GetXPActionPrius::GetXPActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		LevelValue = serialized->get_float(LevelValue_type_id);
		UseNeededXp = serialized->get_bool(UseNeededXp_type_id); 
	}

	[[nodiscard]] auto
	GetXPActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GetXPActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GetXPActionPrius> {
		if (incoming_type_id == GetXPActionPrius::type_id) {
			return std::make_shared<GetXPActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

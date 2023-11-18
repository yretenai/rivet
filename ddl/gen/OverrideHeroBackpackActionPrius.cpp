// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OverrideHeroBackpackActionPrius.hpp>

namespace rivet::ddl::generated {
	OverrideHeroBackpackActionPrius::OverrideHeroBackpackActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		HasBackpack = serialized->get_bool(HasBackpack_type_id);
		OverrideBackpackConfig = serialized->get_string(OverrideBackpackConfig_type_id);
		ClearOnZoneUnload = serialized->get_bool(ClearOnZoneUnload_type_id); 
	}

	[[nodiscard]] auto
	OverrideHeroBackpackActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OverrideHeroBackpackActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OverrideHeroBackpackActionPrius> {
		if (incoming_type_id == OverrideHeroBackpackActionPrius::type_id) {
			return std::make_shared<OverrideHeroBackpackActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

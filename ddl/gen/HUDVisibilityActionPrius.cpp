// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HUDVisibilityActionPrius.hpp>

namespace rivet::ddl::generated {
	HUDVisibilityActionPrius::HUDVisibilityActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		ComponentsChangedFlags = serialized->get_bitset<rivet::ddl::generated::x59818fe0>(ComponentsChangedFlags_type_id, rivet::ddl::generated::x59818fe0_values);
		OptionFlags = serialized->get_bitset<rivet::ddl::generated::x9976600e>(OptionFlags_type_id, rivet::ddl::generated::x9976600e_values); 
	}

	[[nodiscard]] auto
	HUDVisibilityActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HUDVisibilityActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HUDVisibilityActionPrius> {
		if (incoming_type_id == HUDVisibilityActionPrius::type_id) {
			return std::make_shared<HUDVisibilityActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IconMapHeroControl.hpp>

namespace rivet::ddl::generated {
	IconMapHeroControl::IconMapHeroControl([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): IconMapBase(serialized) {
		HeroControl = serialized->get_enum<rivet::ddl::generated::HeroControl>(HeroControl_type_id, rivet::ddl::generated::HeroControl_values); 
	}

	[[nodiscard]] auto
	IconMapHeroControl::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IconMapHeroControl::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapHeroControl> {
		if (incoming_type_id == IconMapHeroControl::type_id) {
			return std::make_shared<IconMapHeroControl>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
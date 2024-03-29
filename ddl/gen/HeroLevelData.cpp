// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroLevelData.hpp>

namespace rivet::ddl::generated {
	HeroLevelData::HeroLevelData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		XPForLevel = serialized->get_uint32(XPForLevel_type_id, 0u);
		Health = serialized->get_float(Health_type_id, 10.000000f); 
	}

	[[nodiscard]] auto
	HeroLevelData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroLevelData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroLevelData> {
		if (incoming_type_id == HeroLevelData::type_id) {
			return std::make_shared<HeroLevelData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

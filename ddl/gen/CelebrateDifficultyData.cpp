// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CelebrateDifficultyData.hpp>

namespace rivet::ddl::generated {
	CelebrateDifficultyData::CelebrateDifficultyData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Difficulty = serialized->get_enum<rivet::ddl::generated::xd2b2d773>(Difficulty_type_id, rivet::ddl::generated::xd2b2d773_values, rivet::ddl::generated::xd2b2d773::Easy);
		Cooldown = serialized->get_float(Cooldown_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	CelebrateDifficultyData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CelebrateDifficultyData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CelebrateDifficultyData> {
		if (incoming_type_id == CelebrateDifficultyData::type_id) {
			return std::make_shared<CelebrateDifficultyData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

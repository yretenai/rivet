// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIDifficultyData.hpp> 

#include <rivet/ddl/generated/UIDifficultyConfig.hpp>

namespace rivet::ddl::generated {
	UIDifficultyConfig::UIDifficultyConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		DifficultyLevelData = serialized->unwrap_into_many<rivet::ddl::generated::UIDifficultyData>(DifficultyLevelData_type_id);
		SuperEasyDifficultyData = serialized->unwrap_into<rivet::ddl::generated::UIDifficultyData>(SuperEasyDifficultyData_type_id);
		DefaultDifficultyID = serialized->get_enum<rivet::ddl::generated::xd2b2d773>(DefaultDifficultyID_type_id, rivet::ddl::generated::xd2b2d773_values); 
	}

	[[nodiscard]] auto
	UIDifficultyConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIDifficultyConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIDifficultyConfig> {
		if (incoming_type_id == UIDifficultyConfig::type_id) {
			return std::make_shared<UIDifficultyConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

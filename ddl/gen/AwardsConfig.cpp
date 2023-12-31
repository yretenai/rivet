// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AwardGroup.hpp> 

#include <rivet/ddl/generated/AwardsConfig.hpp>

namespace rivet::ddl::generated {
	AwardsConfig::AwardsConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		ImagePath = serialized->get_string(ImagePath_type_id);
		AwardGroups = serialized->unwrap_into_many<rivet::ddl::generated::AwardGroup>(AwardGroups_type_id); 
	}

	[[nodiscard]] auto
	AwardsConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AwardsConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwardsConfig> {
		if (incoming_type_id == AwardsConfig::type_id) {
			return std::make_shared<AwardsConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CrowdDensityTier.hpp> 

#include <rivet/ddl/generated/CrowdSpawnerTypeConfig.hpp>

namespace rivet::ddl::generated {
	CrowdSpawnerTypeConfig::CrowdSpawnerTypeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MemberModel = serialized->get_string(MemberModel_type_id);
		MinModelScale = serialized->get_float(MinModelScale_type_id);
		MaxModelScale = serialized->get_float(MaxModelScale_type_id);
		FadeTime = serialized->get_float(FadeTime_type_id);
		DensityTiers = serialized->unwrap_into_many<rivet::ddl::generated::CrowdDensityTier>(DensityTiers_type_id);
		DensityTiersPerfMode60 = serialized->unwrap_into_many<rivet::ddl::generated::CrowdDensityTier>(DensityTiersPerfMode60_type_id);
		DensityTiersPcMedium = serialized->unwrap_into_many<rivet::ddl::generated::CrowdDensityTier>(DensityTiersPcMedium_type_id);
		DensityTiersPcLow = serialized->unwrap_into_many<rivet::ddl::generated::CrowdDensityTier>(DensityTiersPcLow_type_id); 
	}

	auto
	CrowdSpawnerTypeConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	CrowdSpawnerTypeConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CrowdSpawnerTypeConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CrowdSpawnerTypeConfig> {
		if (incoming_type_id == CrowdSpawnerTypeConfig::type_id) {
			return std::make_shared<CrowdSpawnerTypeConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

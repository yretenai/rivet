// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityBundleSaveWeight.hpp>
#include <rivet/ddl/generated/RYNOPlanSaveWeight.hpp>
#include <rivet/ddl/generated/GoldBoltSaveWeight.hpp> 

#include <rivet/ddl/generated/SaveSystemConfig.hpp>

namespace rivet::ddl::generated {
	SaveSystemConfig::SaveSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		GoldenPathCategoryWeight = serialized->get_float(GoldenPathCategoryWeight_type_id, 60.000000);
		OptionalMissionCategoryWeight = serialized->get_float(OptionalMissionCategoryWeight_type_id, 25.000000);
		CollectiblesCategoryWeight = serialized->get_float(CollectiblesCategoryWeight_type_id, 15.000000);
		GoldBoltWeights = serialized->unwrap_into_many<rivet::ddl::generated::GoldBoltSaveWeight>(GoldBoltWeights_type_id);
		RYNOPlanWeights = serialized->unwrap_into_many<rivet::ddl::generated::RYNOPlanSaveWeight>(RYNOPlanWeights_type_id);
		VanityBundleWeights = serialized->unwrap_into_many<rivet::ddl::generated::VanityBundleSaveWeight>(VanityBundleWeights_type_id); 
	}

	[[nodiscard]] auto
	SaveSystemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SaveSystemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SaveSystemConfig> {
		if (incoming_type_id == SaveSystemConfig::type_id) {
			return std::make_shared<SaveSystemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

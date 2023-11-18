// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroEnemyHaloPrius.hpp>

namespace rivet::ddl::generated {
	HeroEnemyHaloPrius::HeroEnemyHaloPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxValidRange = serialized->get_float(MaxValidRange_type_id);
		TargetTypeMask = serialized->get_uint32(TargetTypeMask_type_id);
		DoStandardLOS = serialized->get_bool(DoStandardLOS_type_id);
		DoPathTest = serialized->get_bool(DoPathTest_type_id);
		TargetNeutral = serialized->get_bool(TargetNeutral_type_id);
		ForceSmallList = serialized->get_bool(ForceSmallList_type_id);
		TargetAnyAllegiance = serialized->get_bool(TargetAnyAllegiance_type_id); 
	}

	[[nodiscard]] auto
	HeroEnemyHaloPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroEnemyHaloPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroEnemyHaloPrius> {
		if (incoming_type_id == HeroEnemyHaloPrius::type_id) {
			return std::make_shared<HeroEnemyHaloPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

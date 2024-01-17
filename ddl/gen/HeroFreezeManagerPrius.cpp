// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroFreezeManagerPrius.hpp>

namespace rivet::ddl::generated {
	HeroFreezeManagerPrius::HeroFreezeManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxFreezePoints = serialized->get_float(MaxFreezePoints_type_id, 100.000000);
		FreezeLevel1Threshold = serialized->get_float(FreezeLevel1Threshold_type_id, 40.000000);
		FreezeLevel2Threshold = serialized->get_float(FreezeLevel2Threshold_type_id, 95.000000);
		FreezeDeathTime = serialized->get_float(FreezeDeathTime_type_id, 12.000000);
		FreezeDecayRate = serialized->get_float(FreezeDecayRate_type_id, 2.500000);
		FreezeHitAmount = serialized->get_float(FreezeHitAmount_type_id, 25.000000);
		ReFreezeLockoutTime = serialized->get_float(ReFreezeLockoutTime_type_id, 3.000000);
		Flags = serialized->get_bitset<rivet::ddl::generated::x3ebe0bf2>(Flags_type_id, rivet::ddl::generated::x3ebe0bf2_values, 0); 
	}

	[[nodiscard]] auto
	HeroFreezeManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroFreezeManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroFreezeManagerPrius> {
		if (incoming_type_id == HeroFreezeManagerPrius::type_id) {
			return std::make_shared<HeroFreezeManagerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

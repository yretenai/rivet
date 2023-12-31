// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AirplaneCrashPrius.hpp>

namespace rivet::ddl::generated {
	AirplaneCrashPrius::AirplaneCrashPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PercentChance = serialized->get_float(PercentChance_type_id);
		CollisionRadius = serialized->get_float(CollisionRadius_type_id);
		Gravity = serialized->get_float(Gravity_type_id);
		MinRollRate = serialized->get_float(MinRollRate_type_id);
		MaxRollRate = serialized->get_float(MaxRollRate_type_id);
		MinTurnRate = serialized->get_float(MinTurnRate_type_id);
		MaxTurnRate = serialized->get_float(MaxTurnRate_type_id);
		MaxTime = serialized->get_float(MaxTime_type_id); 
	}

	[[nodiscard]] auto
	AirplaneCrashPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AirplaneCrashPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AirplaneCrashPrius> {
		if (incoming_type_id == AirplaneCrashPrius::type_id) {
			return std::make_shared<AirplaneCrashPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

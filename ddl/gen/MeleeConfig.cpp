// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MeleeAttackData.hpp>
#include <rivet/ddl/generated/DamageKnockbackOverrideData.hpp> 

#include <rivet/ddl/generated/MeleeConfig.hpp>

namespace rivet::ddl::generated {
	MeleeConfig::MeleeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		StreakConfig = serialized->get_string(StreakConfig_type_id, {});
		ThrownOverrideData = serialized->unwrap_into<rivet::ddl::generated::DamageKnockbackOverrideData>(ThrownOverrideData_type_id);
		MeleeAttackList = serialized->unwrap_into_many<rivet::ddl::generated::MeleeAttackData>(MeleeAttackList_type_id); 
	}

	[[nodiscard]] auto
	MeleeConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MeleeConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeleeConfig> {
		if (incoming_type_id == MeleeConfig::type_id) {
			return std::make_shared<MeleeConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

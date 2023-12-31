// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotMountDamageData.hpp>

namespace rivet::ddl::generated {
	BotMountDamageData::BotMountDamageData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnableTouchDamage = serialized->get_bool(EnableTouchDamage_type_id);
		LocatorName = serialized->get_string(LocatorName_type_id);
		DamageSphereRadius = serialized->get_float(DamageSphereRadius_type_id);
		DamageAmount = serialized->get_float(DamageAmount_type_id);
		DamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(DamageType_type_id, rivet::ddl::generated::DamageTypes_values);
		Knockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(Knockback_type_id, rivet::ddl::generated::KnockbackLevels_values);
		DamageStr = serialized->get_string(DamageStr_type_id);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id); 
	}

	[[nodiscard]] auto
	BotMountDamageData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotMountDamageData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotMountDamageData> {
		if (incoming_type_id == BotMountDamageData::type_id) {
			return std::make_shared<BotMountDamageData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

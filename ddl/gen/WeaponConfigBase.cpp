// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponConfig.hpp>
#include <rivet/ddl/generated/WeaponTriggerDataListItem.hpp>
#include <rivet/ddl/generated/WeaponAccuracyDataListItem.hpp>
#include <rivet/ddl/generated/WeaponShotDataListItem.hpp>
#include <rivet/ddl/generated/WeaponAmmoDataListItem.hpp>
#include <rivet/ddl/generated/WeaponUserStateDataListItem.hpp>
#include <rivet/ddl/generated/WeaponEmitterDataListItem.hpp>
#include <rivet/ddl/generated/WeaponBasePrius.hpp> 

#include <rivet/ddl/generated/WeaponConfigBase.hpp>

namespace rivet::ddl::generated {
	WeaponConfigBase::WeaponConfigBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Prius = serialized->unwrap_into<rivet::ddl::generated::WeaponBasePrius>(Prius_type_id);
		MacroType = serialized->get_enum<rivet::ddl::generated::x63d44ada>(MacroType_type_id, rivet::ddl::generated::x63d44ada_values);
		DefFlags = serialized->get_bitset<rivet::ddl::generated::x40175545>(DefFlags_type_id, rivet::ddl::generated::x40175545_values);
		EmitterList = serialized->unwrap_into_many<rivet::ddl::generated::WeaponEmitterDataListItem>(EmitterList_type_id);
		AmmoList = serialized->unwrap_into_many<rivet::ddl::generated::WeaponAmmoDataListItem>(AmmoList_type_id);
		ShotList = serialized->unwrap_into_many<rivet::ddl::generated::WeaponShotDataListItem>(ShotList_type_id);
		AccuracyList = serialized->unwrap_into_many<rivet::ddl::generated::WeaponAccuracyDataListItem>(AccuracyList_type_id);
		UserStateList = serialized->unwrap_into_many<rivet::ddl::generated::WeaponUserStateDataListItem>(UserStateList_type_id);
		TriggerList = serialized->unwrap_into_many<rivet::ddl::generated::WeaponTriggerDataListItem>(TriggerList_type_id); 
	}

	[[nodiscard]] auto
	WeaponConfigBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponConfigBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponConfigBase> {
		if (incoming_type_id == WeaponConfigBase::type_id) {
			return std::make_shared<WeaponConfigBase>(serialized);
		}

		auto WeaponConfig_ptr = WeaponConfig::from_substruct(incoming_type_id, serialized);
		if (WeaponConfig_ptr != nullptr) {
			return WeaponConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

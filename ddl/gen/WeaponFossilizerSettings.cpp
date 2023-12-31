// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponFossilizerSettings.hpp>

namespace rivet::ddl::generated {
	WeaponFossilizerSettings::WeaponFossilizerSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UnlockAllFeatures = serialized->get_bool(UnlockAllFeatures_type_id);
		SlowTimeOnTriggerPulls = serialized->get_bool(SlowTimeOnTriggerPulls_type_id);
		ShowDebugUI = serialized->get_bool(ShowDebugUI_type_id);
		AllowSlowWhileReloading = serialized->get_bool(AllowSlowWhileReloading_type_id); 
	}

	[[nodiscard]] auto
	WeaponFossilizerSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponFossilizerSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponFossilizerSettings> {
		if (incoming_type_id == WeaponFossilizerSettings::type_id) {
			return std::make_shared<WeaponFossilizerSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

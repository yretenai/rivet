// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroCinematicFurSettingsEvent.hpp>

namespace rivet::ddl::generated {
	HeroCinematicFurSettingsEvent::HeroCinematicFurSettingsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		FurWetnessEnabled = serialized->get_bool(FurWetnessEnabled_type_id);
		FurWindEnabled = serialized->get_bool(FurWindEnabled_type_id);
		FurWetnessUpdateEnabled = serialized->get_bool(FurWetnessUpdateEnabled_type_id);
		FurWindUpdateEnabled = serialized->get_bool(FurWindUpdateEnabled_type_id); 
	}

	[[nodiscard]] auto
	HeroCinematicFurSettingsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroCinematicFurSettingsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroCinematicFurSettingsEvent> {
		if (incoming_type_id == HeroCinematicFurSettingsEvent::type_id) {
			return std::make_shared<HeroCinematicFurSettingsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

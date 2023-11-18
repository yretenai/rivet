// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProjectilePassedMaxRangeEvent.hpp>

namespace rivet::ddl::generated {
	ProjectilePassedMaxRangeEvent::ProjectilePassedMaxRangeEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PerkName = serialized->get_string(PerkName_type_id); 
	}

	[[nodiscard]] auto
	ProjectilePassedMaxRangeEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProjectilePassedMaxRangeEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectilePassedMaxRangeEvent> {
		if (incoming_type_id == ProjectilePassedMaxRangeEvent::type_id) {
			return std::make_shared<ProjectilePassedMaxRangeEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

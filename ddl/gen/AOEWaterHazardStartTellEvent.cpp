// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AOEWaterHazardStartTellEvent.hpp>

namespace rivet::ddl::generated {
	AOEWaterHazardStartTellEvent::AOEWaterHazardStartTellEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	AOEWaterHazardStartTellEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AOEWaterHazardStartTellEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AOEWaterHazardStartTellEvent> {
		if (incoming_type_id == AOEWaterHazardStartTellEvent::type_id) {
			return std::make_shared<AOEWaterHazardStartTellEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

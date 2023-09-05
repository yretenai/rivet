// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/POIAttributeOutroTimer.hpp>

namespace rivet::ddl::generated {
	POIAttributeOutroTimer::POIAttributeOutroTimer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): POIAttributeOutroBase(serialized) {
		OutroTime = serialized->get_float(OutroTime_type_id); 
	}

	auto
	POIAttributeOutroTimer::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	POIAttributeOutroTimer::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	POIAttributeOutroTimer::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIAttributeOutroTimer> {
		if (incoming_type_id == POIAttributeOutroTimer::type_id) {
			return std::make_shared<POIAttributeOutroTimer>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

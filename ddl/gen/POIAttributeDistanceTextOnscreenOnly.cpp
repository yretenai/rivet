// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/POIAttributeDistanceTextOnscreenOnly.hpp>

namespace rivet::ddl::generated {
	POIAttributeDistanceTextOnscreenOnly::POIAttributeDistanceTextOnscreenOnly([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): POIAttributeDistanceTextBase(serialized) {

	}

	[[nodiscard]] auto
	POIAttributeDistanceTextOnscreenOnly::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	POIAttributeDistanceTextOnscreenOnly::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIAttributeDistanceTextOnscreenOnly> {
		if (incoming_type_id == POIAttributeDistanceTextOnscreenOnly::type_id) {
			return std::make_shared<POIAttributeDistanceTextOnscreenOnly>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

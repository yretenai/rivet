// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/POIAttributeEdgeModeNone.hpp>

namespace rivet::ddl::generated {
	POIAttributeEdgeModeNone::POIAttributeEdgeModeNone([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): POIAttributeEdgeModeBase(serialized) {

	}

	[[nodiscard]] auto
	POIAttributeEdgeModeNone::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	POIAttributeEdgeModeNone::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIAttributeEdgeModeNone> {
		if (incoming_type_id == POIAttributeEdgeModeNone::type_id) {
			return std::make_shared<POIAttributeEdgeModeNone>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
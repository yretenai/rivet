// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/POITypeObjective.hpp>

namespace rivet::ddl::generated {
	POITypeObjective::POITypeObjective([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): POITypeMission(serialized) {

	}

	[[nodiscard]] auto
	POITypeObjective::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	POITypeObjective::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POITypeObjective> {
		if (incoming_type_id == POITypeObjective::type_id) {
			return std::make_shared<POITypeObjective>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
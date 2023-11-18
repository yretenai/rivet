// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugMarkerNodeDef.hpp>

namespace rivet::ddl::generated {
	DebugMarkerNodeDef::DebugMarkerNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AndMissionSystemNodeDef(serialized) {

	}

	[[nodiscard]] auto
	DebugMarkerNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugMarkerNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugMarkerNodeDef> {
		if (incoming_type_id == DebugMarkerNodeDef::type_id) {
			return std::make_shared<DebugMarkerNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

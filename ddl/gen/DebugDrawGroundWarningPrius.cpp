// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugDrawGroundWarningPrius.hpp>

namespace rivet::ddl::generated {
	DebugDrawGroundWarningPrius::DebugDrawGroundWarningPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Radius = serialized->get_float(Radius_type_id);
		Height = serialized->get_float(Height_type_id);
		Duration = serialized->get_float(Duration_type_id); 
	}

	[[nodiscard]] auto
	DebugDrawGroundWarningPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugDrawGroundWarningPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugDrawGroundWarningPrius> {
		if (incoming_type_id == DebugDrawGroundWarningPrius::type_id) {
			return std::make_shared<DebugDrawGroundWarningPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
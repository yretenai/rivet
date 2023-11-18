// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PressurePlatePrius.hpp>

namespace rivet::ddl::generated {
	PressurePlatePrius::PressurePlatePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TimeToPress = serialized->get_float(TimeToPress_type_id);
		TimeToReset = serialized->get_float(TimeToReset_type_id);
		StayPressed = serialized->get_bool(StayPressed_type_id); 
	}

	[[nodiscard]] auto
	PressurePlatePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PressurePlatePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PressurePlatePrius> {
		if (incoming_type_id == PressurePlatePrius::type_id) {
			return std::make_shared<PressurePlatePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

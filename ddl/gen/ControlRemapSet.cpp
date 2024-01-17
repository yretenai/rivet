// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ControlRemapSet.hpp>

namespace rivet::ddl::generated {
	ControlRemapSet::ControlRemapSet([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DpadUp = serialized->get_enum<rivet::ddl::generated::x7b87880c>(DpadUp_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Up);
		DpadDown = serialized->get_enum<rivet::ddl::generated::x7b87880c>(DpadDown_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Down);
		DpadLeft = serialized->get_enum<rivet::ddl::generated::x7b87880c>(DpadLeft_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Left);
		DpadRight = serialized->get_enum<rivet::ddl::generated::x7b87880c>(DpadRight_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Right);
		FaceBottom = serialized->get_enum<rivet::ddl::generated::x7b87880c>(FaceBottom_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::A);
		FaceRight = serialized->get_enum<rivet::ddl::generated::x7b87880c>(FaceRight_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::B);
		FaceLeft = serialized->get_enum<rivet::ddl::generated::x7b87880c>(FaceLeft_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::X);
		FaceTop = serialized->get_enum<rivet::ddl::generated::x7b87880c>(FaceTop_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Y);
		ShoulderLeft = serialized->get_enum<rivet::ddl::generated::x7b87880c>(ShoulderLeft_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Left_Shoulder);
		ShoulderRight = serialized->get_enum<rivet::ddl::generated::x7b87880c>(ShoulderRight_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Right_Shoulder);
		TriggerLeft = serialized->get_enum<rivet::ddl::generated::x7b87880c>(TriggerLeft_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Left_Trigger);
		TriggerRight = serialized->get_enum<rivet::ddl::generated::x7b87880c>(TriggerRight_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Right_Trigger);
		StickLeft = serialized->get_enum<rivet::ddl::generated::x7b87880c>(StickLeft_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Left_Stick_Button);
		StickRight = serialized->get_enum<rivet::ddl::generated::x7b87880c>(StickRight_type_id, rivet::ddl::generated::x7b87880c_values, rivet::ddl::generated::x7b87880c::Right_Stick_Button);
		SwapSticks = serialized->get_bool(SwapSticks_type_id, false); 
	}

	[[nodiscard]] auto
	ControlRemapSet::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ControlRemapSet::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ControlRemapSet> {
		if (incoming_type_id == ControlRemapSet::type_id) {
			return std::make_shared<ControlRemapSet>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

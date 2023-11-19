// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimClipIKEvent.hpp>

namespace rivet::ddl::generated {
	AnimClipIKEvent::AnimClipIKEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		CurveType = serialized->get_enum<rivet::ddl::generated::xd2b6d7dc>(CurveType_type_id, rivet::ddl::generated::xd2b6d7dc_values);
		Value = serialized->get_float(Value_type_id);
		BlendTime = serialized->get_float(BlendTime_type_id);
		IKName = serialized->get_string(IKName_type_id); 
	}

	[[nodiscard]] auto
	AnimClipIKEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimClipIKEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimClipIKEvent> {
		if (incoming_type_id == AnimClipIKEvent::type_id) {
			return std::make_shared<AnimClipIKEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
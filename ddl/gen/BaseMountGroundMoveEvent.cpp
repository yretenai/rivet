// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StartMountGroundMoveEvent.hpp>
#include <rivet/ddl/generated/EndMountGroundMoveEvent.hpp> 

#include <rivet/ddl/generated/BaseMountGroundMoveEvent.hpp>

namespace rivet::ddl::generated {
	BaseMountGroundMoveEvent::BaseMountGroundMoveEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventType = serialized->get_string(EventType_type_id);
		SpeedType = serialized->get_string(SpeedType_type_id);
		AVMaterialType = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(AVMaterialType_type_id, rivet::ddl::generated::x10b3c4cf_values); 
	}

	[[nodiscard]] auto
	BaseMountGroundMoveEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BaseMountGroundMoveEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BaseMountGroundMoveEvent> {
		if (incoming_type_id == BaseMountGroundMoveEvent::type_id) {
			return std::make_shared<BaseMountGroundMoveEvent>(serialized);
		}

		auto EndMountGroundMoveEvent_ptr = EndMountGroundMoveEvent::from_substruct(incoming_type_id, serialized);
		if (EndMountGroundMoveEvent_ptr != nullptr) {
			return EndMountGroundMoveEvent_ptr;
		}

		auto StartMountGroundMoveEvent_ptr = StartMountGroundMoveEvent::from_substruct(incoming_type_id, serialized);
		if (StartMountGroundMoveEvent_ptr != nullptr) {
			return StartMountGroundMoveEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

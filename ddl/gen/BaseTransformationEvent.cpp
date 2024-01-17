// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TransformationEvent.hpp>
#include <rivet/ddl/generated/TransformationCompleteEvent.hpp>
#include <rivet/ddl/generated/TransformationActivateAnimationEvent.hpp> 

#include <rivet/ddl/generated/BaseTransformationEvent.hpp>

namespace rivet::ddl::generated {
	BaseTransformationEvent::BaseTransformationEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		TransformationState = serialized->get_int32(TransformationState_type_id, -1);
		InAir = serialized->get_bool(InAir_type_id, false); 
	}

	[[nodiscard]] auto
	BaseTransformationEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BaseTransformationEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BaseTransformationEvent> {
		if (incoming_type_id == BaseTransformationEvent::type_id) {
			return std::make_shared<BaseTransformationEvent>(serialized);
		}

		auto TransformationActivateAnimationEvent_ptr = TransformationActivateAnimationEvent::from_substruct(incoming_type_id, serialized);
		if (TransformationActivateAnimationEvent_ptr != nullptr) {
			return TransformationActivateAnimationEvent_ptr;
		}

		auto TransformationCompleteEvent_ptr = TransformationCompleteEvent::from_substruct(incoming_type_id, serialized);
		if (TransformationCompleteEvent_ptr != nullptr) {
			return TransformationCompleteEvent_ptr;
		}

		auto TransformationEvent_ptr = TransformationEvent::from_substruct(incoming_type_id, serialized);
		if (TransformationEvent_ptr != nullptr) {
			return TransformationEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

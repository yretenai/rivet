// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraForwardTweakActorForward.hpp>
#include <rivet/ddl/generated/CameraForwardTweakLookAtTarget.hpp> 

#include <rivet/ddl/generated/CameraForwardTweakValid.hpp>

namespace rivet::ddl::generated {
	CameraForwardTweakValid::CameraForwardTweakValid([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraForwardTweak(serialized) {
		CancelOnInput = serialized->get_bool(CancelOnInput_type_id);
		OnlyApplyOnFollow = serialized->get_bool(OnlyApplyOnFollow_type_id); 
	}

	[[nodiscard]] auto
	CameraForwardTweakValid::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraForwardTweakValid::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraForwardTweakValid> {
		if (incoming_type_id == CameraForwardTweakValid::type_id) {
			return std::make_shared<CameraForwardTweakValid>(serialized);
		}

		auto CameraForwardTweakLookAtTarget_ptr = CameraForwardTweakLookAtTarget::from_substruct(incoming_type_id, serialized);
		if (CameraForwardTweakLookAtTarget_ptr != nullptr) {
			return CameraForwardTweakLookAtTarget_ptr;
		}

		auto CameraForwardTweakActorForward_ptr = CameraForwardTweakActorForward::from_substruct(incoming_type_id, serialized);
		if (CameraForwardTweakActorForward_ptr != nullptr) {
			return CameraForwardTweakActorForward_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/InteractLocationVolumePrius.hpp>
#include <rivet/ddl/generated/InteractLocationAreaPrius.hpp>
#include <rivet/ddl/generated/InteractLocationWarpPrius.hpp>
#include <rivet/ddl/generated/InteractLocationPointPrius.hpp>
#include <rivet/ddl/generated/InteractLocationCameraSettings.hpp>
#include <rivet/ddl/generated/InteractLocationApproachData.hpp>
#include <rivet/ddl/generated/InteractLocationLocatorPrius.hpp>
#include <rivet/ddl/generated/InteractLocationPromptData.hpp> 

#include <rivet/ddl/generated/InteractLocationPrius.hpp>

namespace rivet::ddl::generated {
	InteractLocationPrius::InteractLocationPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocIndex = serialized->get_enum<rivet::ddl::generated::xa3ea6fcb>(LocIndex_type_id, rivet::ddl::generated::xa3ea6fcb_values);
		RequireHold = serialized->get_bool(RequireHold_type_id);
		HoldTime = serialized->get_float(HoldTime_type_id);
		PromptData = serialized->unwrap_into<rivet::ddl::generated::InteractLocationPromptData>(PromptData_type_id);
		ApproachData = serialized->unwrap_into<rivet::ddl::generated::InteractLocationApproachData>(ApproachData_type_id);
		Allegiance = serialized->get_enum<rivet::ddl::generated::x6bdf4ba1>(Allegiance_type_id, rivet::ddl::generated::x6bdf4ba1_values);
		AllegianceRelation = serialized->get_enum<rivet::ddl::generated::AllegianceRelation>(AllegianceRelation_type_id, rivet::ddl::generated::AllegianceRelation_values);
		CameraSettings = serialized->unwrap_into<rivet::ddl::generated::InteractLocationCameraSettings>(CameraSettings_type_id); 
	}

	[[nodiscard]] auto
	InteractLocationPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InteractLocationPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InteractLocationPrius> {
		if (incoming_type_id == InteractLocationPrius::type_id) {
			return std::make_shared<InteractLocationPrius>(serialized);
		}

		auto InteractLocationWarpPrius_ptr = InteractLocationWarpPrius::from_substruct(incoming_type_id, serialized);
		if (InteractLocationWarpPrius_ptr != nullptr) {
			return InteractLocationWarpPrius_ptr;
		}

		auto InteractLocationPointPrius_ptr = InteractLocationPointPrius::from_substruct(incoming_type_id, serialized);
		if (InteractLocationPointPrius_ptr != nullptr) {
			return InteractLocationPointPrius_ptr;
		}

		auto InteractLocationLocatorPrius_ptr = InteractLocationLocatorPrius::from_substruct(incoming_type_id, serialized);
		if (InteractLocationLocatorPrius_ptr != nullptr) {
			return InteractLocationLocatorPrius_ptr;
		}

		auto InteractLocationAreaPrius_ptr = InteractLocationAreaPrius::from_substruct(incoming_type_id, serialized);
		if (InteractLocationAreaPrius_ptr != nullptr) {
			return InteractLocationAreaPrius_ptr;
		}

		auto InteractLocationVolumePrius_ptr = InteractLocationVolumePrius::from_substruct(incoming_type_id, serialized);
		if (InteractLocationVolumePrius_ptr != nullptr) {
			return InteractLocationVolumePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

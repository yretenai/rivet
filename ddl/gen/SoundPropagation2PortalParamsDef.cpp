// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundPropagation2RangeDef.hpp> 

#include <rivet/ddl/generated/SoundPropagation2PortalParamsDef.hpp>

namespace rivet::ddl::generated {
	SoundPropagation2PortalParamsDef::SoundPropagation2PortalParamsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ReverbFocusDistanceScale = serialized->unwrap_into<rivet::ddl::generated::SoundPropagation2RangeDef>(ReverbFocusDistanceScale_type_id);
		ReverbAzimuthDistanceScale = serialized->unwrap_into<rivet::ddl::generated::SoundPropagation2RangeDef>(ReverbAzimuthDistanceScale_type_id);
		VirtualPositionDistanceScale = serialized->unwrap_into<rivet::ddl::generated::SoundPropagation2RangeDef>(VirtualPositionDistanceScale_type_id);
		AttenuationFadeScalar = serialized->get_float(AttenuationFadeScalar_type_id);
		MaxFilteredAttenuationAngle = serialized->get_float(MaxFilteredAttenuationAngle_type_id);
		MaxFullAttenuationAngle = serialized->get_float(MaxFullAttenuationAngle_type_id); 
	}

	[[nodiscard]] auto
	SoundPropagation2PortalParamsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundPropagation2PortalParamsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundPropagation2PortalParamsDef> {
		if (incoming_type_id == SoundPropagation2PortalParamsDef::type_id) {
			return std::make_shared<SoundPropagation2PortalParamsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

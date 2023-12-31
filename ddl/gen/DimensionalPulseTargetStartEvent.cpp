// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/DimensionalPulseTargetStartEvent.hpp>

namespace rivet::ddl::generated {
	DimensionalPulseTargetStartEvent::DimensionalPulseTargetStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		TimeToHit = serialized->get_float(TimeToHit_type_id);
		ExtraBehavior = serialized->get_enum<rivet::ddl::generated::xee804118>(ExtraBehavior_type_id, rivet::ddl::generated::xee804118_values);
		CurrentSize = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CurrentSize_type_id);
		CurrentSizeX = serialized->get_float(CurrentSizeX_type_id);
		CurrentSizeY = serialized->get_float(CurrentSizeY_type_id);
		CurrentSizeZ = serialized->get_float(CurrentSizeZ_type_id);
		NextSize = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(NextSize_type_id);
		NextSizeX = serialized->get_float(NextSizeX_type_id);
		NextSizeY = serialized->get_float(NextSizeY_type_id);
		NextSizeZ = serialized->get_float(NextSizeZ_type_id); 
	}

	[[nodiscard]] auto
	DimensionalPulseTargetStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DimensionalPulseTargetStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionalPulseTargetStartEvent> {
		if (incoming_type_id == DimensionalPulseTargetStartEvent::type_id) {
			return std::make_shared<DimensionalPulseTargetStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

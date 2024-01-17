// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BounceData.hpp> 

#include <rivet/ddl/generated/Bounce.hpp>

namespace rivet::ddl::generated {
	Bounce::Bounce([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeLandMode(serialized) {
		BounceCoefs = serialized->unwrap_into_many<rivet::ddl::generated::BounceData>(BounceCoefs_type_id);
		StopSpeed = serialized->get_float(StopSpeed_type_id, 2.000000);
		StopSlope = serialized->get_float(StopSlope_type_id, 0.800000);
		IgnoreSpeedIfOnStopSlope = serialized->get_bool(IgnoreSpeedIfOnStopSlope_type_id, false); 
	}

	[[nodiscard]] auto
	Bounce::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Bounce::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Bounce> {
		if (incoming_type_id == Bounce::type_id) {
			return std::make_shared<Bounce>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GrindSlopeData.hpp>

namespace rivet::ddl::generated {
	GrindSlopeData::GrindSlopeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Gravity = serialized->get_float(Gravity_type_id);
		UphillStartDegrees = serialized->get_float(UphillStartDegrees_type_id);
		DownhillStartDegrees = serialized->get_float(DownhillStartDegrees_type_id);
		FlatAccel = serialized->get_float(FlatAccel_type_id);
		FlatDecel = serialized->get_float(FlatDecel_type_id);
		SpeedMin = serialized->get_float(SpeedMin_type_id);
		SpeedMax = serialized->get_float(SpeedMax_type_id); 
	}

	[[nodiscard]] auto
	GrindSlopeData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrindSlopeData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindSlopeData> {
		if (incoming_type_id == GrindSlopeData::type_id) {
			return std::make_shared<GrindSlopeData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

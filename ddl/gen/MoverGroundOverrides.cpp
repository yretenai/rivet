// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MoverGroundOverrides.hpp>

namespace rivet::ddl::generated {
	MoverGroundOverrides::MoverGroundOverrides([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StepUpHeight = serialized->get_float(StepUpHeight_type_id);
		StepDownHeight = serialized->get_float(StepDownHeight_type_id);
		GoodGroundSlope = serialized->get_float(GoodGroundSlope_type_id);
		MaxHeightFail = serialized->get_float(MaxHeightFail_type_id);
		OrientGain = serialized->get_float(OrientGain_type_id);
		OrientDamp = serialized->get_float(OrientDamp_type_id); 
	}

	[[nodiscard]] auto
	MoverGroundOverrides::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MoverGroundOverrides::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoverGroundOverrides> {
		if (incoming_type_id == MoverGroundOverrides::type_id) {
			return std::make_shared<MoverGroundOverrides>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

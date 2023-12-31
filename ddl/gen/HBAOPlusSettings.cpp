// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HBAOPlusSettings.hpp>

namespace rivet::ddl::generated {
	HBAOPlusSettings::HBAOPlusSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Radius = serialized->get_float(Radius_type_id);
		Bias = serialized->get_float(Bias_type_id);
		SmallScaleAO = serialized->get_float(SmallScaleAO_type_id);
		LargeScaleAO = serialized->get_float(LargeScaleAO_type_id);
		PowerExponent = serialized->get_float(PowerExponent_type_id);
		EnableForegroundAO = serialized->get_bool(EnableForegroundAO_type_id);
		ForegroundViewDepth = serialized->get_float(ForegroundViewDepth_type_id);
		EnableBackgroundAO = serialized->get_bool(EnableBackgroundAO_type_id);
		BackgroundViewDepth = serialized->get_float(BackgroundViewDepth_type_id);
		EnableBlur = serialized->get_bool(EnableBlur_type_id);
		BlurSharpness = serialized->get_float(BlurSharpness_type_id);
		EnableNormalMap = serialized->get_bool(EnableNormalMap_type_id); 
	}

	[[nodiscard]] auto
	HBAOPlusSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HBAOPlusSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HBAOPlusSettings> {
		if (incoming_type_id == HBAOPlusSettings::type_id) {
			return std::make_shared<HBAOPlusSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ToneMapSettingsDef.hpp>

namespace rivet::ddl::generated {
	ToneMapSettingsDef::ToneMapSettingsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id);
		LuminanceKeyValue = serialized->get_float(LuminanceKeyValue_type_id);
		ExposureBias = serialized->get_float(ExposureBias_type_id);
		AdaptationStrength = serialized->get_float(AdaptationStrength_type_id);
		AdaptationStops = serialized->get_float(AdaptationStops_type_id);
		AdaptationAnchor = serialized->get_float(AdaptationAnchor_type_id);
		AdaptationRange = serialized->get_float(AdaptationRange_type_id);
		AdaptationBias = serialized->get_float(AdaptationBias_type_id);
		AutoAdjustTime = serialized->get_float(AutoAdjustTime_type_id); 
	}

	[[nodiscard]] auto
	ToneMapSettingsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ToneMapSettingsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ToneMapSettingsDef> {
		if (incoming_type_id == ToneMapSettingsDef::type_id) {
			return std::make_shared<ToneMapSettingsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

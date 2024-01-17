// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MotionBlurSettingsDef.hpp>

namespace rivet::ddl::generated {
	MotionBlurSettingsDef::MotionBlurSettingsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, true);
		ExposureDuration = serialized->get_float(ExposureDuration_type_id, 0.333000); 
	}

	[[nodiscard]] auto
	MotionBlurSettingsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MotionBlurSettingsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MotionBlurSettingsDef> {
		if (incoming_type_id == MotionBlurSettingsDef::type_id) {
			return std::make_shared<MotionBlurSettingsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

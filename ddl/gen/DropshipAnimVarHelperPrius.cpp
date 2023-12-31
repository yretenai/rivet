// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DropshipAnimVarHelperPrius.hpp>

namespace rivet::ddl::generated {
	DropshipAnimVarHelperPrius::DropshipAnimVarHelperPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AnimVar = serialized->get_string(AnimVar_type_id);
		IntroDuration = serialized->get_float(IntroDuration_type_id);
		OutroGain = serialized->get_float(OutroGain_type_id);
		OutroDamp = serialized->get_float(OutroDamp_type_id);
		OutroSpeed = serialized->get_float(OutroSpeed_type_id); 
	}

	[[nodiscard]] auto
	DropshipAnimVarHelperPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DropshipAnimVarHelperPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DropshipAnimVarHelperPrius> {
		if (incoming_type_id == DropshipAnimVarHelperPrius::type_id) {
			return std::make_shared<DropshipAnimVarHelperPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

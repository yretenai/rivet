// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraHeightTweakMultiplier.hpp>

namespace rivet::ddl::generated {
	CameraHeightTweakMultiplier::CameraHeightTweakMultiplier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraHeightTweak(serialized) {
		Multiplier = serialized->get_float(Multiplier_type_id);
		BlendFieldCompletePercent = serialized->get_float(BlendFieldCompletePercent_type_id);
		BiDirectionalField = serialized->get_bool(BiDirectionalField_type_id); 
	}

	[[nodiscard]] auto
	CameraHeightTweakMultiplier::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraHeightTweakMultiplier::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraHeightTweakMultiplier> {
		if (incoming_type_id == CameraHeightTweakMultiplier::type_id) {
			return std::make_shared<CameraHeightTweakMultiplier>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

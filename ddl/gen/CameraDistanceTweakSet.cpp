// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraDistanceTweakSet.hpp>

namespace rivet::ddl::generated {
	CameraDistanceTweakSet::CameraDistanceTweakSet([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraDistanceTweak(serialized) {
		Distance = serialized->get_float(Distance_type_id);
		BlendFieldCompletePercent = serialized->get_float(BlendFieldCompletePercent_type_id);
		BiDirectionalField = serialized->get_bool(BiDirectionalField_type_id); 
	}

	[[nodiscard]] auto
	CameraDistanceTweakSet::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraDistanceTweakSet::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraDistanceTweakSet> {
		if (incoming_type_id == CameraDistanceTweakSet::type_id) {
			return std::make_shared<CameraDistanceTweakSet>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

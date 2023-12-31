// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraDistanceTweakNone.hpp>

namespace rivet::ddl::generated {
	CameraDistanceTweakNone::CameraDistanceTweakNone([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraDistanceTweak(serialized) {

	}

	[[nodiscard]] auto
	CameraDistanceTweakNone::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraDistanceTweakNone::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraDistanceTweakNone> {
		if (incoming_type_id == CameraDistanceTweakNone::type_id) {
			return std::make_shared<CameraDistanceTweakNone>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

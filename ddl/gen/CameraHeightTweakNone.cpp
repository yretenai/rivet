// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraHeightTweakNone.hpp>

namespace rivet::ddl::generated {
	CameraHeightTweakNone::CameraHeightTweakNone([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraHeightTweak(serialized) {

	}

	[[nodiscard]] auto
	CameraHeightTweakNone::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraHeightTweakNone::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraHeightTweakNone> {
		if (incoming_type_id == CameraHeightTweakNone::type_id) {
			return std::make_shared<CameraHeightTweakNone>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

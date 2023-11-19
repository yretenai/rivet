// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraHeightTweakNone.hpp>
#include <rivet/ddl/generated/CameraHeightTweakMultiplier.hpp>
#include <rivet/ddl/generated/CameraHeightTweakSet.hpp> 

#include <rivet/ddl/generated/CameraHeightTweak.hpp>

namespace rivet::ddl::generated {
	CameraHeightTweak::CameraHeightTweak([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	CameraHeightTweak::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraHeightTweak::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraHeightTweak> {
		if (incoming_type_id == CameraHeightTweak::type_id) {
			return std::make_shared<CameraHeightTweak>(serialized);
		}

		auto CameraHeightTweakSet_ptr = CameraHeightTweakSet::from_substruct(incoming_type_id, serialized);
		if (CameraHeightTweakSet_ptr != nullptr) {
			return CameraHeightTweakSet_ptr;
		}

		auto CameraHeightTweakMultiplier_ptr = CameraHeightTweakMultiplier::from_substruct(incoming_type_id, serialized);
		if (CameraHeightTweakMultiplier_ptr != nullptr) {
			return CameraHeightTweakMultiplier_ptr;
		}

		auto CameraHeightTweakNone_ptr = CameraHeightTweakNone::from_substruct(incoming_type_id, serialized);
		if (CameraHeightTweakNone_ptr != nullptr) {
			return CameraHeightTweakNone_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
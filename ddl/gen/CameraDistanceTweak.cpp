// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraDistanceTweakSet.hpp>
#include <rivet/ddl/generated/CameraDistanceTweakMultiplier.hpp>
#include <rivet/ddl/generated/CameraDistanceTweakNone.hpp> 

#include <rivet/ddl/generated/CameraDistanceTweak.hpp>

namespace rivet::ddl::generated {
	CameraDistanceTweak::CameraDistanceTweak([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	CameraDistanceTweak::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraDistanceTweak::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraDistanceTweak> {
		if (incoming_type_id == CameraDistanceTweak::type_id) {
			return std::make_shared<CameraDistanceTweak>(serialized);
		}

		auto CameraDistanceTweakNone_ptr = CameraDistanceTweakNone::from_substruct(incoming_type_id, serialized);
		if (CameraDistanceTweakNone_ptr != nullptr) {
			return CameraDistanceTweakNone_ptr;
		}

		auto CameraDistanceTweakMultiplier_ptr = CameraDistanceTweakMultiplier::from_substruct(incoming_type_id, serialized);
		if (CameraDistanceTweakMultiplier_ptr != nullptr) {
			return CameraDistanceTweakMultiplier_ptr;
		}

		auto CameraDistanceTweakSet_ptr = CameraDistanceTweakSet::from_substruct(incoming_type_id, serialized);
		if (CameraDistanceTweakSet_ptr != nullptr) {
			return CameraDistanceTweakSet_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

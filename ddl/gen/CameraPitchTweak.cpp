// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraPitchTweakNone.hpp>
#include <rivet/ddl/generated/CameraPitchTweakSet.hpp>
#include <rivet/ddl/generated/CameraPitchTweakMultiplier.hpp> 

#include <rivet/ddl/generated/CameraPitchTweak.hpp>

namespace rivet::ddl::generated {
	CameraPitchTweak::CameraPitchTweak([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	CameraPitchTweak::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraPitchTweak::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraPitchTweak> {
		if (incoming_type_id == CameraPitchTweak::type_id) {
			return std::make_shared<CameraPitchTweak>(serialized);
		}

		auto CameraPitchTweakMultiplier_ptr = CameraPitchTweakMultiplier::from_substruct(incoming_type_id, serialized);
		if (CameraPitchTweakMultiplier_ptr != nullptr) {
			return CameraPitchTweakMultiplier_ptr;
		}

		auto CameraPitchTweakSet_ptr = CameraPitchTweakSet::from_substruct(incoming_type_id, serialized);
		if (CameraPitchTweakSet_ptr != nullptr) {
			return CameraPitchTweakSet_ptr;
		}

		auto CameraPitchTweakNone_ptr = CameraPitchTweakNone::from_substruct(incoming_type_id, serialized);
		if (CameraPitchTweakNone_ptr != nullptr) {
			return CameraPitchTweakNone_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

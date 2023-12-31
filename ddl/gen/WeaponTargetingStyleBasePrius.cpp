// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DoublePressTargetingPrius.hpp>
#include <rivet/ddl/generated/HoldAndReleaseTargetingPrius.hpp>
#include <rivet/ddl/generated/WeaponTargetingStyleNonePrius.hpp>
#include <rivet/ddl/generated/SinglePressTargetingPrius.hpp> 

#include <rivet/ddl/generated/WeaponTargetingStyleBasePrius.hpp>

namespace rivet::ddl::generated {
	WeaponTargetingStyleBasePrius::WeaponTargetingStyleBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	WeaponTargetingStyleBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponTargetingStyleBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponTargetingStyleBasePrius> {
		if (incoming_type_id == WeaponTargetingStyleBasePrius::type_id) {
			return std::make_shared<WeaponTargetingStyleBasePrius>(serialized);
		}

		auto SinglePressTargetingPrius_ptr = SinglePressTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SinglePressTargetingPrius_ptr != nullptr) {
			return SinglePressTargetingPrius_ptr;
		}

		auto WeaponTargetingStyleNonePrius_ptr = WeaponTargetingStyleNonePrius::from_substruct(incoming_type_id, serialized);
		if (WeaponTargetingStyleNonePrius_ptr != nullptr) {
			return WeaponTargetingStyleNonePrius_ptr;
		}

		auto HoldAndReleaseTargetingPrius_ptr = HoldAndReleaseTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (HoldAndReleaseTargetingPrius_ptr != nullptr) {
			return HoldAndReleaseTargetingPrius_ptr;
		}

		auto DoublePressTargetingPrius_ptr = DoublePressTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (DoublePressTargetingPrius_ptr != nullptr) {
			return DoublePressTargetingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

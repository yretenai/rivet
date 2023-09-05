// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FocusTrackingAimingPrius.hpp>
#include <rivet/ddl/generated/RelaxedBarrelDirectionAimingPrius.hpp>
#include <rivet/ddl/generated/DropshipAimingPrius.hpp> 

#include <rivet/ddl/generated/AimingBasePrius.hpp>

namespace rivet::ddl::generated {
	AimingBasePrius::AimingBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	auto
	AimingBasePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	AimingBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimingBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimingBasePrius> {
		if (incoming_type_id == AimingBasePrius::type_id) {
			return std::make_shared<AimingBasePrius>(serialized);
		}

		auto FocusTrackingAimingPrius_ptr = FocusTrackingAimingPrius::from_substruct(incoming_type_id, serialized);
		if (FocusTrackingAimingPrius_ptr != nullptr) {
			return FocusTrackingAimingPrius_ptr;
		}

		auto RelaxedBarrelDirectionAimingPrius_ptr = RelaxedBarrelDirectionAimingPrius::from_substruct(incoming_type_id, serialized);
		if (RelaxedBarrelDirectionAimingPrius_ptr != nullptr) {
			return RelaxedBarrelDirectionAimingPrius_ptr;
		}

		auto DropshipAimingPrius_ptr = DropshipAimingPrius::from_substruct(incoming_type_id, serialized);
		if (DropshipAimingPrius_ptr != nullptr) {
			return DropshipAimingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

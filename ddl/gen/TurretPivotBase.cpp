// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TurretDualPivot.hpp>
#include <rivet/ddl/generated/TurretSinglePivot.hpp>
#include <rivet/ddl/generated/TurretNone.hpp> 

#include <rivet/ddl/generated/TurretPivotBase.hpp>

namespace rivet::ddl::generated {
	TurretPivotBase::TurretPivotBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	TurretPivotBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TurretPivotBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TurretPivotBase> {
		if (incoming_type_id == TurretPivotBase::type_id) {
			return std::make_shared<TurretPivotBase>(serialized);
		}

		auto TurretNone_ptr = TurretNone::from_substruct(incoming_type_id, serialized);
		if (TurretNone_ptr != nullptr) {
			return TurretNone_ptr;
		}

		auto TurretSinglePivot_ptr = TurretSinglePivot::from_substruct(incoming_type_id, serialized);
		if (TurretSinglePivot_ptr != nullptr) {
			return TurretSinglePivot_ptr;
		}

		auto TurretDualPivot_ptr = TurretDualPivot::from_substruct(incoming_type_id, serialized);
		if (TurretDualPivot_ptr != nullptr) {
			return TurretDualPivot_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

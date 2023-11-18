// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TurretNone.hpp>

namespace rivet::ddl::generated {
	TurretNone::TurretNone([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TurretPivotBase(serialized) {

	}

	[[nodiscard]] auto
	TurretNone::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TurretNone::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TurretNone> {
		if (incoming_type_id == TurretNone::type_id) {
			return std::make_shared<TurretNone>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

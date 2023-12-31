// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponAccuracyBasePrius.hpp> 

#include <rivet/ddl/generated/WeaponAccuracyData.hpp>

namespace rivet::ddl::generated {
	WeaponAccuracyData::WeaponAccuracyData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AccuracyPrius = serialized->unwrap_into<rivet::ddl::generated::WeaponAccuracyBasePrius>(AccuracyPrius_type_id); 
	}

	[[nodiscard]] auto
	WeaponAccuracyData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponAccuracyData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponAccuracyData> {
		if (incoming_type_id == WeaponAccuracyData::type_id) {
			return std::make_shared<WeaponAccuracyData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageKnockbackPerTypeData.hpp> 

#include <rivet/ddl/generated/DamageKnockbackOverrideData.hpp>

namespace rivet::ddl::generated {
	DamageKnockbackOverrideData::DamageKnockbackOverrideData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SmallData = serialized->unwrap_into<rivet::ddl::generated::DamageKnockbackPerTypeData>(SmallData_type_id);
		MediumData = serialized->unwrap_into<rivet::ddl::generated::DamageKnockbackPerTypeData>(MediumData_type_id);
		TankData = serialized->unwrap_into<rivet::ddl::generated::DamageKnockbackPerTypeData>(TankData_type_id);
		LargeData = serialized->unwrap_into<rivet::ddl::generated::DamageKnockbackPerTypeData>(LargeData_type_id);
		TransportData = serialized->unwrap_into<rivet::ddl::generated::DamageKnockbackPerTypeData>(TransportData_type_id);
		BossData = serialized->unwrap_into<rivet::ddl::generated::DamageKnockbackPerTypeData>(BossData_type_id); 
	}

	[[nodiscard]] auto
	DamageKnockbackOverrideData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageKnockbackOverrideData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageKnockbackOverrideData> {
		if (incoming_type_id == DamageKnockbackOverrideData::type_id) {
			return std::make_shared<DamageKnockbackOverrideData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

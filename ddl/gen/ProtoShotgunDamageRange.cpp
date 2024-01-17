// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProtoShotgunDamageRange.hpp>

namespace rivet::ddl::generated {
	ProtoShotgunDamageRange::ProtoShotgunDamageRange([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IsFirst = serialized->get_bool(IsFirst_type_id, false);
		StartRangePercent = serialized->get_float(StartRangePercent_type_id, 0.000000);
		DamagePercent = serialized->get_float(DamagePercent_type_id, 0.000000);
		StatusPercent = serialized->get_float(StatusPercent_type_id, 0.000000);
		KnockbackLevel = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(KnockbackLevel_type_id, rivet::ddl::generated::KnockbackLevels_values, rivet::ddl::generated::KnockbackLevels::None);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	ProtoShotgunDamageRange::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProtoShotgunDamageRange::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProtoShotgunDamageRange> {
		if (incoming_type_id == ProtoShotgunDamageRange::type_id) {
			return std::make_shared<ProtoShotgunDamageRange>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

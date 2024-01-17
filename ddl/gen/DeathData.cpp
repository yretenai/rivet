// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DeathData.hpp>

namespace rivet::ddl::generated {
	DeathData::DeathData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BlastKnockbackLevel = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(BlastKnockbackLevel_type_id, rivet::ddl::generated::KnockbackLevels_values, rivet::ddl::generated::KnockbackLevels::Four); 
	}

	[[nodiscard]] auto
	DeathData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DeathData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DeathData> {
		if (incoming_type_id == DeathData::type_id) {
			return std::make_shared<DeathData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

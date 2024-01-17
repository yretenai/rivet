// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSuperMeterDecayData.hpp> 

#include <rivet/ddl/generated/HeroSuperMeterBuildUpData.hpp>

namespace rivet::ddl::generated {
	HeroSuperMeterBuildUpData::HeroSuperMeterBuildUpData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PerDamageRate = serialized->get_float(PerDamageRate_type_id, 1.000000);
		CanAccrueWhileUsing = serialized->get_bool(CanAccrueWhileUsing_type_id, false);
		InCombat = serialized->unwrap_into<rivet::ddl::generated::HeroSuperMeterDecayData>(InCombat_type_id);
		OutOfCombat = serialized->unwrap_into<rivet::ddl::generated::HeroSuperMeterDecayData>(OutOfCombat_type_id); 
	}

	[[nodiscard]] auto
	HeroSuperMeterBuildUpData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroSuperMeterBuildUpData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSuperMeterBuildUpData> {
		if (incoming_type_id == HeroSuperMeterBuildUpData::type_id) {
			return std::make_shared<HeroSuperMeterBuildUpData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

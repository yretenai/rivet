// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSuperMeterDecayData.hpp>

namespace rivet::ddl::generated {
	HeroSuperMeterDecayData::HeroSuperMeterDecayData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Rate = serialized->get_float(Rate_type_id);
		Delay = serialized->get_float(Delay_type_id); 
	}

	[[nodiscard]] auto
	HeroSuperMeterDecayData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroSuperMeterDecayData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSuperMeterDecayData> {
		if (incoming_type_id == HeroSuperMeterDecayData::type_id) {
			return std::make_shared<HeroSuperMeterDecayData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

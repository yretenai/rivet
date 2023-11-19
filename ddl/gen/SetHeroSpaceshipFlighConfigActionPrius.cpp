// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetHeroSpaceshipFlighConfigActionPrius.hpp>

namespace rivet::ddl::generated {
	SetHeroSpaceshipFlighConfigActionPrius::SetHeroSpaceshipFlighConfigActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		FlightConfig = serialized->get_string(FlightConfig_type_id); 
	}

	[[nodiscard]] auto
	SetHeroSpaceshipFlighConfigActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetHeroSpaceshipFlighConfigActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetHeroSpaceshipFlighConfigActionPrius> {
		if (incoming_type_id == SetHeroSpaceshipFlighConfigActionPrius::type_id) {
			return std::make_shared<SetHeroSpaceshipFlighConfigActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
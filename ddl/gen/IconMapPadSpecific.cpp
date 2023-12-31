// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IconMapOverride.hpp>
#include <rivet/ddl/generated/IconMapBase.hpp> 

#include <rivet/ddl/generated/IconMapPadSpecific.hpp>

namespace rivet::ddl::generated {
	IconMapPadSpecific::IconMapPadSpecific([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): IconMapBase(serialized) {
		DefaultIconMap = serialized->unwrap_into<rivet::ddl::generated::IconMapBase>(DefaultIconMap_type_id);
		X360Override = serialized->unwrap_into<rivet::ddl::generated::IconMapOverride>(X360Override_type_id);
		XOneOverride = serialized->unwrap_into<rivet::ddl::generated::IconMapOverride>(XOneOverride_type_id);
		DualShockOverride = serialized->unwrap_into<rivet::ddl::generated::IconMapOverride>(DualShockOverride_type_id);
		DualSenseOverride = serialized->unwrap_into<rivet::ddl::generated::IconMapOverride>(DualSenseOverride_type_id);
		SteamDeckOverride = serialized->unwrap_into<rivet::ddl::generated::IconMapOverride>(SteamDeckOverride_type_id);
		SwitchProOverride = serialized->unwrap_into<rivet::ddl::generated::IconMapOverride>(SwitchProOverride_type_id);
		GenericOverride = serialized->unwrap_into<rivet::ddl::generated::IconMapOverride>(GenericOverride_type_id);
		MkbOverride = serialized->unwrap_into<rivet::ddl::generated::IconMapOverride>(MkbOverride_type_id);
		SteamOverride = serialized->unwrap_into<rivet::ddl::generated::IconMapOverride>(SteamOverride_type_id); 
	}

	[[nodiscard]] auto
	IconMapPadSpecific::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IconMapPadSpecific::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapPadSpecific> {
		if (incoming_type_id == IconMapPadSpecific::type_id) {
			return std::make_shared<IconMapPadSpecific>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

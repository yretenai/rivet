// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IconMapSteamBinding.hpp>

namespace rivet::ddl::generated {
	IconMapSteamBinding::IconMapSteamBinding([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): IconMapBase(serialized) {
		Button = serialized->get_enum<rivet::ddl::generated::x7b87880c>(Button_type_id, rivet::ddl::generated::x7b87880c_values);
		ActionSet = serialized->get_enum<rivet::ddl::generated::xf4ca865e>(ActionSet_type_id, rivet::ddl::generated::xf4ca865e_values);
		AnalogDirection = serialized->get_enum<rivet::ddl::generated::x483aa079>(AnalogDirection_type_id, rivet::ddl::generated::x483aa079_values); 
	}

	auto
	IconMapSteamBinding::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	IconMapSteamBinding::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IconMapSteamBinding::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapSteamBinding> {
		if (incoming_type_id == IconMapSteamBinding::type_id) {
			return std::make_shared<IconMapSteamBinding>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

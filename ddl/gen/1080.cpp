// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponUserStateDataGame.hpp>

namespace rivet::ddl::generated {
	WeaponUserStateDataGame::WeaponUserStateDataGame([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponUserStateData(serialized) {
		UserState = serialized->get_enum<rivet::ddl::generated::xff945214>(UserState_type_id, rivet::ddl::generated::xff945214_values); 
	}

	auto
	WeaponUserStateDataGame::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponUserStateDataGame::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponUserStateDataGame::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponUserStateDataGame> {
		if (incoming_type_id == WeaponUserStateDataGame::type_id) {
			return std::make_shared<WeaponUserStateDataGame>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

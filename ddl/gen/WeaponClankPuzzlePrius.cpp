// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponClankPuzzlePrius.hpp>

namespace rivet::ddl::generated {
	WeaponClankPuzzlePrius::WeaponClankPuzzlePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {
		PuzzleVolumeType = serialized->get_enum<rivet::ddl::generated::x17b935fe>(PuzzleVolumeType_type_id, rivet::ddl::generated::x17b935fe_values);
		AmmoPerShot = serialized->get_float(AmmoPerShot_type_id); 
	}

	[[nodiscard]] auto
	WeaponClankPuzzlePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponClankPuzzlePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponClankPuzzlePrius> {
		if (incoming_type_id == WeaponClankPuzzlePrius::type_id) {
			return std::make_shared<WeaponClankPuzzlePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

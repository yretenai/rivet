// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameAwardMagShieldKillCountPrius.hpp>

namespace rivet::ddl::generated {
	GameAwardMagShieldKillCountPrius::GameAwardMagShieldKillCountPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AwardBasePrius(serialized) {

	}

	auto
	GameAwardMagShieldKillCountPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	GameAwardMagShieldKillCountPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameAwardMagShieldKillCountPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameAwardMagShieldKillCountPrius> {
		if (incoming_type_id == GameAwardMagShieldKillCountPrius::type_id) {
			return std::make_shared<GameAwardMagShieldKillCountPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

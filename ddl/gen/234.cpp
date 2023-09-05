// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookAtHeroGamePrius.hpp> 

#include <rivet/ddl/generated/LookAtHeroPrius.hpp>

namespace rivet::ddl::generated {
	LookAtHeroPrius::LookAtHeroPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetingAimAnglePrius(serialized) {

	}

	auto
	LookAtHeroPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	LookAtHeroPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LookAtHeroPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookAtHeroPrius> {
		if (incoming_type_id == LookAtHeroPrius::type_id) {
			return std::make_shared<LookAtHeroPrius>(serialized);
		}

		auto LookAtHeroGamePrius_ptr = LookAtHeroGamePrius::from_substruct(incoming_type_id, serialized);
		if (LookAtHeroGamePrius_ptr != nullptr) {
			return LookAtHeroGamePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

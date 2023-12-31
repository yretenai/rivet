// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlayerTargetingCharacterFacingPrius.hpp>
#include <rivet/ddl/generated/PlayerTargetingAimPrius.hpp>
#include <rivet/ddl/generated/PlayerTargetingStickControlPrius.hpp> 

#include <rivet/ddl/generated/PlayerTargetingBasePrius.hpp>

namespace rivet::ddl::generated {
	PlayerTargetingBasePrius::PlayerTargetingBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AttackIndex = serialized->get_int32(AttackIndex_type_id); 
	}

	[[nodiscard]] auto
	PlayerTargetingBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlayerTargetingBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlayerTargetingBasePrius> {
		if (incoming_type_id == PlayerTargetingBasePrius::type_id) {
			return std::make_shared<PlayerTargetingBasePrius>(serialized);
		}

		auto PlayerTargetingStickControlPrius_ptr = PlayerTargetingStickControlPrius::from_substruct(incoming_type_id, serialized);
		if (PlayerTargetingStickControlPrius_ptr != nullptr) {
			return PlayerTargetingStickControlPrius_ptr;
		}

		auto PlayerTargetingAimPrius_ptr = PlayerTargetingAimPrius::from_substruct(incoming_type_id, serialized);
		if (PlayerTargetingAimPrius_ptr != nullptr) {
			return PlayerTargetingAimPrius_ptr;
		}

		auto PlayerTargetingCharacterFacingPrius_ptr = PlayerTargetingCharacterFacingPrius::from_substruct(incoming_type_id, serialized);
		if (PlayerTargetingCharacterFacingPrius_ptr != nullptr) {
			return PlayerTargetingCharacterFacingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

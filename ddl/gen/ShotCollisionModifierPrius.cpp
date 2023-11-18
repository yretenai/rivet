// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MagShieldShotCollModPrius.hpp>
#include <rivet/ddl/generated/AllegianceShotCollModPrius.hpp>
#include <rivet/ddl/generated/ShotOwnerShotCollModPrius.hpp> 

#include <rivet/ddl/generated/ShotCollisionModifierPrius.hpp>

namespace rivet::ddl::generated {
	ShotCollisionModifierPrius::ShotCollisionModifierPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ResultFlags = serialized->get_bitset<rivet::ddl::generated::xb40c5ac8>(ResultFlags_type_id, rivet::ddl::generated::xb40c5ac8_values); 
	}

	[[nodiscard]] auto
	ShotCollisionModifierPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotCollisionModifierPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotCollisionModifierPrius> {
		if (incoming_type_id == ShotCollisionModifierPrius::type_id) {
			return std::make_shared<ShotCollisionModifierPrius>(serialized);
		}

		auto ShotOwnerShotCollModPrius_ptr = ShotOwnerShotCollModPrius::from_substruct(incoming_type_id, serialized);
		if (ShotOwnerShotCollModPrius_ptr != nullptr) {
			return ShotOwnerShotCollModPrius_ptr;
		}

		auto AllegianceShotCollModPrius_ptr = AllegianceShotCollModPrius::from_substruct(incoming_type_id, serialized);
		if (AllegianceShotCollModPrius_ptr != nullptr) {
			return AllegianceShotCollModPrius_ptr;
		}

		auto MagShieldShotCollModPrius_ptr = MagShieldShotCollModPrius::from_substruct(incoming_type_id, serialized);
		if (MagShieldShotCollModPrius_ptr != nullptr) {
			return MagShieldShotCollModPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

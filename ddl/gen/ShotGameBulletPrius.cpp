// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotRYNOPortalPrius.hpp>
#include <rivet/ddl/generated/ShotGameBulletMrFunGuyPrius.hpp>
#include <rivet/ddl/generated/ShotRYNOPrius.hpp> 

#include <rivet/ddl/generated/ShotGameBulletPrius.hpp>

namespace rivet::ddl::generated {
	ShotGameBulletPrius::ShotGameBulletPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {
		DamageRequestIdFromFiring = serialized->get_bool(DamageRequestIdFromFiring_type_id); 
	}

	[[nodiscard]] auto
	ShotGameBulletPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotGameBulletPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotGameBulletPrius> {
		if (incoming_type_id == ShotGameBulletPrius::type_id) {
			return std::make_shared<ShotGameBulletPrius>(serialized);
		}

		auto ShotRYNOPrius_ptr = ShotRYNOPrius::from_substruct(incoming_type_id, serialized);
		if (ShotRYNOPrius_ptr != nullptr) {
			return ShotRYNOPrius_ptr;
		}

		auto ShotGameBulletMrFunGuyPrius_ptr = ShotGameBulletMrFunGuyPrius::from_substruct(incoming_type_id, serialized);
		if (ShotGameBulletMrFunGuyPrius_ptr != nullptr) {
			return ShotGameBulletMrFunGuyPrius_ptr;
		}

		auto ShotRYNOPortalPrius_ptr = ShotRYNOPortalPrius::from_substruct(incoming_type_id, serialized);
		if (ShotRYNOPortalPrius_ptr != nullptr) {
			return ShotRYNOPortalPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
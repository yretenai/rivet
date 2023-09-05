// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMagShieldPrius.hpp>

namespace rivet::ddl::generated {
	ShotMagShieldPrius::ShotMagShieldPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {
		MaxCapturedShots = serialized->get_uint32(MaxCapturedShots_type_id); 
	}

	auto
	ShotMagShieldPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShotMagShieldPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMagShieldPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMagShieldPrius> {
		if (incoming_type_id == ShotMagShieldPrius::type_id) {
			return std::make_shared<ShotMagShieldPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

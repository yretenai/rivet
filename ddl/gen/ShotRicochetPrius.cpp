// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotRicochetPrius.hpp>

namespace rivet::ddl::generated {
	ShotRicochetPrius::ShotRicochetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotRicochetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotRicochetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotRicochetPrius> {
		if (incoming_type_id == ShotRicochetPrius::type_id) {
			return std::make_shared<ShotRicochetPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

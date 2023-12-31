// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionLightningRodPrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionLightningRodPrius::ShotMotionLightningRodPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotMotionLightningRodPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionLightningRodPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionLightningRodPrius> {
		if (incoming_type_id == ShotMotionLightningRodPrius::type_id) {
			return std::make_shared<ShotMotionLightningRodPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionStationaryPrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionStationaryPrius::ShotMotionStationaryPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShotMotionBasePrius(serialized) {

	}

	[[nodiscard]] auto
	ShotMotionStationaryPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionStationaryPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionStationaryPrius> {
		if (incoming_type_id == ShotMotionStationaryPrius::type_id) {
			return std::make_shared<ShotMotionStationaryPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

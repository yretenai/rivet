// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SphereTargeting.hpp>

namespace rivet::ddl::generated {
	SphereTargeting::SphereTargeting([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnShotTargetingMode(serialized) {
		SphereRadius = serialized->get_float(SphereRadius_type_id, 5.000000); 
	}

	[[nodiscard]] auto
	SphereTargeting::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SphereTargeting::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SphereTargeting> {
		if (incoming_type_id == SphereTargeting::type_id) {
			return std::make_shared<SphereTargeting>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

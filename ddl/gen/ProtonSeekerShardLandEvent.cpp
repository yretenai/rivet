// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProtonSeekerShardLandEvent.hpp>

namespace rivet::ddl::generated {
	ProtonSeekerShardLandEvent::ProtonSeekerShardLandEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ExplosionTime = serialized->get_float(ExplosionTime_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	ProtonSeekerShardLandEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProtonSeekerShardLandEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProtonSeekerShardLandEvent> {
		if (incoming_type_id == ProtonSeekerShardLandEvent::type_id) {
			return std::make_shared<ProtonSeekerShardLandEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

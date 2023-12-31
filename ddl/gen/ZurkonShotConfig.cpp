// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BasicBulletPrius.hpp> 

#include <rivet/ddl/generated/ZurkonShotConfig.hpp>

namespace rivet::ddl::generated {
	ZurkonShotConfig::ZurkonShotConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		ShotActor = serialized->get_string(ShotActor_type_id);
		ShotPrius = serialized->unwrap_into<rivet::ddl::generated::BasicBulletPrius>(ShotPrius_type_id); 
	}

	[[nodiscard]] auto
	ZurkonShotConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ZurkonShotConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ZurkonShotConfig> {
		if (incoming_type_id == ZurkonShotConfig::type_id) {
			return std::make_shared<ZurkonShotConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhysicsLauncherEntry.hpp>

namespace rivet::ddl::generated {
	PhysicsLauncherEntry::PhysicsLauncherEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetVolume = serialized->get_uint64(TargetVolume_type_id, 0);
		ArcHeight = serialized->get_float(ArcHeight_type_id, 0.000000);
		TargetId = serialized->get_string(TargetId_type_id, {}); 
	}

	[[nodiscard]] auto
	PhysicsLauncherEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhysicsLauncherEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhysicsLauncherEntry> {
		if (incoming_type_id == PhysicsLauncherEntry::type_id) {
			return std::make_shared<PhysicsLauncherEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

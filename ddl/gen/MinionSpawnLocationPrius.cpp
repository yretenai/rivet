// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MinionSpawnLocationPrius.hpp>

namespace rivet::ddl::generated {
	MinionSpawnLocationPrius::MinionSpawnLocationPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EnabledComponentBasePrius(serialized) {
		MasterSpawnLoc = serialized->get_uint64(MasterSpawnLoc_type_id); 
	}

	[[nodiscard]] auto
	MinionSpawnLocationPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MinionSpawnLocationPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MinionSpawnLocationPrius> {
		if (incoming_type_id == MinionSpawnLocationPrius::type_id) {
			return std::make_shared<MinionSpawnLocationPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

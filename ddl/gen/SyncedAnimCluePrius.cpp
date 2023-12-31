// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SyncedAnimCluePrius.hpp>

namespace rivet::ddl::generated {
	SyncedAnimCluePrius::SyncedAnimCluePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AnimCluePrius(serialized) {

	}

	[[nodiscard]] auto
	SyncedAnimCluePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SyncedAnimCluePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SyncedAnimCluePrius> {
		if (incoming_type_id == SyncedAnimCluePrius::type_id) {
			return std::make_shared<SyncedAnimCluePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

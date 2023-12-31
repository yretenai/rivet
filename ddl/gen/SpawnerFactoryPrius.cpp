// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SquadFactoryPrius.hpp>
#include <rivet/ddl/generated/SunsetSpawnerFactoryPrius.hpp> 

#include <rivet/ddl/generated/SpawnerFactoryPrius.hpp>

namespace rivet::ddl::generated {
	SpawnerFactoryPrius::SpawnerFactoryPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	SpawnerFactoryPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnerFactoryPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnerFactoryPrius> {
		if (incoming_type_id == SpawnerFactoryPrius::type_id) {
			return std::make_shared<SpawnerFactoryPrius>(serialized);
		}

		auto SunsetSpawnerFactoryPrius_ptr = SunsetSpawnerFactoryPrius::from_substruct(incoming_type_id, serialized);
		if (SunsetSpawnerFactoryPrius_ptr != nullptr) {
			return SunsetSpawnerFactoryPrius_ptr;
		}

		auto SquadFactoryPrius_ptr = SquadFactoryPrius::from_substruct(incoming_type_id, serialized);
		if (SquadFactoryPrius_ptr != nullptr) {
			return SquadFactoryPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

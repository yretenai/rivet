// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSpawnLocationData.hpp> 

#include <rivet/ddl/generated/HeroTeamSpawnPointPrius.hpp>

namespace rivet::ddl::generated {
	HeroTeamSpawnPointPrius::HeroTeamSpawnPointPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Team = serialized->get_enum<rivet::ddl::generated::xc115d639>(Team_type_id, rivet::ddl::generated::xc115d639_values);
		StartEnabled = serialized->get_bool(StartEnabled_type_id);
		HeroSpawnLocations = serialized->unwrap_into_many<rivet::ddl::generated::HeroSpawnLocationData>(HeroSpawnLocations_type_id); 
	}

	[[nodiscard]] auto
	HeroTeamSpawnPointPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroTeamSpawnPointPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroTeamSpawnPointPrius> {
		if (incoming_type_id == HeroTeamSpawnPointPrius::type_id) {
			return std::make_shared<HeroTeamSpawnPointPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
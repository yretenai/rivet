// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShardDetonationData.hpp> 

#include <rivet/ddl/generated/ShotProtoGrenadePrius.hpp>

namespace rivet::ddl::generated {
	ShotProtoGrenadePrius::ShotProtoGrenadePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeShotPrius(serialized) {
		ShardDetonationData = serialized->unwrap_into<rivet::ddl::generated::ShardDetonationData>(ShardDetonationData_type_id); 
	}

	[[nodiscard]] auto
	ShotProtoGrenadePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotProtoGrenadePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotProtoGrenadePrius> {
		if (incoming_type_id == ShotProtoGrenadePrius::type_id) {
			return std::make_shared<ShotProtoGrenadePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnInPlacePrius.hpp>

namespace rivet::ddl::generated {
	SpawnInPlacePrius::SpawnInPlacePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpawnActor = serialized->get_string(SpawnActor_type_id);
		SpawnTime = serialized->get_enum<rivet::ddl::generated::x87a08fd4>(SpawnTime_type_id, rivet::ddl::generated::x87a08fd4_values);
		LifeTime = serialized->get_float(LifeTime_type_id); 
	}

	[[nodiscard]] auto
	SpawnInPlacePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnInPlacePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnInPlacePrius> {
		if (incoming_type_id == SpawnInPlacePrius::type_id) {
			return std::make_shared<SpawnInPlacePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

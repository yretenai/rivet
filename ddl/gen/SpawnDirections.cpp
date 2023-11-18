// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnDirections.hpp>

namespace rivet::ddl::generated {
	SpawnDirections::SpawnDirections([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PositiveX = serialized->get_bool(PositiveX_type_id);
		NegativeX = serialized->get_bool(NegativeX_type_id);
		PositiveY = serialized->get_bool(PositiveY_type_id);
		NegativeY = serialized->get_bool(NegativeY_type_id);
		PositiveZ = serialized->get_bool(PositiveZ_type_id);
		NegativeZ = serialized->get_bool(NegativeZ_type_id); 
	}

	[[nodiscard]] auto
	SpawnDirections::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnDirections::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnDirections> {
		if (incoming_type_id == SpawnDirections::type_id) {
			return std::make_shared<SpawnDirections>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

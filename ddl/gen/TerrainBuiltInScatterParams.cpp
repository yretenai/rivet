// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainBuiltInScatterParams.hpp>

namespace rivet::ddl::generated {
	TerrainBuiltInScatterParams::TerrainBuiltInScatterParams([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BiomeConfig = serialized->get_string(BiomeConfig_type_id); 
	}

	[[nodiscard]] auto
	TerrainBuiltInScatterParams::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TerrainBuiltInScatterParams::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainBuiltInScatterParams> {
		if (incoming_type_id == TerrainBuiltInScatterParams::type_id) {
			return std::make_shared<TerrainBuiltInScatterParams>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

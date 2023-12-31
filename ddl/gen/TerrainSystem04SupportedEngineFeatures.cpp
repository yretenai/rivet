// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainSystem04SupportedEngineFeatures.hpp>

namespace rivet::ddl::generated {
	TerrainSystem04SupportedEngineFeatures::TerrainSystem04SupportedEngineFeatures([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		line00 = serialized->get_string(line00_type_id);
		line01 = serialized->get_string(line01_type_id); 
	}

	[[nodiscard]] auto
	TerrainSystem04SupportedEngineFeatures::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TerrainSystem04SupportedEngineFeatures::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainSystem04SupportedEngineFeatures> {
		if (incoming_type_id == TerrainSystem04SupportedEngineFeatures::type_id) {
			return std::make_shared<TerrainSystem04SupportedEngineFeatures>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

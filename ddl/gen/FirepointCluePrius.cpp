// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FirepointCluePrius.hpp>

namespace rivet::ddl::generated {
	FirepointCluePrius::FirepointCluePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CoverProvided = serialized->get_bitset<rivet::ddl::generated::xec8eef95>(CoverProvided_type_id, rivet::ddl::generated::xec8eef95_values);
		BotUsage = serialized->get_enum<rivet::ddl::generated::BotUsage>(BotUsage_type_id, rivet::ddl::generated::BotUsage_values);
		SearchAreas = serialized->get_uint64(SearchAreas_type_id); 
	}

	[[nodiscard]] auto
	FirepointCluePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FirepointCluePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FirepointCluePrius> {
		if (incoming_type_id == FirepointCluePrius::type_id) {
			return std::make_shared<FirepointCluePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
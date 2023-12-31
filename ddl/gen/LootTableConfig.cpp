// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LootTableElement.hpp> 

#include <rivet/ddl/generated/LootTableConfig.hpp>

namespace rivet::ddl::generated {
	LootTableConfig::LootTableConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MinCash = serialized->get_uint32(MinCash_type_id);
		MaxCash = serialized->get_uint32(MaxCash_type_id);
		LootLists = serialized->unwrap_into_many<rivet::ddl::generated::LootTableElement>(LootLists_type_id); 
	}

	[[nodiscard]] auto
	LootTableConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LootTableConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LootTableConfig> {
		if (incoming_type_id == LootTableConfig::type_id) {
			return std::make_shared<LootTableConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

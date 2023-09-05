// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LooksToFilters.hpp> 

#include <rivet/ddl/generated/BotAnimFilterSelectorData.hpp>

namespace rivet::ddl::generated {
	BotAnimFilterSelectorData::BotAnimFilterSelectorData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LooksToFilters = serialized->unwrap_into_many<rivet::ddl::generated::LooksToFilters>(LooksToFilters_type_id); 
	}

	auto
	BotAnimFilterSelectorData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BotAnimFilterSelectorData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotAnimFilterSelectorData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotAnimFilterSelectorData> {
		if (incoming_type_id == BotAnimFilterSelectorData::type_id) {
			return std::make_shared<BotAnimFilterSelectorData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

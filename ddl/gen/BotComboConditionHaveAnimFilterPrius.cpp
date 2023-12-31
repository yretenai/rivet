// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FilterPair.hpp> 

#include <rivet/ddl/generated/BotComboConditionHaveAnimFilterPrius.hpp>

namespace rivet::ddl::generated {
	BotComboConditionHaveAnimFilterPrius::BotComboConditionHaveAnimFilterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboConditionBasePrius(serialized) {
		FilterPair = serialized->unwrap_into<rivet::ddl::generated::FilterPair>(FilterPair_type_id); 
	}

	[[nodiscard]] auto
	BotComboConditionHaveAnimFilterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboConditionHaveAnimFilterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionHaveAnimFilterPrius> {
		if (incoming_type_id == BotComboConditionHaveAnimFilterPrius::type_id) {
			return std::make_shared<BotComboConditionHaveAnimFilterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

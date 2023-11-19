// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotLookSelectorData.hpp> 

#include <rivet/ddl/generated/BotConfigLookSelector.hpp>

namespace rivet::ddl::generated {
	BotConfigLookSelector::BotConfigLookSelector([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Data = serialized->unwrap_into<rivet::ddl::generated::BotLookSelectorData>(Data_type_id); 
	}

	[[nodiscard]] auto
	BotConfigLookSelector::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotConfigLookSelector::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigLookSelector> {
		if (incoming_type_id == BotConfigLookSelector::type_id) {
			return std::make_shared<BotConfigLookSelector>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
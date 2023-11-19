// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboConditionGoonBikeBolaCheckPrius.hpp>

namespace rivet::ddl::generated {
	BotComboConditionGoonBikeBolaCheckPrius::BotComboConditionGoonBikeBolaCheckPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboConditionDistFromClosestNavPrius(serialized) {
		FeetLocatorForLoS = serialized->get_string(FeetLocatorForLoS_type_id); 
	}

	[[nodiscard]] auto
	BotComboConditionGoonBikeBolaCheckPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboConditionGoonBikeBolaCheckPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionGoonBikeBolaCheckPrius> {
		if (incoming_type_id == BotComboConditionGoonBikeBolaCheckPrius::type_id) {
			return std::make_shared<BotComboConditionGoonBikeBolaCheckPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
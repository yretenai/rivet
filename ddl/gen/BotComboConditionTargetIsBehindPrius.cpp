// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboConditionTargetIsBehindPrius.hpp>

namespace rivet::ddl::generated {
	BotComboConditionTargetIsBehindPrius::BotComboConditionTargetIsBehindPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboConditionBasePrius(serialized) {
		BehindDotTolerance = serialized->get_float(BehindDotTolerance_type_id, 0.500000); 
	}

	[[nodiscard]] auto
	BotComboConditionTargetIsBehindPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboConditionTargetIsBehindPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionTargetIsBehindPrius> {
		if (incoming_type_id == BotComboConditionTargetIsBehindPrius::type_id) {
			return std::make_shared<BotComboConditionTargetIsBehindPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

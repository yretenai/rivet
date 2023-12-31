// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BonusDisplayDef.hpp> 

#include <rivet/ddl/generated/TradingCardBonusDisplayConfig.hpp>

namespace rivet::ddl::generated {
	TradingCardBonusDisplayConfig::TradingCardBonusDisplayConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		BonusDisplayList = serialized->unwrap_into_many<rivet::ddl::generated::BonusDisplayDef>(BonusDisplayList_type_id); 
	}

	[[nodiscard]] auto
	TradingCardBonusDisplayConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TradingCardBonusDisplayConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TradingCardBonusDisplayConfig> {
		if (incoming_type_id == TradingCardBonusDisplayConfig::type_id) {
			return std::make_shared<TradingCardBonusDisplayConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TradingCardItemPrius.hpp>

namespace rivet::ddl::generated {
	TradingCardItemPrius::TradingCardItemPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameItemPrius(serialized) {

	}

	[[nodiscard]] auto
	TradingCardItemPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TradingCardItemPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TradingCardItemPrius> {
		if (incoming_type_id == TradingCardItemPrius::type_id) {
			return std::make_shared<TradingCardItemPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
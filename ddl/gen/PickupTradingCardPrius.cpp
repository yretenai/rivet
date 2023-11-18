// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupTradingCardPrius.hpp>

namespace rivet::ddl::generated {
	PickupTradingCardPrius::PickupTradingCardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GamePickupItemPrius(serialized) {
		CardCount = serialized->get_uint8(CardCount_type_id);
		CardID = serialized->get_enum<rivet::ddl::generated::x507460e6>(CardID_type_id, rivet::ddl::generated::x507460e6_values); 
	}

	[[nodiscard]] auto
	PickupTradingCardPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupTradingCardPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupTradingCardPrius> {
		if (incoming_type_id == PickupTradingCardPrius::type_id) {
			return std::make_shared<PickupTradingCardPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

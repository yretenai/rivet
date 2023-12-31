// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChestKeyList.hpp>
#include <rivet/ddl/generated/CommonLootData.hpp> 

#include <rivet/ddl/generated/ChestOfferPrius.hpp>

namespace rivet::ddl::generated {
	ChestOfferPrius::ChestOfferPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OfferPrius(serialized) {
		ChestLootConfig = serialized->unwrap_into<rivet::ddl::generated::CommonLootData>(ChestLootConfig_type_id);
		Keys = serialized->unwrap_into<rivet::ddl::generated::ChestKeyList>(Keys_type_id); 
	}

	[[nodiscard]] auto
	ChestOfferPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChestOfferPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChestOfferPrius> {
		if (incoming_type_id == ChestOfferPrius::type_id) {
			return std::make_shared<ChestOfferPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

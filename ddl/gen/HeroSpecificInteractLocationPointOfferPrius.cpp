// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSpecificInteractLocationPointOfferPrius.hpp>

namespace rivet::ddl::generated {
	HeroSpecificInteractLocationPointOfferPrius::HeroSpecificInteractLocationPointOfferPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): InteractLocationPointOfferPrius(serialized) {
		HeroType = serialized->get_enum<rivet::ddl::generated::HeroTypes>(HeroType_type_id, rivet::ddl::generated::HeroTypes_values, rivet::ddl::generated::HeroTypes::Ratchet);
		ControlBinding = serialized->get_enum<rivet::ddl::generated::HeroControl>(ControlBinding_type_id, rivet::ddl::generated::HeroControl_values, rivet::ddl::generated::HeroControl::Melee); 
	}

	[[nodiscard]] auto
	HeroSpecificInteractLocationPointOfferPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroSpecificInteractLocationPointOfferPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSpecificInteractLocationPointOfferPrius> {
		if (incoming_type_id == HeroSpecificInteractLocationPointOfferPrius::type_id) {
			return std::make_shared<HeroSpecificInteractLocationPointOfferPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

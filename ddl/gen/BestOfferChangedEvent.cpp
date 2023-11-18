// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BestOfferChangedEvent.hpp>

namespace rivet::ddl::generated {
	BestOfferChangedEvent::BestOfferChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BestOfferChangedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BestOfferChangedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BestOfferChangedEvent> {
		if (incoming_type_id == BestOfferChangedEvent::type_id) {
			return std::make_shared<BestOfferChangedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

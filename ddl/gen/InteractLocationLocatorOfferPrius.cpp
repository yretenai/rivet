// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/InteractLocationLocatorOfferPrius.hpp>

namespace rivet::ddl::generated {
	InteractLocationLocatorOfferPrius::InteractLocationLocatorOfferPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HoldOfferPrius(serialized) {

	}

	[[nodiscard]] auto
	InteractLocationLocatorOfferPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InteractLocationLocatorOfferPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InteractLocationLocatorOfferPrius> {
		if (incoming_type_id == InteractLocationLocatorOfferPrius::type_id) {
			return std::make_shared<InteractLocationLocatorOfferPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

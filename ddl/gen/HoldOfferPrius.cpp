// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RemoveTrapOfferPrius.hpp>
#include <rivet/ddl/generated/PickupCarryableOfferPrius.hpp>
#include <rivet/ddl/generated/NeedCurrencyOfferPrius.hpp>
#include <rivet/ddl/generated/InteractLocationLocatorOfferPrius.hpp>
#include <rivet/ddl/generated/PickupBaseOfferPrius.hpp>
#include <rivet/ddl/generated/InteractLocationVolumeOfferPrius.hpp>
#include <rivet/ddl/generated/InteractLocationPointOfferPrius.hpp> 

#include <rivet/ddl/generated/HoldOfferPrius.hpp>

namespace rivet::ddl::generated {
	HoldOfferPrius::HoldOfferPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ProximityOfferPrius(serialized) {

	}

	[[nodiscard]] auto
	HoldOfferPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HoldOfferPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoldOfferPrius> {
		if (incoming_type_id == HoldOfferPrius::type_id) {
			return std::make_shared<HoldOfferPrius>(serialized);
		}

		auto InteractLocationPointOfferPrius_ptr = InteractLocationPointOfferPrius::from_substruct(incoming_type_id, serialized);
		if (InteractLocationPointOfferPrius_ptr != nullptr) {
			return InteractLocationPointOfferPrius_ptr;
		}

		auto InteractLocationVolumeOfferPrius_ptr = InteractLocationVolumeOfferPrius::from_substruct(incoming_type_id, serialized);
		if (InteractLocationVolumeOfferPrius_ptr != nullptr) {
			return InteractLocationVolumeOfferPrius_ptr;
		}

		auto InteractLocationLocatorOfferPrius_ptr = InteractLocationLocatorOfferPrius::from_substruct(incoming_type_id, serialized);
		if (InteractLocationLocatorOfferPrius_ptr != nullptr) {
			return InteractLocationLocatorOfferPrius_ptr;
		}

		auto NeedCurrencyOfferPrius_ptr = NeedCurrencyOfferPrius::from_substruct(incoming_type_id, serialized);
		if (NeedCurrencyOfferPrius_ptr != nullptr) {
			return NeedCurrencyOfferPrius_ptr;
		}

		auto PickupBaseOfferPrius_ptr = PickupBaseOfferPrius::from_substruct(incoming_type_id, serialized);
		if (PickupBaseOfferPrius_ptr != nullptr) {
			return PickupBaseOfferPrius_ptr;
		}

		auto PickupCarryableOfferPrius_ptr = PickupCarryableOfferPrius::from_substruct(incoming_type_id, serialized);
		if (PickupCarryableOfferPrius_ptr != nullptr) {
			return PickupCarryableOfferPrius_ptr;
		}

		auto RemoveTrapOfferPrius_ptr = RemoveTrapOfferPrius::from_substruct(incoming_type_id, serialized);
		if (RemoveTrapOfferPrius_ptr != nullptr) {
			return RemoveTrapOfferPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

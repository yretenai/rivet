// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MountFlyGotoOfferPrius.hpp>
#include <rivet/ddl/generated/TeleporterOfferPrius.hpp>
#include <rivet/ddl/generated/MountOfferPrius.hpp> 

#include <rivet/ddl/generated/GenericOfferPrius.hpp>

namespace rivet::ddl::generated {
	GenericOfferPrius::GenericOfferPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ProximityOfferPrius(serialized) {

	}

	[[nodiscard]] auto
	GenericOfferPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GenericOfferPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GenericOfferPrius> {
		if (incoming_type_id == GenericOfferPrius::type_id) {
			return std::make_shared<GenericOfferPrius>(serialized);
		}

		auto MountOfferPrius_ptr = MountOfferPrius::from_substruct(incoming_type_id, serialized);
		if (MountOfferPrius_ptr != nullptr) {
			return MountOfferPrius_ptr;
		}

		auto TeleporterOfferPrius_ptr = TeleporterOfferPrius::from_substruct(incoming_type_id, serialized);
		if (TeleporterOfferPrius_ptr != nullptr) {
			return TeleporterOfferPrius_ptr;
		}

		auto MountFlyGotoOfferPrius_ptr = MountFlyGotoOfferPrius::from_substruct(incoming_type_id, serialized);
		if (MountFlyGotoOfferPrius_ptr != nullptr) {
			return MountFlyGotoOfferPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

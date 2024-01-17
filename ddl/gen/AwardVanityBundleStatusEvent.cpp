// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AwardVanityBundleStatusEvent.hpp>

namespace rivet::ddl::generated {
	AwardVanityBundleStatusEvent::AwardVanityBundleStatusEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		CurrentHeadBundle = serialized->get_uint64(CurrentHeadBundle_type_id, 0);
		CurrentTorsoBundle = serialized->get_uint64(CurrentTorsoBundle_type_id, 0);
		CurrentLegsBundle = serialized->get_uint64(CurrentLegsBundle_type_id, 0); 
	}

	[[nodiscard]] auto
	AwardVanityBundleStatusEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AwardVanityBundleStatusEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwardVanityBundleStatusEvent> {
		if (incoming_type_id == AwardVanityBundleStatusEvent::type_id) {
			return std::make_shared<AwardVanityBundleStatusEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

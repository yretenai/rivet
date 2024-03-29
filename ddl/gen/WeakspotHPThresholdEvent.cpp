// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeakspotHPThresholdEvent.hpp>

namespace rivet::ddl::generated {
	WeakspotHPThresholdEvent::WeakspotHPThresholdEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HPThresholdEvent(serialized) {
		LocatorName = serialized->get_string(LocatorName_type_id, {}); 
	}

	[[nodiscard]] auto
	WeakspotHPThresholdEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeakspotHPThresholdEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeakspotHPThresholdEvent> {
		if (incoming_type_id == WeakspotHPThresholdEvent::type_id) {
			return std::make_shared<WeakspotHPThresholdEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

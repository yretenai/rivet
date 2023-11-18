// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameFocusTrackingConfig.hpp>
#include <rivet/ddl/generated/FocusTrackingManagerData.hpp> 

#include <rivet/ddl/generated/FocusTrackingConfig.hpp>

namespace rivet::ddl::generated {
	FocusTrackingConfig::FocusTrackingConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		FocusTrackingData = serialized->unwrap_into<rivet::ddl::generated::FocusTrackingManagerData>(FocusTrackingData_type_id); 
	}

	[[nodiscard]] auto
	FocusTrackingConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FocusTrackingConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FocusTrackingConfig> {
		if (incoming_type_id == FocusTrackingConfig::type_id) {
			return std::make_shared<FocusTrackingConfig>(serialized);
		}

		auto GameFocusTrackingConfig_ptr = GameFocusTrackingConfig::from_substruct(incoming_type_id, serialized);
		if (GameFocusTrackingConfig_ptr != nullptr) {
			return GameFocusTrackingConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameFocusTrackingManagerData.hpp> 

#include <rivet/ddl/generated/GameFocusTrackingConfig.hpp>

namespace rivet::ddl::generated {
	GameFocusTrackingConfig::GameFocusTrackingConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): FocusTrackingConfig(serialized) {
		GameFocusTrackingData = serialized->unwrap_into<rivet::ddl::generated::GameFocusTrackingManagerData>(GameFocusTrackingData_type_id); 
	}

	auto
	GameFocusTrackingConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	GameFocusTrackingConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameFocusTrackingConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameFocusTrackingConfig> {
		if (incoming_type_id == GameFocusTrackingConfig::type_id) {
			return std::make_shared<GameFocusTrackingConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

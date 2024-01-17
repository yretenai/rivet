// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SwingshotLosSettings.hpp> 

#include <rivet/ddl/generated/SwingshotSettings.hpp>

namespace rivet::ddl::generated {
	SwingshotSettings::SwingshotSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxTargets = serialized->get_int32(MaxTargets_type_id, 64);
		MaxQueryResults = serialized->get_int32(MaxQueryResults_type_id, 16);
		Los = serialized->unwrap_into<rivet::ddl::generated::SwingshotLosSettings>(Los_type_id); 
	}

	[[nodiscard]] auto
	SwingshotSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SwingshotSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwingshotSettings> {
		if (incoming_type_id == SwingshotSettings::type_id) {
			return std::make_shared<SwingshotSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UISettings.hpp>

namespace rivet::ddl::generated {
	UISettings::UISettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MultiThreaded = serialized->get_bool(MultiThreaded_type_id, false);
		ThreadStackSize = serialized->get_uint32(ThreadStackSize_type_id, 49152);
		ShowViewMenu = serialized->get_bool(ShowViewMenu_type_id, false);
		DebugPOIs = serialized->get_bool(DebugPOIs_type_id, false);
		DebugSkipAutoLoad = serialized->get_bool(DebugSkipAutoLoad_type_id, false); 
	}

	[[nodiscard]] auto
	UISettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UISettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UISettings> {
		if (incoming_type_id == UISettings::type_id) {
			return std::make_shared<UISettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

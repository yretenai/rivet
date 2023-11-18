// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanitytSettings.hpp>

namespace rivet::ddl::generated {
	VanitytSettings::VanitytSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DrawDebugImguiWindow = serialized->get_bool(DrawDebugImguiWindow_type_id); 
	}

	[[nodiscard]] auto
	VanitytSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanitytSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanitytSettings> {
		if (incoming_type_id == VanitytSettings::type_id) {
			return std::make_shared<VanitytSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

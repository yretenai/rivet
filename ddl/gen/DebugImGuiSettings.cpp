// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugImGuiSettings.hpp>

namespace rivet::ddl::generated {
	DebugImGuiSettings::DebugImGuiSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DarkMode = serialized->get_bool(DarkMode_type_id, false);
		FontScale = serialized->get_float(FontScale_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	DebugImGuiSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugImGuiSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugImGuiSettings> {
		if (incoming_type_id == DebugImGuiSettings::type_id) {
			return std::make_shared<DebugImGuiSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

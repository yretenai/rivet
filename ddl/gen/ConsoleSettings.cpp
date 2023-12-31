// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConsoleSettings.hpp>

namespace rivet::ddl::generated {
	ConsoleSettings::ConsoleSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enable = serialized->get_bool(Enable_type_id);
		Font = serialized->get_string(Font_type_id);
		ForegroundColor = serialized->get_uint8s(ForegroundColor_type_id);
		BackgroundColor = serialized->get_uint8s(BackgroundColor_type_id); 
	}

	[[nodiscard]] auto
	ConsoleSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConsoleSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConsoleSettings> {
		if (incoming_type_id == ConsoleSettings::type_id) {
			return std::make_shared<ConsoleSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

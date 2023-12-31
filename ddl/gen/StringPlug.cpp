// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StringPlug.hpp>

namespace rivet::ddl::generated {
	StringPlug::StringPlug([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Text = serialized->get_string(Text_type_id); 
	}

	[[nodiscard]] auto
	StringPlug::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StringPlug::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StringPlug> {
		if (incoming_type_id == StringPlug::type_id) {
			return std::make_shared<StringPlug>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

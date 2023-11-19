// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CommandResult.hpp>

namespace rivet::ddl::generated {
	CommandResult::CommandResult([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StatusCode = serialized->get_int32(StatusCode_type_id);
		StatusMessage = serialized->get_string(StatusMessage_type_id);
		Path = serialized->get_string(Path_type_id);
		Content = serialized->get_field(Content_type_id); 
	}

	[[nodiscard]] auto
	CommandResult::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CommandResult::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CommandResult> {
		if (incoming_type_id == CommandResult::type_id) {
			return std::make_shared<CommandResult>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
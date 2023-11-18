// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RCSMessage.hpp>

namespace rivet::ddl::generated {
	RCSMessage::RCSMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Total = serialized->get_uint32(Total_type_id);
		Messages = serialized->get_strings(Messages_type_id);
		ClientFilePaths = serialized->get_strings(ClientFilePaths_type_id); 
	}

	[[nodiscard]] auto
	RCSMessage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RCSMessage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSMessage> {
		if (incoming_type_id == RCSMessage::type_id) {
			return std::make_shared<RCSMessage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogLine.hpp> 

#include <rivet/ddl/generated/ConversationConfig.hpp>

namespace rivet::ddl::generated {
	ConversationConfig::ConversationConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		DialogLines = serialized->unwrap_into_many<rivet::ddl::generated::DialogLine>(DialogLines_type_id); 
	}

	[[nodiscard]] auto
	ConversationConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConversationConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConversationConfig> {
		if (incoming_type_id == ConversationConfig::type_id) {
			return std::make_shared<ConversationConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
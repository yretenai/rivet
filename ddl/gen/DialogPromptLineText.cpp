// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogPromptLineText.hpp>

namespace rivet::ddl::generated {
	DialogPromptLineText::DialogPromptLineText([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DialogPromptLine(serialized) {
		LocalizationTag = serialized->get_string(LocalizationTag_type_id, {}); 
	}

	[[nodiscard]] auto
	DialogPromptLineText::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogPromptLineText::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogPromptLineText> {
		if (incoming_type_id == DialogPromptLineText::type_id) {
			return std::make_shared<DialogPromptLineText>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TitleScreenAccessibilityHighlightComponentPrius.hpp>

namespace rivet::ddl::generated {
	TitleScreenAccessibilityHighlightComponentPrius::TitleScreenAccessibilityHighlightComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AccessibilityHighlightComponentPrius(serialized) {

	}

	[[nodiscard]] auto
	TitleScreenAccessibilityHighlightComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TitleScreenAccessibilityHighlightComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TitleScreenAccessibilityHighlightComponentPrius> {
		if (incoming_type_id == TitleScreenAccessibilityHighlightComponentPrius::type_id) {
			return std::make_shared<TitleScreenAccessibilityHighlightComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
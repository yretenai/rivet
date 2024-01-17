// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimCompleteComponentElement.hpp>

namespace rivet::ddl::generated {
	AnimCompleteComponentElement::AnimCompleteComponentElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CompleteAnimDriverName = serialized->get_string(CompleteAnimDriverName_type_id, "AnimDriver");
		GotoAnimDriverName = serialized->get_string(GotoAnimDriverName_type_id, "GotoAnimDriver"); 
	}

	[[nodiscard]] auto
	AnimCompleteComponentElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimCompleteComponentElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimCompleteComponentElement> {
		if (incoming_type_id == AnimCompleteComponentElement::type_id) {
			return std::make_shared<AnimCompleteComponentElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

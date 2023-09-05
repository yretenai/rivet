// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UITutorialStepBase.hpp> 

#include <rivet/ddl/generated/UITutorialStep.hpp>

namespace rivet::ddl::generated {
	UITutorialStep::UITutorialStep([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Tutorial = serialized->unwrap_into<rivet::ddl::generated::UITutorialStepBase>(Tutorial_type_id); 
	}

	auto
	UITutorialStep::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	UITutorialStep::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UITutorialStep::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UITutorialStep> {
		if (incoming_type_id == UITutorialStep::type_id) {
			return std::make_shared<UITutorialStep>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

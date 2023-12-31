// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SwitchEditorModeInput.hpp>

namespace rivet::ddl::generated {
	SwitchEditorModeInput::SwitchEditorModeInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NewMode = serialized->get_enum<rivet::ddl::generated::xb5725fd2>(NewMode_type_id, rivet::ddl::generated::xb5725fd2_values); 
	}

	[[nodiscard]] auto
	SwitchEditorModeInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SwitchEditorModeInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwitchEditorModeInput> {
		if (incoming_type_id == SwitchEditorModeInput::type_id) {
			return std::make_shared<SwitchEditorModeInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetWindowSizeInput.hpp>

namespace rivet::ddl::generated {
	SetWindowSizeInput::SetWindowSizeInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		X = serialized->get_int32(X_type_id);
		Y = serialized->get_int32(Y_type_id);
		Width = serialized->get_int32(Width_type_id);
		Height = serialized->get_int32(Height_type_id); 
	}

	[[nodiscard]] auto
	SetWindowSizeInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetWindowSizeInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetWindowSizeInput> {
		if (incoming_type_id == SetWindowSizeInput::type_id) {
			return std::make_shared<SetWindowSizeInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

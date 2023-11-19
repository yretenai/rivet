// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UI_HackI32Position.hpp>

namespace rivet::ddl::generated {
	UI_HackI32Position::UI_HackI32Position([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		XPos = serialized->get_float(XPos_type_id);
		YPos = serialized->get_float(YPos_type_id); 
	}

	[[nodiscard]] auto
	UI_HackI32Position::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_HackI32Position::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_HackI32Position> {
		if (incoming_type_id == UI_HackI32Position::type_id) {
			return std::make_shared<UI_HackI32Position>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
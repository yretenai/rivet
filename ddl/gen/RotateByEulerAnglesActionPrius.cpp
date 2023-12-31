// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RotateByEulerAnglesActionPrius.hpp>

namespace rivet::ddl::generated {
	RotateByEulerAnglesActionPrius::RotateByEulerAnglesActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		Order = serialized->get_enum<rivet::ddl::generated::x95ca39fb>(Order_type_id, rivet::ddl::generated::x95ca39fb_values); 
	}

	[[nodiscard]] auto
	RotateByEulerAnglesActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RotateByEulerAnglesActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RotateByEulerAnglesActionPrius> {
		if (incoming_type_id == RotateByEulerAnglesActionPrius::type_id) {
			return std::make_shared<RotateByEulerAnglesActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

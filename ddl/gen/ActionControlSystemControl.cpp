// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActionControlSystemControl.hpp>

namespace rivet::ddl::generated {
	ActionControlSystemControl::ActionControlSystemControl([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Control = serialized->get_enum<rivet::ddl::generated::xf4a2a500>(Control_type_id, rivet::ddl::generated::xf4a2a500_values); 
	}

	[[nodiscard]] auto
	ActionControlSystemControl::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActionControlSystemControl::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActionControlSystemControl> {
		if (incoming_type_id == ActionControlSystemControl::type_id) {
			return std::make_shared<ActionControlSystemControl>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

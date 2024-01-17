// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VendorActivateScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	VendorActivateScriptActionPrius::VendorActivateScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Inventory);
		Activate = serialized->get_bool(Activate_type_id, true); 
	}

	[[nodiscard]] auto
	VendorActivateScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VendorActivateScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorActivateScriptActionPrius> {
		if (incoming_type_id == VendorActivateScriptActionPrius::type_id) {
			return std::make_shared<VendorActivateScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

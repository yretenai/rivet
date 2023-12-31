// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLAllowSubstruct.hpp>

namespace rivet::ddl::generated {
	DDLAllowSubstruct::DDLAllowSubstruct([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_string(Type_type_id);
		Obj = serialized->get_field(Obj_type_id); 
	}

	[[nodiscard]] auto
	DDLAllowSubstruct::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DDLAllowSubstruct::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DDLAllowSubstruct> {
		if (incoming_type_id == DDLAllowSubstruct::type_id) {
			return std::make_shared<DDLAllowSubstruct>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

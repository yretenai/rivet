// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ECMField.hpp>

namespace rivet::ddl::generated {
	ECMField::ECMField([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::x89ca8df1>(Type_type_id, rivet::ddl::generated::x89ca8df1_values);
		Value = serialized->get_string(Value_type_id); 
	}

	[[nodiscard]] auto
	ECMField::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ECMField::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ECMField> {
		if (incoming_type_id == ECMField::type_id) {
			return std::make_shared<ECMField>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

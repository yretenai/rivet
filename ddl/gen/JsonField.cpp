// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/JsonField.hpp>

namespace rivet::ddl::generated {
	JsonField::JsonField([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Wombat = serialized->get_field(Wombat_type_id); 
	}

	[[nodiscard]] auto
	JsonField::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	JsonField::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<JsonField> {
		if (incoming_type_id == JsonField::type_id) {
			return std::make_shared<JsonField>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

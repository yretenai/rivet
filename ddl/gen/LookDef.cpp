// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookDef.hpp>

namespace rivet::ddl::generated {
	LookDef::LookDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LookName = serialized->get_string(LookName_type_id, "Default"); 
	}

	[[nodiscard]] auto
	LookDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LookDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookDef> {
		if (incoming_type_id == LookDef::type_id) {
			return std::make_shared<LookDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

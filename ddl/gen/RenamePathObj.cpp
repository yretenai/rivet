// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RenamePathObj.hpp>

namespace rivet::ddl::generated {
	RenamePathObj::RenamePathObj([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ResourcePath = serialized->get_string(ResourcePath_type_id);
		OldPath = serialized->get_string(OldPath_type_id);
		NewPath = serialized->get_string(NewPath_type_id); 
	}

	[[nodiscard]] auto
	RenamePathObj::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RenamePathObj::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RenamePathObj> {
		if (incoming_type_id == RenamePathObj::type_id) {
			return std::make_shared<RenamePathObj>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptActionListFavorites.hpp>

namespace rivet::ddl::generated {
	ScriptActionListFavorites::ScriptActionListFavorites([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Names = serialized->get_strings(Names_type_id); 
	}

	[[nodiscard]] auto
	ScriptActionListFavorites::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptActionListFavorites::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptActionListFavorites> {
		if (incoming_type_id == ScriptActionListFavorites::type_id) {
			return std::make_shared<ScriptActionListFavorites>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
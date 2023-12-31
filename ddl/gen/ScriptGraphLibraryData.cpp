// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptGraphLibraryData.hpp>

namespace rivet::ddl::generated {
	ScriptGraphLibraryData::ScriptGraphLibraryData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPath = serialized->get_string(AssetPath_type_id);
		Tuid = serialized->get_uint64(Tuid_type_id); 
	}

	[[nodiscard]] auto
	ScriptGraphLibraryData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptGraphLibraryData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptGraphLibraryData> {
		if (incoming_type_id == ScriptGraphLibraryData::type_id) {
			return std::make_shared<ScriptGraphLibraryData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

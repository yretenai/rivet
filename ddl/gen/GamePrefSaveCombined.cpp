// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PCGamePreferencesSave.hpp>
#include <rivet/ddl/generated/GamePreferencesSave.hpp> 

#include <rivet/ddl/generated/GamePrefSaveCombined.hpp>

namespace rivet::ddl::generated {
	GamePrefSaveCombined::GamePrefSaveCombined([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BaseSave = serialized->unwrap_into<rivet::ddl::generated::GamePreferencesSave>(BaseSave_type_id);
		PCSave = serialized->unwrap_into<rivet::ddl::generated::PCGamePreferencesSave>(PCSave_type_id); 
	}

	[[nodiscard]] auto
	GamePrefSaveCombined::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GamePrefSaveCombined::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GamePrefSaveCombined> {
		if (incoming_type_id == GamePrefSaveCombined::type_id) {
			return std::make_shared<GamePrefSaveCombined>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ControlRemapPresetDataGame.hpp>

namespace rivet::ddl::generated {
	ControlRemapPresetDataGame::ControlRemapPresetDataGame([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ControlRemapPresetData(serialized) {

	}

	[[nodiscard]] auto
	ControlRemapPresetDataGame::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ControlRemapPresetDataGame::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ControlRemapPresetDataGame> {
		if (incoming_type_id == ControlRemapPresetDataGame::type_id) {
			return std::make_shared<ControlRemapPresetDataGame>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

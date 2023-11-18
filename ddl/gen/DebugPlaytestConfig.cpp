// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugPlaytest.hpp>
#include <rivet/ddl/generated/DebugNewGamePlaytest.hpp> 

#include <rivet/ddl/generated/DebugPlaytestConfig.hpp>

namespace rivet::ddl::generated {
	DebugPlaytestConfig::DebugPlaytestConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		NewGameDemoInfo = serialized->unwrap_into<rivet::ddl::generated::DebugNewGamePlaytest>(NewGameDemoInfo_type_id);
		Playtests = serialized->unwrap_into_many<rivet::ddl::generated::DebugPlaytest>(Playtests_type_id); 
	}

	[[nodiscard]] auto
	DebugPlaytestConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugPlaytestConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugPlaytestConfig> {
		if (incoming_type_id == DebugPlaytestConfig::type_id) {
			return std::make_shared<DebugPlaytestConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

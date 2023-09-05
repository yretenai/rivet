// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MacroModeData.hpp> 

#include <rivet/ddl/generated/GameMacroConfig.hpp>

namespace rivet::ddl::generated {
	GameMacroConfig::GameMacroConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Modes = serialized->unwrap_into_many<rivet::ddl::generated::MacroModeData>(Modes_type_id); 
	}

	auto
	GameMacroConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	GameMacroConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameMacroConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameMacroConfig> {
		if (incoming_type_id == GameMacroConfig::type_id) {
			return std::make_shared<GameMacroConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TextureDebugModeEngineCommand.hpp>

namespace rivet::ddl::generated {
	TextureDebugModeEngineCommand::TextureDebugModeEngineCommand([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Next = serialized->get_bool(Next_type_id); 
	}

	[[nodiscard]] auto
	TextureDebugModeEngineCommand::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TextureDebugModeEngineCommand::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TextureDebugModeEngineCommand> {
		if (incoming_type_id == TextureDebugModeEngineCommand::type_id) {
			return std::make_shared<TextureDebugModeEngineCommand>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

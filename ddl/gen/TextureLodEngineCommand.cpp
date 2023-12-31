// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TextureLodEngineCommand.hpp>

namespace rivet::ddl::generated {
	TextureLodEngineCommand::TextureLodEngineCommand([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Increment = serialized->get_bool(Increment_type_id); 
	}

	[[nodiscard]] auto
	TextureLodEngineCommand::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TextureLodEngineCommand::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TextureLodEngineCommand> {
		if (incoming_type_id == TextureLodEngineCommand::type_id) {
			return std::make_shared<TextureLodEngineCommand>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DestroyTextureEngineCommand.hpp>

namespace rivet::ddl::generated {
	DestroyTextureEngineCommand::DestroyTextureEngineCommand([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0); 
	}

	[[nodiscard]] auto
	DestroyTextureEngineCommand::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DestroyTextureEngineCommand::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DestroyTextureEngineCommand> {
		if (incoming_type_id == DestroyTextureEngineCommand::type_id) {
			return std::make_shared<DestroyTextureEngineCommand>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

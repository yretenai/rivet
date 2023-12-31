// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DestroySceneObjectEngineCommand.hpp>

namespace rivet::ddl::generated {
	DestroySceneObjectEngineCommand::DestroySceneObjectEngineCommand([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id); 
	}

	[[nodiscard]] auto
	DestroySceneObjectEngineCommand::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DestroySceneObjectEngineCommand::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DestroySceneObjectEngineCommand> {
		if (incoming_type_id == DestroySceneObjectEngineCommand::type_id) {
			return std::make_shared<DestroySceneObjectEngineCommand>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

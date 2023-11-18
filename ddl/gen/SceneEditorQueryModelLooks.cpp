// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SceneEditorQueryModelLooks.hpp>

namespace rivet::ddl::generated {
	SceneEditorQueryModelLooks::SceneEditorQueryModelLooks([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NameHashes = serialized->get_uint32s(NameHashes_type_id); 
	}

	[[nodiscard]] auto
	SceneEditorQueryModelLooks::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneEditorQueryModelLooks::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorQueryModelLooks> {
		if (incoming_type_id == SceneEditorQueryModelLooks::type_id) {
			return std::make_shared<SceneEditorQueryModelLooks>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

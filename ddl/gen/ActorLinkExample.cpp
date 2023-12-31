// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorLinkExample.hpp>

namespace rivet::ddl::generated {
	ActorLinkExample::ActorLinkExample([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Volumes = serialized->get_uint64s(Volumes_type_id);
		AnyActor = serialized->get_uint64(AnyActor_type_id);
		AnyModelOrVolumeActor = serialized->get_uint64(AnyModelOrVolumeActor_type_id);
		AnyKindOfModel = serialized->get_uint64(AnyKindOfModel_type_id);
		AnyKindOfSceneNode = serialized->get_uint64(AnyKindOfSceneNode_type_id); 
	}

	[[nodiscard]] auto
	ActorLinkExample::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorLinkExample::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorLinkExample> {
		if (incoming_type_id == ActorLinkExample::type_id) {
			return std::make_shared<ActorLinkExample>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

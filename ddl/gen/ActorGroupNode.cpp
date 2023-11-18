// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorGroupNode.hpp>

namespace rivet::ddl::generated {
	ActorGroupNode::ActorGroupNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Id = serialized->get_uint64(Id_type_id);
		IsGlobal = serialized->get_bool(IsGlobal_type_id);
		Actors = serialized->get_uint64s(Actors_type_id); 
	}

	[[nodiscard]] auto
	ActorGroupNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorGroupNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorGroupNode> {
		if (incoming_type_id == ActorGroupNode::type_id) {
			return std::make_shared<ActorGroupNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

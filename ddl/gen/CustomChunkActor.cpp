// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/CustomChunkActor.hpp>

namespace rivet::ddl::generated {
	CustomChunkActor::CustomChunkActor([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Actor = serialized->get_string(Actor_type_id);
		Offset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Offset_type_id); 
	}

	[[nodiscard]] auto
	CustomChunkActor::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CustomChunkActor::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomChunkActor> {
		if (incoming_type_id == CustomChunkActor::type_id) {
			return std::make_shared<CustomChunkActor>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AlembicClip.hpp> 

#include <rivet/ddl/generated/AlembicCineActor.hpp>

namespace rivet::ddl::generated {
	AlembicCineActor::AlembicCineActor([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FilterNodeName = serialized->get_string(FilterNodeName_type_id);
		Clips = serialized->unwrap_into_many<rivet::ddl::generated::AlembicClip>(Clips_type_id); 
	}

	[[nodiscard]] auto
	AlembicCineActor::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AlembicCineActor::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AlembicCineActor> {
		if (incoming_type_id == AlembicCineActor::type_id) {
			return std::make_shared<AlembicCineActor>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

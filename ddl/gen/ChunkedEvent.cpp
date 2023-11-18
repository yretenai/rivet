// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ChunkedEvent.hpp>

namespace rivet::ddl::generated {
	ChunkedEvent::ChunkedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ChunkingComponentName = serialized->get_string(ChunkingComponentName_type_id);
		ConfigurationName = serialized->get_string(ConfigurationName_type_id);
		HitDirection = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(HitDirection_type_id); 
	}

	[[nodiscard]] auto
	ChunkedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChunkedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChunkedEvent> {
		if (incoming_type_id == ChunkedEvent::type_id) {
			return std::make_shared<ChunkedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

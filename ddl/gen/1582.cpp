// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/MapElementData.hpp>

namespace rivet::ddl::generated {
	MapElementData::MapElementData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		ActorId = serialized->get_uint64(ActorId_type_id);
		Position = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Position_type_id); 
	}

	auto
	MapElementData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	MapElementData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MapElementData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MapElementData> {
		if (incoming_type_id == MapElementData::type_id) {
			return std::make_shared<MapElementData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

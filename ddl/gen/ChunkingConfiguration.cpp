// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChunkingMaterialData.hpp>
#include <rivet/ddl/generated/CustomChunkActor.hpp>
#include <rivet/ddl/generated/CustomChunk.hpp> 

#include <rivet/ddl/generated/ChunkingConfiguration.hpp>

namespace rivet::ddl::generated {
	ChunkingConfiguration::ChunkingConfiguration([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Weight = serialized->get_float(Weight_type_id);
		ChunkLookGroup = serialized->get_string(ChunkLookGroup_type_id);
		CustomChunks = serialized->unwrap_into_many<rivet::ddl::generated::CustomChunk>(CustomChunks_type_id);
		ChunkActors = serialized->unwrap_into_many<rivet::ddl::generated::CustomChunkActor>(ChunkActors_type_id);
		StumpType = serialized->get_enum<rivet::ddl::generated::x68a523f1>(StumpType_type_id, rivet::ddl::generated::x68a523f1_values);
		StumpLookGroup = serialized->get_string(StumpLookGroup_type_id);
		MaterialData = serialized->unwrap_into<rivet::ddl::generated::ChunkingMaterialData>(MaterialData_type_id); 
	}

	[[nodiscard]] auto
	ChunkingConfiguration::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChunkingConfiguration::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChunkingConfiguration> {
		if (incoming_type_id == ChunkingConfiguration::type_id) {
			return std::make_shared<ChunkingConfiguration>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

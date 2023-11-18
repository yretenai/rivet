// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookSwap.hpp>
#include <rivet/ddl/generated/GenericChunk.hpp>
#include <rivet/ddl/generated/LookChunk.hpp>
#include <rivet/ddl/generated/DamageStateElement.hpp> 

#include <rivet/ddl/generated/DamageStateData.hpp>

namespace rivet::ddl::generated {
	DamageStateData::DamageStateData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinPixelizedSize = serialized->get_float(MinPixelizedSize_type_id);
		DamageStates = serialized->unwrap_into_many<rivet::ddl::generated::DamageStateElement>(DamageStates_type_id);
		ChunkableLooks = serialized->unwrap_into_many<rivet::ddl::generated::LookChunk>(ChunkableLooks_type_id);
		GenericChunks = serialized->unwrap_into_many<rivet::ddl::generated::GenericChunk>(GenericChunks_type_id);
		SwappableLooks = serialized->unwrap_into_many<rivet::ddl::generated::LookSwap>(SwappableLooks_type_id);
		Conduit = serialized->get_string(Conduit_type_id);
		AudioConduit = serialized->get_string(AudioConduit_type_id);
		DestroyOnDeathChunkSpawn = serialized->get_bool(DestroyOnDeathChunkSpawn_type_id); 
	}

	[[nodiscard]] auto
	DamageStateData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageStateData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageStateData> {
		if (incoming_type_id == DamageStateData::type_id) {
			return std::make_shared<DamageStateData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

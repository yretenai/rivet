// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnableChunk.hpp> 

#include <rivet/ddl/generated/BreakableStageData.hpp>

namespace rivet::ddl::generated {
	BreakableStageData::BreakableStageData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Model = serialized->get_string(Model_type_id);
		AnimSet = serialized->get_string(AnimSet_type_id);
		AnimDriver = serialized->get_string(AnimDriver_type_id);
		ChunkModels = serialized->get_strings(ChunkModels_type_id);
		NoncollidingChunkModels = serialized->unwrap_into_many<rivet::ddl::generated::SpawnableChunk>(NoncollidingChunkModels_type_id);
		DebrisModels = serialized->get_strings(DebrisModels_type_id);
		BrokenAtHealth = serialized->get_float(BrokenAtHealth_type_id);
		ManualBreak = serialized->get_bool(ManualBreak_type_id); 
	}

	[[nodiscard]] auto
	BreakableStageData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BreakableStageData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableStageData> {
		if (incoming_type_id == BreakableStageData::type_id) {
			return std::make_shared<BreakableStageData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

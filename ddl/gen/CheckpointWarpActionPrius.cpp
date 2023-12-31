// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CheckpointWarpActionPrius.hpp>

namespace rivet::ddl::generated {
	CheckpointWarpActionPrius::CheckpointWarpActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		CheckpointName = serialized->get_string(CheckpointName_type_id);
		DimensionCheckpointName = serialized->get_string(DimensionCheckpointName_type_id);
		DesiredHero = serialized->get_enum<rivet::ddl::generated::HeroTypes>(DesiredHero_type_id, rivet::ddl::generated::HeroTypes_values);
		ImmediatelySaveCheckpoint = serialized->get_bool(ImmediatelySaveCheckpoint_type_id); 
	}

	[[nodiscard]] auto
	CheckpointWarpActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CheckpointWarpActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CheckpointWarpActionPrius> {
		if (incoming_type_id == CheckpointWarpActionPrius::type_id) {
			return std::make_shared<CheckpointWarpActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

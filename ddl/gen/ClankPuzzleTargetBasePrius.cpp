// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPuzzleTargetPrius.hpp> 

#include <rivet/ddl/generated/ClankPuzzleTargetBasePrius.hpp>

namespace rivet::ddl::generated {
	ClankPuzzleTargetBasePrius::ClankPuzzleTargetBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetConfig = serialized->get_string(TargetConfig_type_id, {});
		ShowHoverTip = serialized->get_bool(ShowHoverTip_type_id, false);
		ActorGroup = serialized->get_uint64(ActorGroup_type_id, 0);
		VisualActorGroup = serialized->get_uint64(VisualActorGroup_type_id, 0); 
	}

	[[nodiscard]] auto
	ClankPuzzleTargetBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPuzzleTargetBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleTargetBasePrius> {
		if (incoming_type_id == ClankPuzzleTargetBasePrius::type_id) {
			return std::make_shared<ClankPuzzleTargetBasePrius>(serialized);
		}

		auto ClankPuzzleTargetPrius_ptr = ClankPuzzleTargetPrius::from_substruct(incoming_type_id, serialized);
		if (ClankPuzzleTargetPrius_ptr != nullptr) {
			return ClankPuzzleTargetPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

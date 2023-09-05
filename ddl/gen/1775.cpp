// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MultiTargetPenalty.hpp> 

#include <rivet/ddl/generated/DoomBotTargetingPrius.hpp>

namespace rivet::ddl::generated {
	DoomBotTargetingPrius::DoomBotTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TieredAggroTargetingPrius(serialized) {
		MultiTargetPenalties = serialized->unwrap_into_many<rivet::ddl::generated::MultiTargetPenalty>(MultiTargetPenalties_type_id); 
	}

	auto
	DoomBotTargetingPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DoomBotTargetingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DoomBotTargetingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DoomBotTargetingPrius> {
		if (incoming_type_id == DoomBotTargetingPrius::type_id) {
			return std::make_shared<DoomBotTargetingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

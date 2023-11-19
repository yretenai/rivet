// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp>
#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp> 

#include <rivet/ddl/generated/HeroLevelUpBeginEvent.hpp>

namespace rivet::ddl::generated {
	HeroLevelUpBeginEvent::HeroLevelUpBeginEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id);
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id); 
	}

	[[nodiscard]] auto
	HeroLevelUpBeginEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroLevelUpBeginEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroLevelUpBeginEvent> {
		if (incoming_type_id == HeroLevelUpBeginEvent::type_id) {
			return std::make_shared<HeroLevelUpBeginEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
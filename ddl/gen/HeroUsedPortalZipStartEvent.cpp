// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp>
#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/HeroUsedPortalZipStartEvent.hpp>

namespace rivet::ddl::generated {
	HeroUsedPortalZipStartEvent::HeroUsedPortalZipStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id);
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id); 
	}

	[[nodiscard]] auto
	HeroUsedPortalZipStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroUsedPortalZipStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroUsedPortalZipStartEvent> {
		if (incoming_type_id == HeroUsedPortalZipStartEvent::type_id) {
			return std::make_shared<HeroUsedPortalZipStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
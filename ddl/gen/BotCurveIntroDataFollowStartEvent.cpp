// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotCurveIntroDataFollowStartEvent.hpp>

namespace rivet::ddl::generated {
	BotCurveIntroDataFollowStartEvent::BotCurveIntroDataFollowStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BotCurveIntroDataFollowStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotCurveIntroDataFollowStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotCurveIntroDataFollowStartEvent> {
		if (incoming_type_id == BotCurveIntroDataFollowStartEvent::type_id) {
			return std::make_shared<BotCurveIntroDataFollowStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
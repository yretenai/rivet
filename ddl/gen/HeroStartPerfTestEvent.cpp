// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroStartPerfTestEvent.hpp>

namespace rivet::ddl::generated {
	HeroStartPerfTestEvent::HeroStartPerfTestEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	HeroStartPerfTestEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroStartPerfTestEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroStartPerfTestEvent> {
		if (incoming_type_id == HeroStartPerfTestEvent::type_id) {
			return std::make_shared<HeroStartPerfTestEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
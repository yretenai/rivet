// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FrozenL1Event.hpp>

namespace rivet::ddl::generated {
	FrozenL1Event::FrozenL1Event([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	FrozenL1Event::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FrozenL1Event::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FrozenL1Event> {
		if (incoming_type_id == FrozenL1Event::type_id) {
			return std::make_shared<FrozenL1Event>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

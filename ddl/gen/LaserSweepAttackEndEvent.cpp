// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LaserSweepAttackEndEvent.hpp>

namespace rivet::ddl::generated {
	LaserSweepAttackEndEvent::LaserSweepAttackEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	LaserSweepAttackEndEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LaserSweepAttackEndEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LaserSweepAttackEndEvent> {
		if (incoming_type_id == LaserSweepAttackEndEvent::type_id) {
			return std::make_shared<LaserSweepAttackEndEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

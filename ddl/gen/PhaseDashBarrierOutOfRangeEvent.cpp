// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhaseDashBarrierOutOfRangeEvent.hpp>

namespace rivet::ddl::generated {
	PhaseDashBarrierOutOfRangeEvent::PhaseDashBarrierOutOfRangeEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	PhaseDashBarrierOutOfRangeEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhaseDashBarrierOutOfRangeEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhaseDashBarrierOutOfRangeEvent> {
		if (incoming_type_id == PhaseDashBarrierOutOfRangeEvent::type_id) {
			return std::make_shared<PhaseDashBarrierOutOfRangeEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

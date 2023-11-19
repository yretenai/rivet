// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveFollowerResumingFromStopEvent.hpp>

namespace rivet::ddl::generated {
	CurveFollowerResumingFromStopEvent::CurveFollowerResumingFromStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	CurveFollowerResumingFromStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CurveFollowerResumingFromStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveFollowerResumingFromStopEvent> {
		if (incoming_type_id == CurveFollowerResumingFromStopEvent::type_id) {
			return std::make_shared<CurveFollowerResumingFromStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
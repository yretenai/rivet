// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HammerCrankResetEvent.hpp>

namespace rivet::ddl::generated {
	HammerCrankResetEvent::HammerCrankResetEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	HammerCrankResetEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HammerCrankResetEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HammerCrankResetEvent> {
		if (incoming_type_id == HammerCrankResetEvent::type_id) {
			return std::make_shared<HammerCrankResetEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

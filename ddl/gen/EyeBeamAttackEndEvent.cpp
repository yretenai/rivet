// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EyeBeamAttackEndEvent.hpp>

namespace rivet::ddl::generated {
	EyeBeamAttackEndEvent::EyeBeamAttackEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	EyeBeamAttackEndEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EyeBeamAttackEndEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EyeBeamAttackEndEvent> {
		if (incoming_type_id == EyeBeamAttackEndEvent::type_id) {
			return std::make_shared<EyeBeamAttackEndEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

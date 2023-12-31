// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TimedTriggerPadPrius.hpp> 

#include <rivet/ddl/generated/ToggleTriggerPadPrius.hpp>

namespace rivet::ddl::generated {
	ToggleTriggerPadPrius::ToggleTriggerPadPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerPadPrius(serialized) {
		MaterialConstant = serialized->get_string(MaterialConstant_type_id); 
	}

	[[nodiscard]] auto
	ToggleTriggerPadPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ToggleTriggerPadPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ToggleTriggerPadPrius> {
		if (incoming_type_id == ToggleTriggerPadPrius::type_id) {
			return std::make_shared<ToggleTriggerPadPrius>(serialized);
		}

		auto TimedTriggerPadPrius_ptr = TimedTriggerPadPrius::from_substruct(incoming_type_id, serialized);
		if (TimedTriggerPadPrius_ptr != nullptr) {
			return TimedTriggerPadPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

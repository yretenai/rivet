// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerSwitchRandomEnabledPrius.hpp>

namespace rivet::ddl::generated {
	TriggerSwitchRandomEnabledPrius::TriggerSwitchRandomEnabledPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerSwitchSimplePrius(serialized) {
		ChanceToBeEnabled = serialized->get_float(ChanceToBeEnabled_type_id); 
	}

	[[nodiscard]] auto
	TriggerSwitchRandomEnabledPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerSwitchRandomEnabledPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerSwitchRandomEnabledPrius> {
		if (incoming_type_id == TriggerSwitchRandomEnabledPrius::type_id) {
			return std::make_shared<TriggerSwitchRandomEnabledPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

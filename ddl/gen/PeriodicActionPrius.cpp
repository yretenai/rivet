// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PeriodicActionPrius.hpp>

namespace rivet::ddl::generated {
	PeriodicActionPrius::PeriodicActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		StartActive = serialized->get_bool(StartActive_type_id);
		StopOnTime = serialized->get_bool(StopOnTime_type_id);
		Timer = serialized->get_float(Timer_type_id); 
	}

	[[nodiscard]] auto
	PeriodicActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PeriodicActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PeriodicActionPrius> {
		if (incoming_type_id == PeriodicActionPrius::type_id) {
			return std::make_shared<PeriodicActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

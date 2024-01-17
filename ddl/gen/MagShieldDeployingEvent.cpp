// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MagShieldDeployingEvent.hpp>

namespace rivet::ddl::generated {
	MagShieldDeployingEvent::MagShieldDeployingEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Red = serialized->get_float(Red_type_id, 0.000000);
		Green = serialized->get_float(Green_type_id, 0.000000);
		Blue = serialized->get_float(Blue_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	MagShieldDeployingEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MagShieldDeployingEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MagShieldDeployingEvent> {
		if (incoming_type_id == MagShieldDeployingEvent::type_id) {
			return std::make_shared<MagShieldDeployingEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

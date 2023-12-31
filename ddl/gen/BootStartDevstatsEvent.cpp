// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BootStartDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	BootStartDevstatsEvent::BootStartDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		event_type = serialized->get_string(event_type_type_id);
		title_name = serialized->get_string(title_name_type_id);
		issuer_id = serialized->get_string(issuer_id_type_id);
		platform = serialized->get_string(platform_type_id);
		device_type = serialized->get_string(device_type_type_id);
		build_version = serialized->get_string(build_version_type_id);
		build_name = serialized->get_string(build_name_type_id);
		launch_method = serialized->get_enum<rivet::ddl::generated::x8b182f8e>(launch_method_type_id, rivet::ddl::generated::x8b182f8e_values);
		owner_id = serialized->get_string(owner_id_type_id); 
	}

	[[nodiscard]] auto
	BootStartDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BootStartDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BootStartDevstatsEvent> {
		if (incoming_type_id == BootStartDevstatsEvent::type_id) {
			return std::make_shared<BootStartDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

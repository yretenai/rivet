// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HardwareProfileDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	HardwareProfileDevstatsEvent::HardwareProfileDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		language = serialized->get_string(language_type_id);
		resolution = serialized->get_string(resolution_type_id);
		refresh_rate = serialized->get_float(refresh_rate_type_id);
		hdr_capable = serialized->get_bool(hdr_capable_type_id);
		dsd_card_name = serialized->get_string(dsd_card_name_type_id);
		dsd_displaymemory = serialized->get_string(dsd_displaymemory_type_id);
		dsd_displaymode = serialized->get_string(dsd_displaymode_type_id);
		dsd_drivermodel = serialized->get_string(dsd_drivermodel_type_id);
		dsd_driverversion = serialized->get_string(dsd_driverversion_type_id);
		dsd_monitor_number = serialized->get_int32(dsd_monitor_number_type_id);
		dsd_primary_monitor_model = serialized->get_string(dsd_primary_monitor_model_type_id);
		dsd_primary_monitor_name = serialized->get_string(dsd_primary_monitor_name_type_id);
		si_bios = serialized->get_string(si_bios_type_id);
		si_directxversion = serialized->get_string(si_directxversion_type_id);
		streaming_provider = serialized->get_string(streaming_provider_type_id);
		si_operating_system = serialized->get_string(si_operating_system_type_id);
		si_page_file = serialized->get_string(si_page_file_type_id);
		si_memory = serialized->get_string(si_memory_type_id);
		si_processor = serialized->get_string(si_processor_type_id);
		si_system_dpi_setting = serialized->get_string(si_system_dpi_setting_type_id);
		si_user_dpi_setting = serialized->get_string(si_user_dpi_setting_type_id);
		si_pcdx_adapter = serialized->get_string(si_pcdx_adapter_type_id);
		si_controller = serialized->get_string(si_controller_type_id);
		si_audio_device = serialized->get_string(si_audio_device_type_id);
		si_asset_disk_model = serialized->get_string(si_asset_disk_model_type_id);
		si_asset_disk_type = serialized->get_string(si_asset_disk_type_type_id); 
	}

	[[nodiscard]] auto
	HardwareProfileDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HardwareProfileDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HardwareProfileDevstatsEvent> {
		if (incoming_type_id == HardwareProfileDevstatsEvent::type_id) {
			return std::make_shared<HardwareProfileDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
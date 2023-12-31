// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EnvProbeJob.hpp>

namespace rivet::ddl::generated {
	EnvProbeJob::EnvProbeJob([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Changelist = serialized->get_uint32(Changelist_type_id);
		CaptureDirectOnly = serialized->get_bool(CaptureDirectOnly_type_id);
		UpdateProbeProxy = serialized->get_bool(UpdateProbeProxy_type_id);
		ProbeZones = serialized->get_strings(ProbeZones_type_id);
		Zones = serialized->get_strings(Zones_type_id);
		Atmosphere = serialized->get_string(Atmosphere_type_id);
		LightingCondition = serialized->get_enum<rivet::ddl::generated::LightingConditions>(LightingCondition_type_id, rivet::ddl::generated::LightingConditions_values); 
	}

	[[nodiscard]] auto
	EnvProbeJob::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EnvProbeJob::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnvProbeJob> {
		if (incoming_type_id == EnvProbeJob::type_id) {
			return std::make_shared<EnvProbeJob>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

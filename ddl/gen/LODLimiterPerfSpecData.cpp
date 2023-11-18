// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LODLimiterPerfSpecData.hpp>

namespace rivet::ddl::generated {
	LODLimiterPerfSpecData::LODLimiterPerfSpecData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Spec = serialized->get_enum<rivet::ddl::generated::x11adfe43>(Spec_type_id, rivet::ddl::generated::x11adfe43_values);
		MinLOD = serialized->get_uint32(MinLOD_type_id);
		DisableDuringCinematics = serialized->get_bool(DisableDuringCinematics_type_id); 
	}

	[[nodiscard]] auto
	LODLimiterPerfSpecData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LODLimiterPerfSpecData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LODLimiterPerfSpecData> {
		if (incoming_type_id == LODLimiterPerfSpecData::type_id) {
			return std::make_shared<LODLimiterPerfSpecData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

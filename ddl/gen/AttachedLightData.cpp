// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/AttachedLightData.hpp>

namespace rivet::ddl::generated {
	AttachedLightData::AttachedLightData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Light = serialized->get_uint64(Light_type_id);
		Locator = serialized->get_string(Locator_type_id);
		InitialLightColor = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(InitialLightColor_type_id);
		InitialLightIntensity = serialized->get_float(InitialLightIntensity_type_id); 
	}

	[[nodiscard]] auto
	AttachedLightData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AttachedLightData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttachedLightData> {
		if (incoming_type_id == AttachedLightData::type_id) {
			return std::make_shared<AttachedLightData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

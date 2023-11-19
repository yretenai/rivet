// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/EnvProbeCache.hpp>

namespace rivet::ddl::generated {
	EnvProbeCache::EnvProbeCache([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		ProbePos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(ProbePos_type_id);
		AxisX = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AxisX_type_id);
		AxisY = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AxisY_type_id);
		AxisZ = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AxisZ_type_id);
		Mip16Index = serialized->get_int32(Mip16Index_type_id);
		Mip32AssetIndex = serialized->get_int32(Mip32AssetIndex_type_id);
		Mip32SubIndex = serialized->get_int32(Mip32SubIndex_type_id);
		VolumeShape = serialized->get_enum<rivet::ddl::generated::VolumeShapes>(VolumeShape_type_id, rivet::ddl::generated::VolumeShapes_values);
		Weight = serialized->get_float(Weight_type_id);
		ProbeOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(ProbeOffset_type_id);
		FalloffDistNegX = serialized->get_float(FalloffDistNegX_type_id);
		FalloffDistPosX = serialized->get_float(FalloffDistPosX_type_id);
		FalloffDistNegY = serialized->get_float(FalloffDistNegY_type_id);
		FalloffDistPosY = serialized->get_float(FalloffDistPosY_type_id);
		FalloffDistNegZ = serialized->get_float(FalloffDistNegZ_type_id);
		FalloffDistPosZ = serialized->get_float(FalloffDistPosZ_type_id);
		ProxyDistNegX = serialized->get_float(ProxyDistNegX_type_id);
		ProxyDistPosX = serialized->get_float(ProxyDistPosX_type_id);
		ProxyDistNegY = serialized->get_float(ProxyDistNegY_type_id);
		ProxyDistPosY = serialized->get_float(ProxyDistPosY_type_id);
		ProxyDistNegZ = serialized->get_float(ProxyDistNegZ_type_id);
		ProxyDistPosZ = serialized->get_float(ProxyDistPosZ_type_id); 
	}

	[[nodiscard]] auto
	EnvProbeCache::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EnvProbeCache::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnvProbeCache> {
		if (incoming_type_id == EnvProbeCache::type_id) {
			return std::make_shared<EnvProbeCache>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
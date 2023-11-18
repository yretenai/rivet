// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IntrospectionZoneInstances.hpp>
#include <rivet/ddl/generated/IntrospectionRootSet.hpp>
#include <rivet/ddl/generated/IntrospectionAssetEntry.hpp> 

#include <rivet/ddl/generated/IntrospectionAssetInfo.hpp>

namespace rivet::ddl::generated {
	IntrospectionAssetInfo::IntrospectionAssetInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Platform = serialized->get_string(Platform_type_id);
		AssetEntries = serialized->unwrap_into_many<rivet::ddl::generated::IntrospectionAssetEntry>(AssetEntries_type_id);
		AlwaysLoadedSet = serialized->unwrap_into<rivet::ddl::generated::IntrospectionRootSet>(AlwaysLoadedSet_type_id);
		RootSets = serialized->unwrap_into_many<rivet::ddl::generated::IntrospectionRootSet>(RootSets_type_id);
		ZoneInstances = serialized->unwrap_into_many<rivet::ddl::generated::IntrospectionZoneInstances>(ZoneInstances_type_id); 
	}

	[[nodiscard]] auto
	IntrospectionAssetInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IntrospectionAssetInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IntrospectionAssetInfo> {
		if (incoming_type_id == IntrospectionAssetInfo::type_id) {
			return std::make_shared<IntrospectionAssetInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

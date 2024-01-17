// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetCacheEntry.hpp> 

#include <rivet/ddl/generated/AssetCacheInfo.hpp>

namespace rivet::ddl::generated {
	AssetCacheInfo::AssetCacheInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Total = serialized->get_uint32(Total_type_id, 0);
		Cost = serialized->get_int64(Cost_type_id, 0);
		Items = serialized->unwrap_into_many<rivet::ddl::generated::AssetCacheEntry>(Items_type_id); 
	}

	[[nodiscard]] auto
	AssetCacheInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetCacheInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetCacheInfo> {
		if (incoming_type_id == AssetCacheInfo::type_id) {
			return std::make_shared<AssetCacheInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

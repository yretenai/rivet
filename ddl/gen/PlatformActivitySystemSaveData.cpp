// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlatformActivitySystemSaveBase.hpp> 

#include <rivet/ddl/generated/PlatformActivitySystemSaveData.hpp>

namespace rivet::ddl::generated {
	PlatformActivitySystemSaveData::PlatformActivitySystemSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CachedAvailableActivities = serialized->get_uint32s(CachedAvailableActivities_type_id);
		DerivedSaveData = serialized->unwrap_into<rivet::ddl::generated::PlatformActivitySystemSaveBase>(DerivedSaveData_type_id); 
	}

	[[nodiscard]] auto
	PlatformActivitySystemSaveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlatformActivitySystemSaveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlatformActivitySystemSaveData> {
		if (incoming_type_id == PlatformActivitySystemSaveData::type_id) {
			return std::make_shared<PlatformActivitySystemSaveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

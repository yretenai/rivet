// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionGraphBuiltShared.hpp> 

#include <rivet/ddl/generated/MissionGraphBuiltTableEntry.hpp>

namespace rivet::ddl::generated {
	MissionGraphBuiltTableEntry::MissionGraphBuiltTableEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MissionGraphData = serialized->unwrap_into<rivet::ddl::generated::MissionGraphBuiltShared>(MissionGraphData_type_id); 
	}

	[[nodiscard]] auto
	MissionGraphBuiltTableEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionGraphBuiltTableEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionGraphBuiltTableEntry> {
		if (incoming_type_id == MissionGraphBuiltTableEntry::type_id) {
			return std::make_shared<MissionGraphBuiltTableEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
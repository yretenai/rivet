// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/XOrEndGroupNodeDef.hpp>
#include <rivet/ddl/generated/BranchEndNodeBaseDef.hpp> 

#include <rivet/ddl/generated/OrMissionSystemNodeDef.hpp>

namespace rivet::ddl::generated {
	OrMissionSystemNodeDef::OrMissionSystemNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MissionSystemLogicNodeDef(serialized) {

	}

	[[nodiscard]] auto
	OrMissionSystemNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OrMissionSystemNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OrMissionSystemNodeDef> {
		if (incoming_type_id == OrMissionSystemNodeDef::type_id) {
			return std::make_shared<OrMissionSystemNodeDef>(serialized);
		}

		auto BranchEndNodeBaseDef_ptr = BranchEndNodeBaseDef::from_substruct(incoming_type_id, serialized);
		if (BranchEndNodeBaseDef_ptr != nullptr) {
			return BranchEndNodeBaseDef_ptr;
		}

		auto XOrEndGroupNodeDef_ptr = XOrEndGroupNodeDef::from_substruct(incoming_type_id, serialized);
		if (XOrEndGroupNodeDef_ptr != nullptr) {
			return XOrEndGroupNodeDef_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

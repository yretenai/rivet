// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/TrajectoryDrawerArcData.hpp>

namespace rivet::ddl::generated {
	TrajectoryDrawerArcData::TrajectoryDrawerArcData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Material = serialized->get_string(Material_type_id);
		MaterialColorName = serialized->get_string(MaterialColorName_type_id);
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id); 
	}

	[[nodiscard]] auto
	TrajectoryDrawerArcData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TrajectoryDrawerArcData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TrajectoryDrawerArcData> {
		if (incoming_type_id == TrajectoryDrawerArcData::type_id) {
			return std::make_shared<TrajectoryDrawerArcData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FastTravelPointPropElement.hpp> 

#include <rivet/ddl/generated/FastTravelPointPrius.hpp>

namespace rivet::ddl::generated {
	FastTravelPointPrius::FastTravelPointPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MapPointName = serialized->get_string(MapPointName_type_id);
		CheckpointName = serialized->get_string(CheckpointName_type_id);
		Props = serialized->unwrap_into_many<rivet::ddl::generated::FastTravelPointPropElement>(Props_type_id); 
	}

	[[nodiscard]] auto
	FastTravelPointPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FastTravelPointPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FastTravelPointPrius> {
		if (incoming_type_id == FastTravelPointPrius::type_id) {
			return std::make_shared<FastTravelPointPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

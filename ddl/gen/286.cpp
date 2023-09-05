// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RegionData.hpp>

namespace rivet::ddl::generated {
	RegionData::RegionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Region = serialized->get_string(Region_type_id);
		IsBorderRegion = serialized->get_bool(IsBorderRegion_type_id); 
	}

	auto
	RegionData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	RegionData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RegionData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionData> {
		if (incoming_type_id == RegionData::type_id) {
			return std::make_shared<RegionData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

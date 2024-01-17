// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleEnterVolumePrius.hpp>

namespace rivet::ddl::generated {
	SimpleEnterVolumePrius::SimpleEnterVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SimpleEnterVolType = serialized->get_enum<rivet::ddl::generated::xc4393200>(SimpleEnterVolType_type_id, rivet::ddl::generated::xc4393200_values, rivet::ddl::generated::xc4393200::Tree);
		TreeSubType = serialized->get_enum<rivet::ddl::generated::xa2c3aa4a>(TreeSubType_type_id, rivet::ddl::generated::xa2c3aa4a_values, rivet::ddl::generated::xa2c3aa4a::Small);
		FlybySubType = serialized->get_enum<rivet::ddl::generated::x32557ecb>(FlybySubType_type_id, rivet::ddl::generated::x32557ecb_values, rivet::ddl::generated::x32557ecb::Small); 
	}

	[[nodiscard]] auto
	SimpleEnterVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleEnterVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleEnterVolumePrius> {
		if (incoming_type_id == SimpleEnterVolumePrius::type_id) {
			return std::make_shared<SimpleEnterVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

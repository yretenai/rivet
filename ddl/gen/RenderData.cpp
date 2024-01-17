// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/RenderData.hpp>

namespace rivet::ddl::generated {
	RenderData::RenderData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CustomInput = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CustomInput_type_id);
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id);
		AlphaValue = serialized->get_float(AlphaValue_type_id, 1.000000);
		AlphaSortBias = serialized->get_float(AlphaSortBias_type_id, 0.000000);
		ZBias = serialized->get_float(ZBias_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	RenderData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RenderData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RenderData> {
		if (incoming_type_id == RenderData::type_id) {
			return std::make_shared<RenderData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

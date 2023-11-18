// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainPaintingPref.hpp> 

#include <rivet/ddl/generated/VertexPaintingPref.hpp>

namespace rivet::ddl::generated {
	VertexPaintingPref::VertexPaintingPref([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Red = serialized->get_float(Red_type_id);
		Green = serialized->get_float(Green_type_id);
		Blue = serialized->get_float(Blue_type_id);
		Alpha = serialized->get_float(Alpha_type_id);
		EnableRed = serialized->get_bool(EnableRed_type_id);
		EnableGreen = serialized->get_bool(EnableGreen_type_id);
		EnableBlue = serialized->get_bool(EnableBlue_type_id);
		EnableAlpha = serialized->get_bool(EnableAlpha_type_id);
		Radius = serialized->get_float(Radius_type_id);
		FallOff = serialized->get_float(FallOff_type_id);
		Pressure = serialized->get_float(Pressure_type_id);
		ChannelDebug = serialized->get_enum<rivet::ddl::generated::xff467ac8>(ChannelDebug_type_id, rivet::ddl::generated::xff467ac8_values);
		WheelControl = serialized->get_enum<rivet::ddl::generated::x2c6c1f8d>(WheelControl_type_id, rivet::ddl::generated::x2c6c1f8d_values);
		MiddleClick = serialized->get_enum<rivet::ddl::generated::xa80d41ff>(MiddleClick_type_id, rivet::ddl::generated::xa80d41ff_values);
		Resolution = serialized->get_enum<rivet::ddl::generated::x1678ea2f>(Resolution_type_id, rivet::ddl::generated::x1678ea2f_values);
		TerrainPaintingPref = serialized->unwrap_into<rivet::ddl::generated::TerrainPaintingPref>(TerrainPaintingPref_type_id); 
	}

	[[nodiscard]] auto
	VertexPaintingPref::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VertexPaintingPref::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VertexPaintingPref> {
		if (incoming_type_id == VertexPaintingPref::type_id) {
			return std::make_shared<VertexPaintingPref>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

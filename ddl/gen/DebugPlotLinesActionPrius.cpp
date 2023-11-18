// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/DebugPlotLinesActionPrius.hpp>

namespace rivet::ddl::generated {
	DebugPlotLinesActionPrius::DebugPlotLinesActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		MaxValues = serialized->get_uint32(MaxValues_type_id);
		ScaleMinMax = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(ScaleMinMax_type_id);
		Animate = serialized->get_bool(Animate_type_id);
		Label = serialized->get_string(Label_type_id);
		OverlayText = serialized->get_string(OverlayText_type_id);
		Position = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Position_type_id);
		Position3D = serialized->get_bool(Position3D_type_id);
		Size = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Size_type_id); 
	}

	[[nodiscard]] auto
	DebugPlotLinesActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugPlotLinesActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugPlotLinesActionPrius> {
		if (incoming_type_id == DebugPlotLinesActionPrius::type_id) {
			return std::make_shared<DebugPlotLinesActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

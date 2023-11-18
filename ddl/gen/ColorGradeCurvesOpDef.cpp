// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BezierCurveDef.hpp> 

#include <rivet/ddl/generated/ColorGradeCurvesOpDef.hpp>

namespace rivet::ddl::generated {
	ColorGradeCurvesOpDef::ColorGradeCurvesOpDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Name = serialized->get_string(Name_type_id);
		Weight = serialized->get_float(Weight_type_id);
		Enabled = serialized->get_bool(Enabled_type_id);
		Curve = serialized->unwrap_into<rivet::ddl::generated::BezierCurveDef>(Curve_type_id); 
	}

	[[nodiscard]] auto
	ColorGradeCurvesOpDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ColorGradeCurvesOpDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ColorGradeCurvesOpDef> {
		if (incoming_type_id == ColorGradeCurvesOpDef::type_id) {
			return std::make_shared<ColorGradeCurvesOpDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

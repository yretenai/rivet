// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChemicalRenderOverride.hpp> 

#include <rivet/ddl/generated/ChemicalCurve.hpp>

namespace rivet::ddl::generated {
	ChemicalCurve::ChemicalCurve([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Material = serialized->get_string(Material_type_id);
		CurveRadius = serialized->get_float(CurveRadius_type_id);
		TileDistance = serialized->get_float(TileDistance_type_id);
		RenderOverrides = serialized->unwrap_into_many<rivet::ddl::generated::ChemicalRenderOverride>(RenderOverrides_type_id); 
	}

	[[nodiscard]] auto
	ChemicalCurve::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChemicalCurve::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChemicalCurve> {
		if (incoming_type_id == ChemicalCurve::type_id) {
			return std::make_shared<ChemicalCurve>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

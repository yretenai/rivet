// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ForceFieldAttributes.hpp>

namespace rivet::ddl::generated {
	ForceFieldAttributes::ForceFieldAttributes([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VectorFieldTexture = serialized->get_string(VectorFieldTexture_type_id, {});
		SurfaceVelocityOverride = serialized->get_float(SurfaceVelocityOverride_type_id, 0.000000);
		CenterVelocityOverride = serialized->get_float(CenterVelocityOverride_type_id, 0.000000);
		SurfaceStrengthScale = serialized->get_float(SurfaceStrengthScale_type_id, 1.000000);
		CenterStrengthScale = serialized->get_float(CenterStrengthScale_type_id, 1.000000);
		SurfaceLifeScale = serialized->get_float(SurfaceLifeScale_type_id, 1.000000);
		CenterLifeScale = serialized->get_float(CenterLifeScale_type_id, 1.000000);
		CenterBias = serialized->get_float(CenterBias_type_id, 0.000000);
		Density = serialized->get_float(Density_type_id, 2.000000);
		Scope = serialized->get_enum<rivet::ddl::generated::xe9023c39>(Scope_type_id, rivet::ddl::generated::xe9023c39_values, rivet::ddl::generated::xe9023c39::Local);
		Shape = serialized->get_enum<rivet::ddl::generated::x349d9632>(Shape_type_id, rivet::ddl::generated::x349d9632_values, rivet::ddl::generated::x349d9632::Ellipsoid);
		Type = serialized->get_enum<rivet::ddl::generated::x4d78f809>(Type_type_id, rivet::ddl::generated::x4d78f809_values, rivet::ddl::generated::x4d78f809::Radial);
		GPUDisplacement = serialized->get_bool(GPUDisplacement_type_id, false);
		DisplayVectorField = serialized->get_bool(DisplayVectorField_type_id, false);
		Debug = serialized->get_bool(Debug_type_id, true); 
	}

	[[nodiscard]] auto
	ForceFieldAttributes::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ForceFieldAttributes::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ForceFieldAttributes> {
		if (incoming_type_id == ForceFieldAttributes::type_id) {
			return std::make_shared<ForceFieldAttributes>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/ModelSplineEnvelopeColorDef.hpp>
#include <rivet/ddl/generated/ModelSplineMaterialExtraHair.hpp>
#include <rivet/ddl/generated/ModelSplineMaterialExtraFoliage.hpp>
#include <rivet/ddl/generated/DDLVector2.hpp>
#include <rivet/ddl/generated/ModelSplineEnvelopeVec2Def.hpp>
#include <rivet/ddl/generated/ModelSplineColorRandomness.hpp>
#include <rivet/ddl/generated/ModelSplineEnvelopeFloatDef.hpp> 

#include <rivet/ddl/generated/ModelSplineDescriptionDef.hpp>

namespace rivet::ddl::generated {
	ModelSplineDescriptionDef::ModelSplineDescriptionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TessAmountMax = serialized->get_uint32(TessAmountMax_type_id, 16);
		TessAmountMin = serialized->get_uint32(TessAmountMin_type_id, 4);
		StrandsPerClumpMax = serialized->get_uint32(StrandsPerClumpMax_type_id, 1);
		StrandsPerClumpMin = serialized->get_uint32(StrandsPerClumpMin_type_id, 1);
		LodDistance = serialized->get_float(LodDistance_type_id, 10.000000);
		LodReduction = serialized->get_float(LodReduction_type_id, 8.000000);
		SkipShadows = serialized->get_bool(SkipShadows_type_id, false);
		StrandLengthRandom = serialized->get_float(StrandLengthRandom_type_id, 0.000000);
		StrandThickness = serialized->unwrap_into<rivet::ddl::generated::ModelSplineEnvelopeFloatDef>(StrandThickness_type_id);
		StrandThicknessRandom = serialized->get_float(StrandThicknessRandom_type_id, 0.000000);
		ClumpStrayPower = serialized->get_float(ClumpStrayPower_type_id, 1.000000);
		ClumpStrayStrength = serialized->get_float(ClumpStrayStrength_type_id, 1.000000);
		ClumpThickness = serialized->unwrap_into<rivet::ddl::generated::ModelSplineEnvelopeVec2Def>(ClumpThickness_type_id);
		ClumpThicknessRandom = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(ClumpThicknessRandom_type_id);
		CurlsEnable = serialized->get_bool(CurlsEnable_type_id, false);
		CurlRandom = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(CurlRandom_type_id);
		CurlThickness = serialized->unwrap_into<rivet::ddl::generated::ModelSplineEnvelopeVec2Def>(CurlThickness_type_id);
		CurlFrequency = serialized->unwrap_into<rivet::ddl::generated::ModelSplineEnvelopeFloatDef>(CurlFrequency_type_id);
		MaterialType = serialized->get_enum<rivet::ddl::generated::x2088f5aa>(MaterialType_type_id, rivet::ddl::generated::x2088f5aa_values, rivet::ddl::generated::x2088f5aa::Standard);
		MaterialExtraFoliage = serialized->unwrap_into<rivet::ddl::generated::ModelSplineMaterialExtraFoliage>(MaterialExtraFoliage_type_id);
		MaterialExtraHair = serialized->unwrap_into<rivet::ddl::generated::ModelSplineMaterialExtraHair>(MaterialExtraHair_type_id);
		AlphaOpacity = serialized->unwrap_into<rivet::ddl::generated::ModelSplineEnvelopeFloatDef>(AlphaOpacity_type_id);
		DiffuseReflectance = serialized->unwrap_into<rivet::ddl::generated::ModelSplineEnvelopeColorDef>(DiffuseReflectance_type_id);
		DiffuseReflectanceRandom = serialized->unwrap_into<rivet::ddl::generated::ModelSplineColorRandomness>(DiffuseReflectanceRandom_type_id);
		AmbientOcclusion = serialized->unwrap_into<rivet::ddl::generated::ModelSplineEnvelopeFloatDef>(AmbientOcclusion_type_id);
		SpecReflectance = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpecReflectance_type_id);
		StrandRoundness = serialized->get_float(StrandRoundness_type_id, 1.000000);
		ClumpRoundness = serialized->get_float(ClumpRoundness_type_id, 1.000000);
		Gloss = serialized->get_float(Gloss_type_id, 0.800000);
		DiffuseReflectanceTexture = serialized->get_string(DiffuseReflectanceTexture_type_id, {});
		SpecReflectanceTexture = serialized->get_string(SpecReflectanceTexture_type_id, {});
		NormalMapTexture = serialized->get_string(NormalMapTexture_type_id, {});
		GlossMapTexture = serialized->get_string(GlossMapTexture_type_id, {});
		StrandThicknessTexture = serialized->get_string(StrandThicknessTexture_type_id, {});
		SimulationEnable = serialized->get_bool(SimulationEnable_type_id, false);
		SimulationStiffnessLength = serialized->get_float(SimulationStiffnessLength_type_id, 0.050000);
		SimulationStiffnessPower = serialized->get_float(SimulationStiffnessPower_type_id, 2.000000);
		SimulationDrag = serialized->get_float(SimulationDrag_type_id, 0.500000);
		SimulationWindStrength = serialized->get_float(SimulationWindStrength_type_id, 0.000000);
		SimulationWindTurbulence = serialized->get_float(SimulationWindTurbulence_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	ModelSplineDescriptionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModelSplineDescriptionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelSplineDescriptionDef> {
		if (incoming_type_id == ModelSplineDescriptionDef::type_id) {
			return std::make_shared<ModelSplineDescriptionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

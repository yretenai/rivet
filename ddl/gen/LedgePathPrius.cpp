// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LedgePathPrius.hpp>

namespace rivet::ddl::generated {
	LedgePathPrius::LedgePathPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Hang = serialized->get_bool(Hang_type_id);
		Grapple = serialized->get_bool(Grapple_type_id);
		DoubleSided = serialized->get_bool(DoubleSided_type_id);
		Grind = serialized->get_bool(Grind_type_id);
		UnderGrind = serialized->get_bool(UnderGrind_type_id);
		Slide = serialized->get_bool(Slide_type_id);
		DynamicConnectionsFront = serialized->get_bool(DynamicConnectionsFront_type_id);
		DynamicConnectionsBack = serialized->get_bool(DynamicConnectionsBack_type_id);
		DisableLedgeBirds = serialized->get_bool(DisableLedgeBirds_type_id);
		DisableBodyCollision = serialized->get_bool(DisableBodyCollision_type_id);
		DisableMount = serialized->get_bool(DisableMount_type_id);
		DisableDrop = serialized->get_bool(DisableDrop_type_id);
		DisableToLedge = serialized->get_bool(DisableToLedge_type_id);
		UseCurveNormalsAsUp = serialized->get_bool(UseCurveNormalsAsUp_type_id);
		EnforceCurveDirection = serialized->get_bool(EnforceCurveDirection_type_id);
		Material = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(Material_type_id, rivet::ddl::generated::x10b3c4cf_values);
		ModelActor = serialized->get_uint64(ModelActor_type_id); 
	}

	[[nodiscard]] auto
	LedgePathPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LedgePathPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LedgePathPrius> {
		if (incoming_type_id == LedgePathPrius::type_id) {
			return std::make_shared<LedgePathPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

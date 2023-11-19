// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/UI_VisualEffectKeyFrameYValues2.hpp>

namespace rivet::ddl::generated {
	UI_VisualEffectKeyFrameYValues2::UI_VisualEffectKeyFrameYValues2([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IsX = serialized->get_bool(IsX_type_id);
		IsXRanged = serialized->get_bool(IsXRanged_type_id);
		IsXY = serialized->get_bool(IsXY_type_id);
		IsXYRanged = serialized->get_bool(IsXYRanged_type_id);
		IsXYZ = serialized->get_bool(IsXYZ_type_id);
		IsXYZRanged = serialized->get_bool(IsXYZRanged_type_id);
		IsXZ = serialized->get_bool(IsXZ_type_id);
		IsXZRanged = serialized->get_bool(IsXZRanged_type_id);
		IsY = serialized->get_bool(IsY_type_id);
		IsYRanged = serialized->get_bool(IsYRanged_type_id);
		IsYZ = serialized->get_bool(IsYZ_type_id);
		IsYZRanged = serialized->get_bool(IsYZRanged_type_id);
		IsZ = serialized->get_bool(IsZ_type_id);
		IsZRanged = serialized->get_bool(IsZRanged_type_id);
		IsColor = serialized->get_bool(IsColor_type_id);
		IsColorRanged = serialized->get_bool(IsColorRanged_type_id);
		FloatXA = serialized->get_float(FloatXA_type_id);
		FloatXB = serialized->get_float(FloatXB_type_id);
		FloatYA = serialized->get_float(FloatYA_type_id);
		FloatYB = serialized->get_float(FloatYB_type_id);
		FloatZA = serialized->get_float(FloatZA_type_id);
		FloatZB = serialized->get_float(FloatZB_type_id);
		Vec2XYA = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Vec2XYA_type_id);
		Vec2XYB = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Vec2XYB_type_id);
		Vec2XZA = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Vec2XZA_type_id);
		Vec2XZB = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Vec2XZB_type_id);
		Vec2YZA = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Vec2YZA_type_id);
		Vec2YZB = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Vec2YZB_type_id);
		Vec3XYZA = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Vec3XYZA_type_id);
		Vec3XYZB = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Vec3XYZB_type_id);
		ColorA = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(ColorA_type_id);
		ColorB = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(ColorB_type_id); 
	}

	[[nodiscard]] auto
	UI_VisualEffectKeyFrameYValues2::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_VisualEffectKeyFrameYValues2::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_VisualEffectKeyFrameYValues2> {
		if (incoming_type_id == UI_VisualEffectKeyFrameYValues2::type_id) {
			return std::make_shared<UI_VisualEffectKeyFrameYValues2>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector4.hpp> 

#include <rivet/ddl/generated/UI_BezierCurveValue.hpp>

namespace rivet::ddl::generated {
	UI_BezierCurveValue::UI_BezierCurveValue([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CurrentValue = serialized->unwrap_into<rivet::ddl::generated::DDLVector4>(CurrentValue_type_id);
		NumDimensions = serialized->get_int16(NumDimensions_type_id, 0); 
	}

	[[nodiscard]] auto
	UI_BezierCurveValue::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_BezierCurveValue::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_BezierCurveValue> {
		if (incoming_type_id == UI_BezierCurveValue::type_id) {
			return std::make_shared<UI_BezierCurveValue>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UI_VisualEffectKeyFrameYValues2.hpp> 

#include <rivet/ddl/generated/UI_VisualEffectKeyFrameProperty2.hpp>

namespace rivet::ddl::generated {
	UI_VisualEffectKeyFrameProperty2::UI_VisualEffectKeyFrameProperty2([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RangeStyle = serialized->get_enum<rivet::ddl::generated::RangeStyle>(RangeStyle_type_id, rivet::ddl::generated::RangeStyle_values);
		X = serialized->get_float(X_type_id);
		Y = serialized->unwrap_into<rivet::ddl::generated::UI_VisualEffectKeyFrameYValues2>(Y_type_id); 
	}

	[[nodiscard]] auto
	UI_VisualEffectKeyFrameProperty2::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_VisualEffectKeyFrameProperty2::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_VisualEffectKeyFrameProperty2> {
		if (incoming_type_id == UI_VisualEffectKeyFrameProperty2::type_id) {
			return std::make_shared<UI_VisualEffectKeyFrameProperty2>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

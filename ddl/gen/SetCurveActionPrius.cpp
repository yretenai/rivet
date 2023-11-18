// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetCurveActionPrius.hpp>

namespace rivet::ddl::generated {
	SetCurveActionPrius::SetCurveActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		UseClosestPt = serialized->get_bool(UseClosestPt_type_id);
		DoSmoothTrans = serialized->get_bool(DoSmoothTrans_type_id);
		SmoothingType = serialized->get_enum<rivet::ddl::generated::xb02a7b53>(SmoothingType_type_id, rivet::ddl::generated::xb02a7b53_values);
		SmoothingStartType = serialized->get_enum<rivet::ddl::generated::x3376434d>(SmoothingStartType_type_id, rivet::ddl::generated::x3376434d_values); 
	}

	[[nodiscard]] auto
	SetCurveActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetCurveActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetCurveActionPrius> {
		if (incoming_type_id == SetCurveActionPrius::type_id) {
			return std::make_shared<SetCurveActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlatformMovingPrius.hpp> 

#include <rivet/ddl/generated/PlatformSetCurveActionPrius.hpp>

namespace rivet::ddl::generated {
	PlatformSetCurveActionPrius::PlatformSetCurveActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		NewPrius = serialized->unwrap_into<rivet::ddl::generated::PlatformMovingPrius>(NewPrius_type_id);
		UseClosestPt = serialized->get_bool(UseClosestPt_type_id); 
	}

	[[nodiscard]] auto
	PlatformSetCurveActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlatformSetCurveActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlatformSetCurveActionPrius> {
		if (incoming_type_id == PlatformSetCurveActionPrius::type_id) {
			return std::make_shared<PlatformSetCurveActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

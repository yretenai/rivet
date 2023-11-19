// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DepthOfFieldActionPrius.hpp>

namespace rivet::ddl::generated {
	DepthOfFieldActionPrius::DepthOfFieldActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		NearFocusDistance = serialized->get_float(NearFocusDistance_type_id);
		NearApertureScale = serialized->get_float(NearApertureScale_type_id);
		FarFocusDistance = serialized->get_float(FarFocusDistance_type_id);
		FarApertureScale = serialized->get_float(FarApertureScale_type_id); 
	}

	[[nodiscard]] auto
	DepthOfFieldActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DepthOfFieldActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DepthOfFieldActionPrius> {
		if (incoming_type_id == DepthOfFieldActionPrius::type_id) {
			return std::make_shared<DepthOfFieldActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
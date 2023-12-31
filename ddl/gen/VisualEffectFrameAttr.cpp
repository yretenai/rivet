// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectFrameAttr.hpp>

namespace rivet::ddl::generated {
	VisualEffectFrameAttr::VisualEffectFrameAttr([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FPSPercentageHigh = serialized->get_float(FPSPercentageHigh_type_id);
		FPSPercentageLow = serialized->get_float(FPSPercentageLow_type_id);
		SpawnRateScale = serialized->get_float(SpawnRateScale_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectFrameAttr::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectFrameAttr::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectFrameAttr> {
		if (incoming_type_id == VisualEffectFrameAttr::type_id) {
			return std::make_shared<VisualEffectFrameAttr>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

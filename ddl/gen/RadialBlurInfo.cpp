// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RadialBlurInfo.hpp>

namespace rivet::ddl::generated {
	RadialBlurInfo::RadialBlurInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UseWorldPos = serialized->get_bool(UseWorldPos_type_id);
		MinRadius = serialized->get_float(MinRadius_type_id);
		MaxRadius = serialized->get_float(MaxRadius_type_id); 
	}

	[[nodiscard]] auto
	RadialBlurInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RadialBlurInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RadialBlurInfo> {
		if (incoming_type_id == RadialBlurInfo::type_id) {
			return std::make_shared<RadialBlurInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

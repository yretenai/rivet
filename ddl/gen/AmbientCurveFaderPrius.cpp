// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AmbientCurveFaderPrius.hpp>

namespace rivet::ddl::generated {
	AmbientCurveFaderPrius::AmbientCurveFaderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FadeDuration = serialized->get_float(FadeDuration_type_id);
		DeleteOnFade = serialized->get_bool(DeleteOnFade_type_id); 
	}

	[[nodiscard]] auto
	AmbientCurveFaderPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AmbientCurveFaderPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmbientCurveFaderPrius> {
		if (incoming_type_id == AmbientCurveFaderPrius::type_id) {
			return std::make_shared<AmbientCurveFaderPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

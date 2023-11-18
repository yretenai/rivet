// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LedgeBirdCurvePrius.hpp>

namespace rivet::ddl::generated {
	LedgeBirdCurvePrius::LedgeBirdCurvePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id); 
	}

	[[nodiscard]] auto
	LedgeBirdCurvePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LedgeBirdCurvePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LedgeBirdCurvePrius> {
		if (incoming_type_id == LedgeBirdCurvePrius::type_id) {
			return std::make_shared<LedgeBirdCurvePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LightPlatforms.hpp>

namespace rivet::ddl::generated {
	LightPlatforms::LightPlatforms([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PS5 = serialized->get_enum<rivet::ddl::generated::x30cc915a>(PS5_type_id, rivet::ddl::generated::x30cc915a_values);
		PC = serialized->get_enum<rivet::ddl::generated::x30cc915a>(PC_type_id, rivet::ddl::generated::x30cc915a_values); 
	}

	[[nodiscard]] auto
	LightPlatforms::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LightPlatforms::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightPlatforms> {
		if (incoming_type_id == LightPlatforms::type_id) {
			return std::make_shared<LightPlatforms>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

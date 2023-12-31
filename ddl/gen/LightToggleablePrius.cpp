// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LightToggleablePrius.hpp>

namespace rivet::ddl::generated {
	LightToggleablePrius::LightToggleablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OnByDefault = serialized->get_bool(OnByDefault_type_id); 
	}

	[[nodiscard]] auto
	LightToggleablePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LightToggleablePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightToggleablePrius> {
		if (incoming_type_id == LightToggleablePrius::type_id) {
			return std::make_shared<LightToggleablePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

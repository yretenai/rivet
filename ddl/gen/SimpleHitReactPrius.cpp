// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleHitReactPrius.hpp>

namespace rivet::ddl::generated {
	SimpleHitReactPrius::SimpleHitReactPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HitReactAnim = serialized->get_string(HitReactAnim_type_id, {});
		LayerType = serialized->get_enum<rivet::ddl::generated::x7c99d780>(LayerType_type_id, rivet::ddl::generated::x7c99d780_values, rivet::ddl::generated::x7c99d780::LayerTypeBase); 
	}

	[[nodiscard]] auto
	SimpleHitReactPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleHitReactPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleHitReactPrius> {
		if (incoming_type_id == SimpleHitReactPrius::type_id) {
			return std::make_shared<SimpleHitReactPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

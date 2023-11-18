// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DynamicAnimsetManagerPrius.hpp>

namespace rivet::ddl::generated {
	DynamicAnimsetManagerPrius::DynamicAnimsetManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UserMask = serialized->get_bitset<rivet::ddl::generated::x805e39ba>(UserMask_type_id, rivet::ddl::generated::x805e39ba_values); 
	}

	[[nodiscard]] auto
	DynamicAnimsetManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DynamicAnimsetManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DynamicAnimsetManagerPrius> {
		if (incoming_type_id == DynamicAnimsetManagerPrius::type_id) {
			return std::make_shared<DynamicAnimsetManagerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

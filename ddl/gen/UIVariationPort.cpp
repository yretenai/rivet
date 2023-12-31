// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIVariationPort.hpp>

namespace rivet::ddl::generated {
	UIVariationPort::UIVariationPort([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Variations = serialized->get_strings(Variations_type_id);
		Conditions = serialized->get_uint32s(Conditions_type_id); 
	}

	[[nodiscard]] auto
	UIVariationPort::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIVariationPort::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIVariationPort> {
		if (incoming_type_id == UIVariationPort::type_id) {
			return std::make_shared<UIVariationPort>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityLookToggle.hpp>

namespace rivet::ddl::generated {
	VanityLookToggle::VanityLookToggle([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Look = serialized->get_string(Look_type_id);
		Toggle = serialized->get_bool(Toggle_type_id); 
	}

	[[nodiscard]] auto
	VanityLookToggle::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanityLookToggle::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityLookToggle> {
		if (incoming_type_id == VanityLookToggle::type_id) {
			return std::make_shared<VanityLookToggle>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityColorData.hpp> 

#include <rivet/ddl/generated/VanityItemPrius.hpp>

namespace rivet::ddl::generated {
	VanityItemPrius::VanityItemPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SkinItemPrius(serialized) {
		BeenPreviewed = serialized->get_uint8(BeenPreviewed_type_id);
		Color = serialized->unwrap_into<rivet::ddl::generated::VanityColorData>(Color_type_id); 
	}

	[[nodiscard]] auto
	VanityItemPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanityItemPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityItemPrius> {
		if (incoming_type_id == VanityItemPrius::type_id) {
			return std::make_shared<VanityItemPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityIconData.hpp>

namespace rivet::ddl::generated {
	VanityIconData::VanityIconData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::xf2db3ee>(Type_type_id, rivet::ddl::generated::xf2db3ee_values);
		Texture = serialized->get_string(Texture_type_id); 
	}

	auto
	VanityIconData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	VanityIconData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanityIconData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityIconData> {
		if (incoming_type_id == VanityIconData::type_id) {
			return std::make_shared<VanityIconData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

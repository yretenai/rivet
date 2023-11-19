// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityItemData.hpp>

namespace rivet::ddl::generated {
	VanityItemData::VanityItemData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameItemData(serialized) {
		SkinType = serialized->get_enum<rivet::ddl::generated::x36ceb0b>(SkinType_type_id, rivet::ddl::generated::x36ceb0b_values); 
	}

	[[nodiscard]] auto
	VanityItemData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanityItemData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityItemData> {
		if (incoming_type_id == VanityItemData::type_id) {
			return std::make_shared<VanityItemData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
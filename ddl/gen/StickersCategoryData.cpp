// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StickersData.hpp> 

#include <rivet/ddl/generated/StickersCategoryData.hpp>

namespace rivet::ddl::generated {
	StickersCategoryData::StickersCategoryData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Label = serialized->get_string(Label_type_id);
		Icon = serialized->get_string(Icon_type_id);
		Stickers = serialized->unwrap_into_many<rivet::ddl::generated::StickersData>(Stickers_type_id); 
	}

	[[nodiscard]] auto
	StickersCategoryData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StickersCategoryData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StickersCategoryData> {
		if (incoming_type_id == StickersCategoryData::type_id) {
			return std::make_shared<StickersCategoryData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BirdAnimItem.hpp>

namespace rivet::ddl::generated {
	BirdAnimItem::BirdAnimItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Anim = serialized->get_string(Anim_type_id, {});
		AnimWeight = serialized->get_float(AnimWeight_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	BirdAnimItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BirdAnimItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BirdAnimItem> {
		if (incoming_type_id == BirdAnimItem::type_id) {
			return std::make_shared<BirdAnimItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

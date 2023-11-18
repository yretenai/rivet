// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GridItemPrius.hpp>

namespace rivet::ddl::generated {
	GridItemPrius::GridItemPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ItemPrius(serialized) {
		Rotated = serialized->get_uint8(Rotated_type_id); 
	}

	[[nodiscard]] auto
	GridItemPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GridItemPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GridItemPrius> {
		if (incoming_type_id == GridItemPrius::type_id) {
			return std::make_shared<GridItemPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

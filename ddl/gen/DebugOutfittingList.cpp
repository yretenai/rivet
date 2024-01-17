// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugOutfittingList.hpp>

namespace rivet::ddl::generated {
	DebugOutfittingList::DebugOutfittingList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Category = serialized->get_string(Category_type_id, {});
		ItemConfig = serialized->get_strings(ItemConfig_type_id); 
	}

	[[nodiscard]] auto
	DebugOutfittingList::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugOutfittingList::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugOutfittingList> {
		if (incoming_type_id == DebugOutfittingList::type_id) {
			return std::make_shared<DebugOutfittingList>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

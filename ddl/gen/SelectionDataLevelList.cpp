// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LevelListSelectionElement.hpp> 

#include <rivet/ddl/generated/SelectionDataLevelList.hpp>

namespace rivet::ddl::generated {
	SelectionDataLevelList::SelectionDataLevelList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Items = serialized->unwrap_into_many<rivet::ddl::generated::LevelListSelectionElement>(Items_type_id); 
	}

	[[nodiscard]] auto
	SelectionDataLevelList::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SelectionDataLevelList::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SelectionDataLevelList> {
		if (incoming_type_id == SelectionDataLevelList::type_id) {
			return std::make_shared<SelectionDataLevelList>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

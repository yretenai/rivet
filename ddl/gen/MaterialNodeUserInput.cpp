// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeUserInput.hpp>

namespace rivet::ddl::generated {
	MaterialNodeUserInput::MaterialNodeUserInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_string(Id_type_id, {});
		Values = serialized->get_string(Values_type_id, {});
		Minimums = serialized->get_string(Minimums_type_id, {});
		Maximums = serialized->get_string(Maximums_type_id, {});
		Description = serialized->get_string(Description_type_id, {});
		Group = serialized->get_string(Group_type_id, {});
		SortOrder = serialized->get_string(SortOrder_type_id, {});
		SubGraphAncestors = serialized->get_string(SubGraphAncestors_type_id, {});
		Labels = serialized->get_string(Labels_type_id, {}); 
	}

	[[nodiscard]] auto
	MaterialNodeUserInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialNodeUserInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodeUserInput> {
		if (incoming_type_id == MaterialNodeUserInput::type_id) {
			return std::make_shared<MaterialNodeUserInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

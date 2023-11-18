// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeInputSelectItem.hpp> 

#include <rivet/ddl/generated/UI_MaterialNodeSelect.hpp>

namespace rivet::ddl::generated {
	UI_MaterialNodeSelect::UI_MaterialNodeSelect([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Items = serialized->unwrap_into_many<rivet::ddl::generated::MaterialNodeInputSelectItem>(Items_type_id);
		Value = serialized->get_string(Value_type_id); 
	}

	[[nodiscard]] auto
	UI_MaterialNodeSelect::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_MaterialNodeSelect::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_MaterialNodeSelect> {
		if (incoming_type_id == UI_MaterialNodeSelect::type_id) {
			return std::make_shared<UI_MaterialNodeSelect>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodePortUI.hpp>

namespace rivet::ddl::generated {
	MaterialNodePortUI::MaterialNodePortUI([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_string(Id_type_id);
		Global = serialized->get_bool(Global_type_id);
		Exposed = serialized->get_bool(Exposed_type_id);
		LinearFilter = serialized->get_bool(LinearFilter_type_id); 
	}

	[[nodiscard]] auto
	MaterialNodePortUI::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialNodePortUI::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodePortUI> {
		if (incoming_type_id == MaterialNodePortUI::type_id) {
			return std::make_shared<MaterialNodePortUI>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

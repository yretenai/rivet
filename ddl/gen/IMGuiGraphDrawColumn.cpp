// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IMGuiGraphDrawNode.hpp> 

#include <rivet/ddl/generated/IMGuiGraphDrawColumn.hpp>

namespace rivet::ddl::generated {
	IMGuiGraphDrawColumn::IMGuiGraphDrawColumn([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ColumnNodes = serialized->unwrap_into_many<rivet::ddl::generated::IMGuiGraphDrawNode>(ColumnNodes_type_id);
		MaxDrawWidth = serialized->get_float(MaxDrawWidth_type_id); 
	}

	[[nodiscard]] auto
	IMGuiGraphDrawColumn::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IMGuiGraphDrawColumn::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IMGuiGraphDrawColumn> {
		if (incoming_type_id == IMGuiGraphDrawColumn::type_id) {
			return std::make_shared<IMGuiGraphDrawColumn>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

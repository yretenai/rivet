// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GraphIOMeta.hpp>

namespace rivet::ddl::generated {
	GraphIOMeta::GraphIOMeta([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_string(Type_type_id, {});
		SubType = serialized->get_string(SubType_type_id, {});
		Dir = serialized->get_enum<rivet::ddl::generated::x6e9cd50>(Dir_type_id, rivet::ddl::generated::x6e9cd50_values, rivet::ddl::generated::x6e9cd50::Invalid);
		Id = serialized->get_uint64(Id_type_id, 0);
		Name = serialized->get_string(Name_type_id, {});
		Tooltip = serialized->get_string(Tooltip_type_id, {}); 
	}

	[[nodiscard]] auto
	GraphIOMeta::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GraphIOMeta::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GraphIOMeta> {
		if (incoming_type_id == GraphIOMeta::type_id) {
			return std::make_shared<GraphIOMeta>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

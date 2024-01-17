// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ContrastMaterialEntry.hpp>

namespace rivet::ddl::generated {
	ContrastMaterialEntry::ContrastMaterialEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::xf2109875>(Type_type_id, rivet::ddl::generated::xf2109875_values, rivet::ddl::generated::xf2109875::Enemy);
		Material = serialized->get_string(Material_type_id, {}); 
	}

	[[nodiscard]] auto
	ContrastMaterialEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ContrastMaterialEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ContrastMaterialEntry> {
		if (incoming_type_id == ContrastMaterialEntry::type_id) {
			return std::make_shared<ContrastMaterialEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConfigModListElement.hpp> 

#include <rivet/ddl/generated/ConfigModDef.hpp>

namespace rivet::ddl::generated {
	ConfigModDef::ConfigModDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Variable = serialized->get_enum<rivet::ddl::generated::xeefd048a>(Variable_type_id, rivet::ddl::generated::xeefd048a_values, rivet::ddl::generated::xeefd048a::None);
		ModList = serialized->unwrap_into_many<rivet::ddl::generated::ConfigModListElement>(ModList_type_id); 
	}

	[[nodiscard]] auto
	ConfigModDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConfigModDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConfigModDef> {
		if (incoming_type_id == ConfigModDef::type_id) {
			return std::make_shared<ConfigModDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

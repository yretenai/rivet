// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConfigModListElement.hpp> 

#include <rivet/ddl/generated/DifficultyModDef.hpp>

namespace rivet::ddl::generated {
	DifficultyModDef::DifficultyModDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NameFilter = serialized->get_string(NameFilter_type_id);
		Variable = serialized->get_enum<rivet::ddl::generated::x3f2aac2e>(Variable_type_id, rivet::ddl::generated::x3f2aac2e_values);
		ModList = serialized->unwrap_into_many<rivet::ddl::generated::ConfigModListElement>(ModList_type_id); 
	}

	[[nodiscard]] auto
	DifficultyModDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DifficultyModDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DifficultyModDef> {
		if (incoming_type_id == DifficultyModDef::type_id) {
			return std::make_shared<DifficultyModDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

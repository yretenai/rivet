// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2IdMapDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2IdMapDef::Cinematic2IdMapDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		TargetId = serialized->get_uint64(TargetId_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2IdMapDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2IdMapDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2IdMapDef> {
		if (incoming_type_id == Cinematic2IdMapDef::type_id) {
			return std::make_shared<Cinematic2IdMapDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Simple.hpp> 

#include <rivet/ddl/generated/MoveCosinePrius.hpp>

namespace rivet::ddl::generated {
	MoveCosinePrius::MoveCosinePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): Base(serialized) {
		DynamicStrings = serialized->get_strings(DynamicStrings_type_id);
		DynamicStructs = serialized->unwrap_into_many<rivet::ddl::generated::Simple>(DynamicStructs_type_id);
		StaticStrings = serialized->get_strings(StaticStrings_type_id);
		String = serialized->get_string(String_type_id, {});
		SingleStruct = serialized->unwrap_into<rivet::ddl::generated::Simple>(SingleStruct_type_id); 
	}

	[[nodiscard]] auto
	MoveCosinePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MoveCosinePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoveCosinePrius> {
		if (incoming_type_id == MoveCosinePrius::type_id) {
			return std::make_shared<MoveCosinePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

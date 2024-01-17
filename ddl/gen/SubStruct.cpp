// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SubStruct.hpp>

namespace rivet::ddl::generated {
	SubStruct::SubStruct([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Str = serialized->get_string(Str_type_id, "ClassSubStructDefault");
		Val = serialized->get_int32(Val_type_id, 4); 
	}

	[[nodiscard]] auto
	SubStruct::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SubStruct::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SubStruct> {
		if (incoming_type_id == SubStruct::type_id) {
			return std::make_shared<SubStruct>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

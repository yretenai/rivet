// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DynamicEnumValueType.hpp> 

#include <rivet/ddl/generated/DynamicEnumValueRef.hpp>

namespace rivet::ddl::generated {
	DynamicEnumValueRef::DynamicEnumValueRef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Dynamic_Enum_Value_Type = serialized->unwrap_into<rivet::ddl::generated::DynamicEnumValueType>(Dynamic_Enum_Value_Type_type_id); 
	}

	auto
	DynamicEnumValueRef::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DynamicEnumValueRef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DynamicEnumValueRef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DynamicEnumValueRef> {
		if (incoming_type_id == DynamicEnumValueRef::type_id) {
			return std::make_shared<DynamicEnumValueRef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

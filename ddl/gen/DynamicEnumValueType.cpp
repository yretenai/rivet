// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DynamicEnumValueType.hpp>

namespace rivet::ddl::generated {
	DynamicEnumValueType::DynamicEnumValueType([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnumAsset = serialized->get_string(EnumAsset_type_id, {});
		EnumValue = serialized->get_string(EnumValue_type_id, {}); 
	}

	[[nodiscard]] auto
	DynamicEnumValueType::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DynamicEnumValueType::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DynamicEnumValueType> {
		if (incoming_type_id == DynamicEnumValueType::type_id) {
			return std::make_shared<DynamicEnumValueType>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

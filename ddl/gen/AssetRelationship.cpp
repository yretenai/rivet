// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetRelationship.hpp>

namespace rivet::ddl::generated {
	AssetRelationship::AssetRelationship([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Parent = serialized->get_uint32(Parent_type_id);
		Child = serialized->get_uint32(Child_type_id); 
	}

	[[nodiscard]] auto
	AssetRelationship::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetRelationship::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetRelationship> {
		if (incoming_type_id == AssetRelationship::type_id) {
			return std::make_shared<AssetRelationship>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

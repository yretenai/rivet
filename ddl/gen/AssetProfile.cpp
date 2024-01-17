// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetField.hpp> 

#include <rivet/ddl/generated/AssetProfile.hpp>

namespace rivet::ddl::generated {
	AssetProfile::AssetProfile([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetId = serialized->get_uint32(AssetId_type_id, 0);
		AssetType = serialized->get_enum<rivet::ddl::generated::AssetTypes>(AssetType_type_id, rivet::ddl::generated::AssetTypes_values, rivet::ddl::generated::AssetTypes::Actor);
		ChildrenCount = serialized->get_uint32(ChildrenCount_type_id, 0);
		Fields = serialized->unwrap_into_many<rivet::ddl::generated::AssetField>(Fields_type_id); 
	}

	[[nodiscard]] auto
	AssetProfile::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetProfile::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetProfile> {
		if (incoming_type_id == AssetProfile::type_id) {
			return std::make_shared<AssetProfile>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

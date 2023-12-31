// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/AssetDefBase.hpp>

namespace rivet::ddl::generated {
	AssetDefBase::AssetDefBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id); 
	}

	[[nodiscard]] auto
	AssetDefBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetDefBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetDefBase> {
		if (incoming_type_id == AssetDefBase::type_id) {
			return std::make_shared<AssetDefBase>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetTypeSettings.hpp>

namespace rivet::ddl::generated {
	AssetTypeSettings::AssetTypeSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxCount = serialized->get_int32(MaxCount_type_id, 8);
		ForceDefault = serialized->get_bool(ForceDefault_type_id, false);
		AutoReloadEnable = serialized->get_bool(AutoReloadEnable_type_id, false); 
	}

	[[nodiscard]] auto
	AssetTypeSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetTypeSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetTypeSettings> {
		if (incoming_type_id == AssetTypeSettings::type_id) {
			return std::make_shared<AssetTypeSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

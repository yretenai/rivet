// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConfigAssetReferenceDef.hpp>

namespace rivet::ddl::generated {
	ConfigAssetReferenceDef::ConfigAssetReferenceDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPath = serialized->get_string(AssetPath_type_id);
		Autoload = serialized->get_bool(Autoload_type_id); 
	}

	auto
	ConfigAssetReferenceDef::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ConfigAssetReferenceDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConfigAssetReferenceDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConfigAssetReferenceDef> {
		if (incoming_type_id == ConfigAssetReferenceDef::type_id) {
			return std::make_shared<ConfigAssetReferenceDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

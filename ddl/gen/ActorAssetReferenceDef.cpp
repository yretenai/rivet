// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorAssetReferenceDef.hpp>

namespace rivet::ddl::generated {
	ActorAssetReferenceDef::ActorAssetReferenceDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPath = serialized->get_string(AssetPath_type_id);
		Autoload = serialized->get_bool(Autoload_type_id); 
	}

	[[nodiscard]] auto
	ActorAssetReferenceDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorAssetReferenceDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorAssetReferenceDef> {
		if (incoming_type_id == ActorAssetReferenceDef::type_id) {
			return std::make_shared<ActorAssetReferenceDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
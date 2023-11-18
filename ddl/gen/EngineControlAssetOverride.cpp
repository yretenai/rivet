// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EngineControlAssetOverride.hpp>

namespace rivet::ddl::generated {
	EngineControlAssetOverride::EngineControlAssetOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Json = serialized->get_field(Json_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::AssetExtensions>(Type_type_id, rivet::ddl::generated::AssetExtensions_values); 
	}

	[[nodiscard]] auto
	EngineControlAssetOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EngineControlAssetOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineControlAssetOverride> {
		if (incoming_type_id == EngineControlAssetOverride::type_id) {
			return std::make_shared<EngineControlAssetOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

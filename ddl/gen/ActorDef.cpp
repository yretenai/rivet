// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetReferenceDef.hpp>
#include <rivet/ddl/generated/ComponentPrius.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/ActorDef.hpp>

namespace rivet::ddl::generated {
	ActorDef::ActorDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		AssetType = serialized->get_enum<rivet::ddl::generated::AssetExtensions>(AssetType_type_id, rivet::ddl::generated::AssetExtensions_values);
		AssetPath = serialized->get_string(AssetPath_type_id);
		Template = serialized->get_bool(Template_type_id);
		StartActive = serialized->get_bool(StartActive_type_id);
		BuilderOnly = serialized->get_bool(BuilderOnly_type_id);
		LookGroup = serialized->get_string(LookGroup_type_id);
		UIColor = serialized->get_enum<rivet::ddl::generated::x6898de8f>(UIColor_type_id, rivet::ddl::generated::x6898de8f_values);
		UIOpacity = serialized->get_enum<rivet::ddl::generated::x28ef8b07>(UIOpacity_type_id, rivet::ddl::generated::x28ef8b07_values);
		Components = serialized->unwrap_into_many<rivet::ddl::generated::ComponentPrius>(Components_type_id);
		AssetRefs = serialized->unwrap_into_many<rivet::ddl::generated::AssetReferenceDef>(AssetRefs_type_id);
		OldAssetData = serialized->get_field(OldAssetData_type_id); 
	}

	[[nodiscard]] auto
	ActorDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorDef> {
		if (incoming_type_id == ActorDef::type_id) {
			return std::make_shared<ActorDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

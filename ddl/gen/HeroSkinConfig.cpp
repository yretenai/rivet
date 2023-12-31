// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CustomHeadData.hpp>
#include <rivet/ddl/generated/UnlockableSkinData.hpp>
#include <rivet/ddl/generated/SkinData.hpp> 

#include <rivet/ddl/generated/HeroSkinConfig.hpp>

namespace rivet::ddl::generated {
	HeroSkinConfig::HeroSkinConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		BaseSkin = serialized->unwrap_into<rivet::ddl::generated::SkinData>(BaseSkin_type_id);
		UpgradedSkin = serialized->unwrap_into<rivet::ddl::generated::SkinData>(UpgradedSkin_type_id);
		RebreatherModel = serialized->get_string(RebreatherModel_type_id);
		HoverBootsModel = serialized->get_string(HoverBootsModel_type_id);
		GrindBootsModel = serialized->get_string(GrindBootsModel_type_id);
		MagBootsModel = serialized->get_string(MagBootsModel_type_id);
		MapOMaticModel = serialized->get_string(MapOMaticModel_type_id);
		SwingshotModel = serialized->get_string(SwingshotModel_type_id);
		VersaGloveModel = serialized->get_string(VersaGloveModel_type_id);
		PortalZipGloveModel = serialized->get_string(PortalZipGloveModel_type_id);
		UnlockableSkins = serialized->unwrap_into_many<rivet::ddl::generated::UnlockableSkinData>(UnlockableSkins_type_id);
		CustomHeads = serialized->unwrap_into_many<rivet::ddl::generated::CustomHeadData>(CustomHeads_type_id); 
	}

	[[nodiscard]] auto
	HeroSkinConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroSkinConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSkinConfig> {
		if (incoming_type_id == HeroSkinConfig::type_id) {
			return std::make_shared<HeroSkinConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

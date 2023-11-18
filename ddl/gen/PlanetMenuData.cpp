// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlanetMenuDialog.hpp>
#include <rivet/ddl/generated/ObjSysUnlockSequence.hpp> 

#include <rivet/ddl/generated/PlanetMenuData.hpp>

namespace rivet::ddl::generated {
	PlanetMenuData::PlanetMenuData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		ShowInMenu = serialized->get_bool(ShowInMenu_type_id);
		UnlockSequence = serialized->unwrap_into<rivet::ddl::generated::ObjSysUnlockSequence>(UnlockSequence_type_id);
		NameLocTag = serialized->get_string(NameLocTag_type_id);
		DescLocTag = serialized->get_string(DescLocTag_type_id);
		LocationLocTag = serialized->get_string(LocationLocTag_type_id);
		PreviewImage = serialized->get_string(PreviewImage_type_id);
		GoldBolts = serialized->get_int32(GoldBolts_type_id);
		RYNOPlans = serialized->get_int32(RYNOPlans_type_id);
		VanityPickups = serialized->get_int32(VanityPickups_type_id);
		FocusDialogs = serialized->unwrap_into_many<rivet::ddl::generated::PlanetMenuDialog>(FocusDialogs_type_id); 
	}

	[[nodiscard]] auto
	PlanetMenuData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlanetMenuData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlanetMenuData> {
		if (incoming_type_id == PlanetMenuData::type_id) {
			return std::make_shared<PlanetMenuData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

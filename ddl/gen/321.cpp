// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityAccessoryData.hpp>
#include <rivet/ddl/generated/VanityUIColor.hpp>
#include <rivet/ddl/generated/VanityCineHelmetTransData.hpp> 

#include <rivet/ddl/generated/MasterVanityItemList.hpp>

namespace rivet::ddl::generated {
	MasterVanityItemList::MasterVanityItemList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MasterSkinItemList(serialized) {
		AccessoryData = serialized->unwrap_into_many<rivet::ddl::generated::VanityAccessoryData>(AccessoryData_type_id);
		UIColors = serialized->unwrap_into_many<rivet::ddl::generated::VanityUIColor>(UIColors_type_id);
		CineHelmetTransData = serialized->unwrap_into<rivet::ddl::generated::VanityCineHelmetTransData>(CineHelmetTransData_type_id); 
	}

	auto
	MasterVanityItemList::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	MasterVanityItemList::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MasterVanityItemList::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterVanityItemList> {
		if (incoming_type_id == MasterVanityItemList::type_id) {
			return std::make_shared<MasterVanityItemList>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

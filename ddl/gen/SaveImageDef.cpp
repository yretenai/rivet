// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SaveImage.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/SaveImageDef.hpp>

namespace rivet::ddl::generated {
	SaveImageDef::SaveImageDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id, "");
		Image = serialized->unwrap_into<rivet::ddl::generated::SaveImage>(Image_type_id); 
	}

	[[nodiscard]] auto
	SaveImageDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SaveImageDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SaveImageDef> {
		if (incoming_type_id == SaveImageDef::type_id) {
			return std::make_shared<SaveImageDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

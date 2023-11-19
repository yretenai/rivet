// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/RegionDefTemp.hpp>

namespace rivet::ddl::generated {
	RegionDefTemp::RegionDefTemp([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		Name = serialized->get_string(Name_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::x2069d6e7>(Type_type_id, rivet::ddl::generated::x2069d6e7_values);
		ParentAsset = serialized->get_uint64(ParentAsset_type_id);
		Aux = serialized->get_field(Aux_type_id); 
	}

	[[nodiscard]] auto
	RegionDefTemp::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RegionDefTemp::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionDefTemp> {
		if (incoming_type_id == RegionDefTemp::type_id) {
			return std::make_shared<RegionDefTemp>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
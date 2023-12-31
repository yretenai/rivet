// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityAccessoryData.hpp>

namespace rivet::ddl::generated {
	VanityAccessoryData::VanityAccessoryData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::x56bca86c>(Type_type_id, rivet::ddl::generated::x56bca86c_values);
		BundleType = serialized->get_enum<rivet::ddl::generated::xf2db3ee>(BundleType_type_id, rivet::ddl::generated::xf2db3ee_values);
		SkinType = serialized->get_enum<rivet::ddl::generated::x36ceb0b>(SkinType_type_id, rivet::ddl::generated::x36ceb0b_values);
		RatchetModel = serialized->get_string(RatchetModel_type_id);
		RivetModel = serialized->get_string(RivetModel_type_id);
		OnForDefault = serialized->get_bool(OnForDefault_type_id); 
	}

	[[nodiscard]] auto
	VanityAccessoryData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanityAccessoryData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityAccessoryData> {
		if (incoming_type_id == VanityAccessoryData::type_id) {
			return std::make_shared<VanityAccessoryData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

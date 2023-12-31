// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UDSWebApiReward.hpp> 

#include <rivet/ddl/generated/UDSBulkActivityMetadata.hpp>

namespace rivet::ddl::generated {
	UDSBulkActivityMetadata::UDSBulkActivityMetadata([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		type = serialized->get_enum<rivet::ddl::generated::x38e4d198>(type_type_id, rivet::ddl::generated::x38e4d198_values);
		category = serialized->get_enum<rivet::ddl::generated::xca2817ca>(category_type_id, rivet::ddl::generated::xca2817ca_values);
		name = serialized->get_strings(name_type_id);
		Description = serialized->get_strings(Description_type_id);
		availableByDefault = serialized->get_bool(availableByDefault_type_id);
		isRequiredForCompletion = serialized->get_bool(isRequiredForCompletion_type_id);
		hidden = serialized->get_bool(hidden_type_id);
		isOnlineMultiplay = serialized->get_bool(isOnlineMultiplay_type_id);
		defaultPlaytimeEstimate = serialized->get_uint32(defaultPlaytimeEstimate_type_id);
		rewards = serialized->unwrap_into_many<rivet::ddl::generated::UDSWebApiReward>(rewards_type_id); 
	}

	[[nodiscard]] auto
	UDSBulkActivityMetadata::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UDSBulkActivityMetadata::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSBulkActivityMetadata> {
		if (incoming_type_id == UDSBulkActivityMetadata::type_id) {
			return std::make_shared<UDSBulkActivityMetadata>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

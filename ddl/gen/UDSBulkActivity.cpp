// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UDSBulkActivity.hpp>

namespace rivet::ddl::generated {
	UDSBulkActivity::UDSBulkActivity([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		objectId = serialized->get_string(objectId_type_id);
		metadata = serialized->get_field(metadata_type_id);
		links = serialized->get_field(links_type_id); 
	}

	[[nodiscard]] auto
	UDSBulkActivity::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UDSBulkActivity::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSBulkActivity> {
		if (incoming_type_id == UDSBulkActivity::type_id) {
			return std::make_shared<UDSBulkActivity>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

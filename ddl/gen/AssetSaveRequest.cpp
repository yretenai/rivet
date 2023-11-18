// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetSaveRequest.hpp>

namespace rivet::ddl::generated {
	AssetSaveRequest::AssetSaveRequest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPath = serialized->get_string(AssetPath_type_id);
		SessionId = serialized->get_uint64(SessionId_type_id); 
	}

	[[nodiscard]] auto
	AssetSaveRequest::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetSaveRequest::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetSaveRequest> {
		if (incoming_type_id == AssetSaveRequest::type_id) {
			return std::make_shared<AssetSaveRequest>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

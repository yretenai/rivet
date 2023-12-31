// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultBuildStatus.hpp>

namespace rivet::ddl::generated {
	VaultBuildStatus::VaultBuildStatus([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		_id = serialized->get_uint64(_id_type_id);
		IsBuildingToC = serialized->get_bool(IsBuildingToC_type_id);
		LastToCCount = serialized->get_int32(LastToCCount_type_id); 
	}

	[[nodiscard]] auto
	VaultBuildStatus::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VaultBuildStatus::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultBuildStatus> {
		if (incoming_type_id == VaultBuildStatus::type_id) {
			return std::make_shared<VaultBuildStatus>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

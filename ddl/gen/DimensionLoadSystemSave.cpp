// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DimensionSaveData.hpp> 

#include <rivet/ddl/generated/DimensionLoadSystemSave.hpp>

namespace rivet::ddl::generated {
	DimensionLoadSystemSave::DimensionLoadSystemSave([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DimensionCheckpointHash = serialized->get_uint32(DimensionCheckpointHash_type_id);
		DimensionSaves = serialized->unwrap_into_many<rivet::ddl::generated::DimensionSaveData>(DimensionSaves_type_id); 
	}

	[[nodiscard]] auto
	DimensionLoadSystemSave::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DimensionLoadSystemSave::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionLoadSystemSave> {
		if (incoming_type_id == DimensionLoadSystemSave::type_id) {
			return std::make_shared<DimensionLoadSystemSave>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

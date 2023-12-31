// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AutoCheckpointVolumePrius.hpp>

namespace rivet::ddl::generated {
	AutoCheckpointVolumePrius::AutoCheckpointVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Checkpoints = serialized->get_strings(Checkpoints_type_id); 
	}

	[[nodiscard]] auto
	AutoCheckpointVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AutoCheckpointVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AutoCheckpointVolumePrius> {
		if (incoming_type_id == AutoCheckpointVolumePrius::type_id) {
			return std::make_shared<AutoCheckpointVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

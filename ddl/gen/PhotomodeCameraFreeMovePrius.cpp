// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FreeMoveCamData.hpp> 

#include <rivet/ddl/generated/PhotomodeCameraFreeMovePrius.hpp>

namespace rivet::ddl::generated {
	PhotomodeCameraFreeMovePrius::PhotomodeCameraFreeMovePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PhotomodeCameraBasePrius(serialized) {
		CamData = serialized->unwrap_into<rivet::ddl::generated::FreeMoveCamData>(CamData_type_id); 
	}

	[[nodiscard]] auto
	PhotomodeCameraFreeMovePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhotomodeCameraFreeMovePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotomodeCameraFreeMovePrius> {
		if (incoming_type_id == PhotomodeCameraFreeMovePrius::type_id) {
			return std::make_shared<PhotomodeCameraFreeMovePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

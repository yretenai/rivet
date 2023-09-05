// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/InputSettingsData.hpp>
#include <rivet/ddl/generated/PhotomodeSystemConfig.hpp>
#include <rivet/ddl/generated/StickerModeData.hpp>
#include <rivet/ddl/generated/FrameData.hpp>
#include <rivet/ddl/generated/PhotoLightSettings.hpp>
#include <rivet/ddl/generated/PhotomodeCameraManagerData.hpp>
#include <rivet/ddl/generated/FilterData.hpp> 

#include <rivet/ddl/generated/PhotomodeSystemSharedConfig.hpp>

namespace rivet::ddl::generated {
	PhotomodeSystemSharedConfig::PhotomodeSystemSharedConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		InputSettings = serialized->unwrap_into<rivet::ddl::generated::InputSettingsData>(InputSettings_type_id);
		StickerMode = serialized->unwrap_into<rivet::ddl::generated::StickerModeData>(StickerMode_type_id);
		LightSettings = serialized->unwrap_into<rivet::ddl::generated::PhotoLightSettings>(LightSettings_type_id);
		Cameras = serialized->unwrap_into<rivet::ddl::generated::PhotomodeCameraManagerData>(Cameras_type_id);
		Frames = serialized->unwrap_into_many<rivet::ddl::generated::FrameData>(Frames_type_id);
		Filters = serialized->unwrap_into_many<rivet::ddl::generated::FilterData>(Filters_type_id); 
	}

	auto
	PhotomodeSystemSharedConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	PhotomodeSystemSharedConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhotomodeSystemSharedConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotomodeSystemSharedConfig> {
		if (incoming_type_id == PhotomodeSystemSharedConfig::type_id) {
			return std::make_shared<PhotomodeSystemSharedConfig>(serialized);
		}

		auto PhotomodeSystemConfig_ptr = PhotomodeSystemConfig::from_substruct(incoming_type_id, serialized);
		if (PhotomodeSystemConfig_ptr != nullptr) {
			return PhotomodeSystemConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

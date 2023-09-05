// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StreamingGameDVRConfig.hpp>
#include <rivet/ddl/generated/StreamingVideoPlaylistConfig.hpp>
#include <rivet/ddl/generated/StreamingBinkConfig.hpp>
#include <rivet/ddl/generated/StreamingStaticImageConfig.hpp> 

#include <rivet/ddl/generated/StreamingVideoBaseConfig.hpp>

namespace rivet::ddl::generated {
	StreamingVideoBaseConfig::StreamingVideoBaseConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		PlayWhenPaused = serialized->get_bool(PlayWhenPaused_type_id);
		UseSRGBTexture = serialized->get_bool(UseSRGBTexture_type_id); 
	}

	auto
	StreamingVideoBaseConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	StreamingVideoBaseConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StreamingVideoBaseConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StreamingVideoBaseConfig> {
		if (incoming_type_id == StreamingVideoBaseConfig::type_id) {
			return std::make_shared<StreamingVideoBaseConfig>(serialized);
		}

		auto StreamingGameDVRConfig_ptr = StreamingGameDVRConfig::from_substruct(incoming_type_id, serialized);
		if (StreamingGameDVRConfig_ptr != nullptr) {
			return StreamingGameDVRConfig_ptr;
		}

		auto StreamingVideoPlaylistConfig_ptr = StreamingVideoPlaylistConfig::from_substruct(incoming_type_id, serialized);
		if (StreamingVideoPlaylistConfig_ptr != nullptr) {
			return StreamingVideoPlaylistConfig_ptr;
		}

		auto StreamingBinkConfig_ptr = StreamingBinkConfig::from_substruct(incoming_type_id, serialized);
		if (StreamingBinkConfig_ptr != nullptr) {
			return StreamingBinkConfig_ptr;
		}

		auto StreamingStaticImageConfig_ptr = StreamingStaticImageConfig::from_substruct(incoming_type_id, serialized);
		if (StreamingStaticImageConfig_ptr != nullptr) {
			return StreamingStaticImageConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

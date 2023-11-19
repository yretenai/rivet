// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MovieSubtitle.hpp> 

#include <rivet/ddl/generated/MovieSubtitlesConfig.hpp>

namespace rivet::ddl::generated {
	MovieSubtitlesConfig::MovieSubtitlesConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Subtitle = serialized->unwrap_into_many<rivet::ddl::generated::MovieSubtitle>(Subtitle_type_id); 
	}

	[[nodiscard]] auto
	MovieSubtitlesConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MovieSubtitlesConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MovieSubtitlesConfig> {
		if (incoming_type_id == MovieSubtitlesConfig::type_id) {
			return std::make_shared<MovieSubtitlesConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
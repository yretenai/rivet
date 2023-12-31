// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StreamingBinkFileConfig.hpp>

namespace rivet::ddl::generated {
	StreamingBinkFileConfig::StreamingBinkFileConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StreamingBinkConfig(serialized) {
		FilePath = serialized->get_string(FilePath_type_id);
		SubtitleConfigFilePath = serialized->get_string(SubtitleConfigFilePath_type_id); 
	}

	[[nodiscard]] auto
	StreamingBinkFileConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StreamingBinkFileConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StreamingBinkFileConfig> {
		if (incoming_type_id == StreamingBinkFileConfig::type_id) {
			return std::make_shared<StreamingBinkFileConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GalacticMapSetPreMapMovieActionPrius.hpp>

namespace rivet::ddl::generated {
	GalacticMapSetPreMapMovieActionPrius::GalacticMapSetPreMapMovieActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		MovieFile = serialized->get_string(MovieFile_type_id);
		SubtitleConfig = serialized->get_string(SubtitleConfig_type_id);
		UnlockLevelEnum = serialized->get_enum<rivet::ddl::generated::LevelEnum>(UnlockLevelEnum_type_id, rivet::ddl::generated::LevelEnum_values); 
	}

	[[nodiscard]] auto
	GalacticMapSetPreMapMovieActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GalacticMapSetPreMapMovieActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GalacticMapSetPreMapMovieActionPrius> {
		if (incoming_type_id == GalacticMapSetPreMapMovieActionPrius::type_id) {
			return std::make_shared<GalacticMapSetPreMapMovieActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
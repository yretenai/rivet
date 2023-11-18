// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShowMovieLocationTextActionPrius.hpp>

namespace rivet::ddl::generated {
	ShowMovieLocationTextActionPrius::ShowMovieLocationTextActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		LocTag = serialized->get_string(LocTag_type_id);
		SecondLocTag = serialized->get_string(SecondLocTag_type_id);
		Delay = serialized->get_float(Delay_type_id);
		Duration = serialized->get_float(Duration_type_id); 
	}

	[[nodiscard]] auto
	ShowMovieLocationTextActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShowMovieLocationTextActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShowMovieLocationTextActionPrius> {
		if (incoming_type_id == ShowMovieLocationTextActionPrius::type_id) {
			return std::make_shared<ShowMovieLocationTextActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

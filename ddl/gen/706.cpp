// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseState.hpp>
#include <rivet/ddl/generated/UIJukeboxSong.hpp> 

#include <rivet/ddl/generated/UIJukeboxConfig.hpp>

namespace rivet::ddl::generated {
	UIJukeboxConfig::UIJukeboxConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		WwiseStateZurkies = serialized->unwrap_into<rivet::ddl::generated::WwiseState>(WwiseStateZurkies_type_id);
		WwiseStateJukebox = serialized->unwrap_into<rivet::ddl::generated::WwiseState>(WwiseStateJukebox_type_id);
		Songs = serialized->unwrap_into_many<rivet::ddl::generated::UIJukeboxSong>(Songs_type_id); 
	}

	auto
	UIJukeboxConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	UIJukeboxConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIJukeboxConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIJukeboxConfig> {
		if (incoming_type_id == UIJukeboxConfig::type_id) {
			return std::make_shared<UIJukeboxConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

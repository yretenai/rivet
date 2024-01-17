// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NPCBotAnimClueMetaDataPrius.hpp>

namespace rivet::ddl::generated {
	NPCBotAnimClueMetaDataPrius::NPCBotAnimClueMetaDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PrimaryClue = serialized->get_uint64(PrimaryClue_type_id, 0);
		AnimClues = serialized->get_uint64s(AnimClues_type_id); 
	}

	[[nodiscard]] auto
	NPCBotAnimClueMetaDataPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NPCBotAnimClueMetaDataPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NPCBotAnimClueMetaDataPrius> {
		if (incoming_type_id == NPCBotAnimClueMetaDataPrius::type_id) {
			return std::make_shared<NPCBotAnimClueMetaDataPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

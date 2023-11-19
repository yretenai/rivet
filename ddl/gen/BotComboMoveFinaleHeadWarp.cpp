// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboMoveFinaleHeadWarp.hpp>

namespace rivet::ddl::generated {
	BotComboMoveFinaleHeadWarp::BotComboMoveFinaleHeadWarp([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboMoveBase(serialized) {
		PortalActorAsset = serialized->get_string(PortalActorAsset_type_id);
		HeadActorAsset = serialized->get_string(HeadActorAsset_type_id);
		HeadActorVol = serialized->get_uint64(HeadActorVol_type_id); 
	}

	[[nodiscard]] auto
	BotComboMoveFinaleHeadWarp::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboMoveFinaleHeadWarp::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveFinaleHeadWarp> {
		if (incoming_type_id == BotComboMoveFinaleHeadWarp::type_id) {
			return std::make_shared<BotComboMoveFinaleHeadWarp>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
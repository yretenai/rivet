// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameManagerRiotSquadPrius.hpp> 

#include <rivet/ddl/generated/GameManagerCampaignPrius.hpp>

namespace rivet::ddl::generated {
	GameManagerCampaignPrius::GameManagerCampaignPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameManagerPrius(serialized) {

	}

	[[nodiscard]] auto
	GameManagerCampaignPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameManagerCampaignPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameManagerCampaignPrius> {
		if (incoming_type_id == GameManagerCampaignPrius::type_id) {
			return std::make_shared<GameManagerCampaignPrius>(serialized);
		}

		auto GameManagerRiotSquadPrius_ptr = GameManagerRiotSquadPrius::from_substruct(incoming_type_id, serialized);
		if (GameManagerRiotSquadPrius_ptr != nullptr) {
			return GameManagerRiotSquadPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

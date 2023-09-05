// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorAssetReferenceDef.hpp> 

#include <rivet/ddl/generated/GameAwardDetachingBotKillCountPrius.hpp>

namespace rivet::ddl::generated {
	GameAwardDetachingBotKillCountPrius::GameAwardDetachingBotKillCountPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AwardBasePrius(serialized) {
		DetachingBotAsset = serialized->unwrap_into<rivet::ddl::generated::ActorAssetReferenceDef>(DetachingBotAsset_type_id); 
	}

	auto
	GameAwardDetachingBotKillCountPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	GameAwardDetachingBotKillCountPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameAwardDetachingBotKillCountPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameAwardDetachingBotKillCountPrius> {
		if (incoming_type_id == GameAwardDetachingBotKillCountPrius::type_id) {
			return std::make_shared<GameAwardDetachingBotKillCountPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

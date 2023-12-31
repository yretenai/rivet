// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotConfigDeath.hpp>
#include <rivet/ddl/generated/DeathReactionModifier.hpp>
#include <rivet/ddl/generated/BloodPoolPrius.hpp> 

#include <rivet/ddl/generated/BotConfigDeath.hpp>

namespace rivet::ddl::generated {
	BotConfigDeath::BotConfigDeath([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		CorpseCleanup = serialized->get_bool(CorpseCleanup_type_id);
		DeleteOnDeath = serialized->get_bool(DeleteOnDeath_type_id);
		CanRagdoll = serialized->get_bool(CanRagdoll_type_id);
		BloodPool = serialized->unwrap_into<rivet::ddl::generated::BloodPoolPrius>(BloodPool_type_id);
		SkeletonActor = serialized->get_string(SkeletonActor_type_id);
		DeathReactionMods = serialized->unwrap_into_many<rivet::ddl::generated::DeathReactionModifier>(DeathReactionMods_type_id); 
	}

	[[nodiscard]] auto
	BotConfigDeath::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotConfigDeath::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigDeath> {
		if (incoming_type_id == BotConfigDeath::type_id) {
			return std::make_shared<BotConfigDeath>(serialized);
		}

		auto GameBotConfigDeath_ptr = GameBotConfigDeath::from_substruct(incoming_type_id, serialized);
		if (GameBotConfigDeath_ptr != nullptr) {
			return GameBotConfigDeath_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotHibernateSystemSettings.hpp>

namespace rivet::ddl::generated {
	BotHibernateSystemSettings::BotHibernateSystemSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DebugInterface = serialized->get_bool(DebugInterface_type_id);
		EnableDistantBotPerf = serialized->get_bool(EnableDistantBotPerf_type_id);
		FarEnemyDistance = serialized->get_float(FarEnemyDistance_type_id);
		FarNPCDistance = serialized->get_float(FarNPCDistance_type_id);
		MaxCountDistantBots = serialized->get_int32(MaxCountDistantBots_type_id); 
	}

	[[nodiscard]] auto
	BotHibernateSystemSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotHibernateSystemSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotHibernateSystemSettings> {
		if (incoming_type_id == BotHibernateSystemSettings::type_id) {
			return std::make_shared<BotHibernateSystemSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TurretPivotBase.hpp>
#include <rivet/ddl/generated/BotIntroDataDropship.hpp> 

#include <rivet/ddl/generated/GameBotShooterArmoredTransportPrius.hpp>

namespace rivet::ddl::generated {
	GameBotShooterArmoredTransportPrius::GameBotShooterArmoredTransportPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnerBotPrius(serialized) {
		IntroData = serialized->unwrap_into<rivet::ddl::generated::BotIntroDataDropship>(IntroData_type_id);
		TurretPivotType = serialized->unwrap_into<rivet::ddl::generated::TurretPivotBase>(TurretPivotType_type_id); 
	}

	[[nodiscard]] auto
	GameBotShooterArmoredTransportPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotShooterArmoredTransportPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotShooterArmoredTransportPrius> {
		if (incoming_type_id == GameBotShooterArmoredTransportPrius::type_id) {
			return std::make_shared<GameBotShooterArmoredTransportPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

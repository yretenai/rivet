// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoverMoverManagerPrius.hpp>
#include <rivet/ddl/generated/GameBotMoverManagerPrius.hpp>
#include <rivet/ddl/generated/CVCShapeConfig.hpp> 

#include <rivet/ddl/generated/BotMoverManagerPrius.hpp>

namespace rivet::ddl::generated {
	BotMoverManagerPrius::BotMoverManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MoverManagerPrius(serialized) {
		CVCShape = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCShape_type_id);
		UseNavAsGround = serialized->get_bool(UseNavAsGround_type_id, false);
		UseSingleMoveSweep = serialized->get_bool(UseSingleMoveSweep_type_id, true);
		EnableSpeculativeCollision = serialized->get_bool(EnableSpeculativeCollision_type_id, false);
		PushOnEqual = serialized->get_bool(PushOnEqual_type_id, true);
		UseFullSpeedDeflection = serialized->get_bool(UseFullSpeedDeflection_type_id, false);
		UseSoftCollisions = serialized->get_bool(UseSoftCollisions_type_id, false);
		SoftCVCInner = serialized->get_float(SoftCVCInner_type_id, 0.250000);
		SoftCVCOuter = serialized->get_float(SoftCVCOuter_type_id, 0.750000); 
	}

	[[nodiscard]] auto
	BotMoverManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotMoverManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotMoverManagerPrius> {
		if (incoming_type_id == BotMoverManagerPrius::type_id) {
			return std::make_shared<BotMoverManagerPrius>(serialized);
		}

		auto GameBotMoverManagerPrius_ptr = GameBotMoverManagerPrius::from_substruct(incoming_type_id, serialized);
		if (GameBotMoverManagerPrius_ptr != nullptr) {
			return GameBotMoverManagerPrius_ptr;
		}

		auto HoverMoverManagerPrius_ptr = HoverMoverManagerPrius::from_substruct(incoming_type_id, serialized);
		if (HoverMoverManagerPrius_ptr != nullptr) {
			return HoverMoverManagerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistMoveTurnModifier.hpp>

namespace rivet::ddl::generated {
	AimAssistMoveTurnModifier::AimAssistMoveTurnModifier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enable = serialized->get_bool(Enable_type_id);
		MaxMoveSpeed = serialized->get_float(MaxMoveSpeed_type_id);
		FrictionMod = serialized->get_float(FrictionMod_type_id);
		MagnetMod = serialized->get_float(MagnetMod_type_id);
		CenterMod = serialized->get_float(CenterMod_type_id); 
	}

	[[nodiscard]] auto
	AimAssistMoveTurnModifier::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistMoveTurnModifier::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistMoveTurnModifier> {
		if (incoming_type_id == AimAssistMoveTurnModifier::type_id) {
			return std::make_shared<AimAssistMoveTurnModifier>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

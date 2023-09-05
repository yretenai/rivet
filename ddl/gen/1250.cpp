// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistTurnMatchModifier.hpp>

namespace rivet::ddl::generated {
	AimAssistTurnMatchModifier::AimAssistTurnMatchModifier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enable = serialized->get_bool(Enable_type_id);
		MatchTolerance = serialized->get_float(MatchTolerance_type_id);
		FrictionMod = serialized->get_float(FrictionMod_type_id);
		MagnetMod = serialized->get_float(MagnetMod_type_id);
		CenterMod = serialized->get_float(CenterMod_type_id); 
	}

	auto
	AimAssistTurnMatchModifier::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	AimAssistTurnMatchModifier::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistTurnMatchModifier::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistTurnMatchModifier> {
		if (incoming_type_id == AimAssistTurnMatchModifier::type_id) {
			return std::make_shared<AimAssistTurnMatchModifier>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

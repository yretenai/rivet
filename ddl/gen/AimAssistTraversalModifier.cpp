// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistTraversalModifier.hpp>

namespace rivet::ddl::generated {
	AimAssistTraversalModifier::AimAssistTraversalModifier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enable = serialized->get_bool(Enable_type_id, false);
		FrictionMod = serialized->get_float(FrictionMod_type_id, 1.000000);
		MagnetMod = serialized->get_float(MagnetMod_type_id, 1.000000);
		CenterMod = serialized->get_float(CenterMod_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	AimAssistTraversalModifier::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistTraversalModifier::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistTraversalModifier> {
		if (incoming_type_id == AimAssistTraversalModifier::type_id) {
			return std::make_shared<AimAssistTraversalModifier>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

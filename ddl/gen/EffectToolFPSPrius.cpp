// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EffectToolFPSPrius.hpp>

namespace rivet::ddl::generated {
	EffectToolFPSPrius::EffectToolFPSPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EffectToolBasePrius(serialized) {
		AllowPan = serialized->get_bool(AllowPan_type_id, true);
		AllowZoom = serialized->get_bool(AllowZoom_type_id, true);
		AllowRotation = serialized->get_bool(AllowRotation_type_id, true); 
	}

	[[nodiscard]] auto
	EffectToolFPSPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EffectToolFPSPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EffectToolFPSPrius> {
		if (incoming_type_id == EffectToolFPSPrius::type_id) {
			return std::make_shared<EffectToolFPSPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

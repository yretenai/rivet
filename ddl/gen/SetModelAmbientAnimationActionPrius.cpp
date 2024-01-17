// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetModelAmbientAnimationActionPrius.hpp>

namespace rivet::ddl::generated {
	SetModelAmbientAnimationActionPrius::SetModelAmbientAnimationActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Rendering);
		AmbientAnimation = serialized->get_float(AmbientAnimation_type_id, 0.000000);
		MaxDisplacement = serialized->get_float(MaxDisplacement_type_id, 2.000000);
		MaxDynamicForce = serialized->get_float(MaxDynamicForce_type_id, 8.000000);
		MinDynamicForce = serialized->get_float(MinDynamicForce_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	SetModelAmbientAnimationActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetModelAmbientAnimationActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetModelAmbientAnimationActionPrius> {
		if (incoming_type_id == SetModelAmbientAnimationActionPrius::type_id) {
			return std::make_shared<SetModelAmbientAnimationActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

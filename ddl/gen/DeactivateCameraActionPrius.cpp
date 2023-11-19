// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DeactivateCameraActionPrius.hpp>

namespace rivet::ddl::generated {
	DeactivateCameraActionPrius::DeactivateCameraActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		TransitionType = serialized->get_enum<rivet::ddl::generated::x787c02d3>(TransitionType_type_id, rivet::ddl::generated::x787c02d3_values);
		BlendTime = serialized->get_float(BlendTime_type_id);
		BlendEaseIn = serialized->get_float(BlendEaseIn_type_id);
		BlendEaseOut = serialized->get_float(BlendEaseOut_type_id);
		PruneType = serialized->get_enum<rivet::ddl::generated::x1e271f24>(PruneType_type_id, rivet::ddl::generated::x1e271f24_values);
		ResetNext = serialized->get_bool(ResetNext_type_id);
		DeactivateLocal = serialized->get_bool(DeactivateLocal_type_id); 
	}

	[[nodiscard]] auto
	DeactivateCameraActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DeactivateCameraActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DeactivateCameraActionPrius> {
		if (incoming_type_id == DeactivateCameraActionPrius::type_id) {
			return std::make_shared<DeactivateCameraActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TunnelerExitGroundEvent.hpp>

namespace rivet::ddl::generated {
	TunnelerExitGroundEvent::TunnelerExitGroundEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		IsExitingForEnemy = serialized->get_bool(IsExitingForEnemy_type_id);
		IsPuppy = serialized->get_bool(IsPuppy_type_id);
		GroundMaterial = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(GroundMaterial_type_id, rivet::ddl::generated::x10b3c4cf_values);
		AudioMaterial = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(AudioMaterial_type_id, rivet::ddl::generated::x10b3c4cf_values); 
	}

	[[nodiscard]] auto
	TunnelerExitGroundEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TunnelerExitGroundEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TunnelerExitGroundEvent> {
		if (incoming_type_id == TunnelerExitGroundEvent::type_id) {
			return std::make_shared<TunnelerExitGroundEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

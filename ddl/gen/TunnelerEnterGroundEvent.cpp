// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TunnelerEnterGroundEvent.hpp>

namespace rivet::ddl::generated {
	TunnelerEnterGroundEvent::TunnelerEnterGroundEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		IsFirstEnter = serialized->get_bool(IsFirstEnter_type_id);
		IsPuppy = serialized->get_bool(IsPuppy_type_id);
		GroundMaterial = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(GroundMaterial_type_id, rivet::ddl::generated::x10b3c4cf_values);
		AudioMaterial = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(AudioMaterial_type_id, rivet::ddl::generated::x10b3c4cf_values); 
	}

	[[nodiscard]] auto
	TunnelerEnterGroundEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TunnelerEnterGroundEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TunnelerEnterGroundEvent> {
		if (incoming_type_id == TunnelerEnterGroundEvent::type_id) {
			return std::make_shared<TunnelerEnterGroundEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

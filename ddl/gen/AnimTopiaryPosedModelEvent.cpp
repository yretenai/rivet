// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimTopiaryPosedModelEvent.hpp>

namespace rivet::ddl::generated {
	AnimTopiaryPosedModelEvent::AnimTopiaryPosedModelEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PosedModel = serialized->get_string(PosedModel_type_id); 
	}

	[[nodiscard]] auto
	AnimTopiaryPosedModelEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimTopiaryPosedModelEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimTopiaryPosedModelEvent> {
		if (incoming_type_id == AnimTopiaryPosedModelEvent::type_id) {
			return std::make_shared<AnimTopiaryPosedModelEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

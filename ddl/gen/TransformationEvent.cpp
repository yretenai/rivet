// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TransformationEvent.hpp>

namespace rivet::ddl::generated {
	TransformationEvent::TransformationEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BaseTransformationEvent(serialized) {

	}

	[[nodiscard]] auto
	TransformationEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TransformationEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TransformationEvent> {
		if (incoming_type_id == TransformationEvent::type_id) {
			return std::make_shared<TransformationEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StackableCrateLandEvent.hpp>

namespace rivet::ddl::generated {
	StackableCrateLandEvent::StackableCrateLandEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		FinalFallSpeed = serialized->get_float(FinalFallSpeed_type_id); 
	}

	[[nodiscard]] auto
	StackableCrateLandEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StackableCrateLandEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StackableCrateLandEvent> {
		if (incoming_type_id == StackableCrateLandEvent::type_id) {
			return std::make_shared<StackableCrateLandEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

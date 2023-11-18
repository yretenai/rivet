// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IncinerateJointEvent.hpp>

namespace rivet::ddl::generated {
	IncinerateJointEvent::IncinerateJointEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): JointCrawlerEventBase(serialized) {

	}

	[[nodiscard]] auto
	IncinerateJointEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IncinerateJointEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IncinerateJointEvent> {
		if (incoming_type_id == IncinerateJointEvent::type_id) {
			return std::make_shared<IncinerateJointEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

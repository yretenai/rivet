// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FossilizeJointEvent.hpp>

namespace rivet::ddl::generated {
	FossilizeJointEvent::FossilizeJointEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): JointCrawlerEventBase(serialized) {

	}

	[[nodiscard]] auto
	FossilizeJointEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FossilizeJointEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FossilizeJointEvent> {
		if (incoming_type_id == FossilizeJointEvent::type_id) {
			return std::make_shared<FossilizeJointEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

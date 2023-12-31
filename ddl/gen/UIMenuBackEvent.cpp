// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIMenuBackEvent.hpp>

namespace rivet::ddl::generated {
	UIMenuBackEvent::UIMenuBackEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	UIMenuBackEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIMenuBackEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIMenuBackEvent> {
		if (incoming_type_id == UIMenuBackEvent::type_id) {
			return std::make_shared<UIMenuBackEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated

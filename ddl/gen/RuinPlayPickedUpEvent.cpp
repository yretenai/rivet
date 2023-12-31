// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RuinPlayPickedUpEvent.hpp>

namespace rivet::ddl::generated {
	RuinPlayPickedUpEvent::RuinPlayPickedUpEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		RuinId = serialized->get_enum<rivet::ddl::generated::xeccc3486>(RuinId_type_id, rivet::ddl::generated::xeccc3486_values); 
	}

	[[nodiscard]] auto
	RuinPlayPickedUpEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RuinPlayPickedUpEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RuinPlayPickedUpEvent> {
		if (incoming_type_id == RuinPlayPickedUpEvent::type_id) {
			return std::make_shared<RuinPlayPickedUpEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
